#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* tree_input()
{
    int val;
    cin >> val;
    if(val == -1) return NULL;

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* cur = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if(l != -1)
        {
            cur->left = new Node(l);
            q.push(cur->left);
        }
        if(r != -1)
        {
            cur->right = new Node(r);
            q.push(cur->right);
        }
    }
    return root;
}

void tree_print(Node* root)
{
    if(!root) return;
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* cur = q.front();
        q.pop();

        cout << cur->val << " ";

        if(cur->left) q.push(cur->left);
        if(cur->right) q.push(cur->right);
    }
    cout << '\n';
}

// int heigth(Node* root)
// {
//     if(root == NULL) return 0;
//     int l = heigth(root->left);
//     int r = heigth(root->right);
//     return max(l, r) + 1;
// }

int heigth(Node* root)
{
    if(root == NULL) return 0;
    return max(heigth(root->left), heigth(root->right)) + 1;
}

int main()
{
    Node* root = tree_input();
    tree_print(root);

    cout << heigth(root) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* input_node()
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

void print_node(Node* root)
{
    if(root == NULL) return;

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
    cout << endl;
}

int count_leaf_node(Node* root)
{
    if(root == NULL) return 0;

    if(root->left == NULL && root->right == NULL)
        return 1;

    int l = count_leaf_node(root->left);
    int r = count_leaf_node(root->right);
    return l + r;
}

int main()
{
    Node* root = input_node();
    print_node(root);

    cout << count_leaf_node(root) << endl;

    return 0;
}
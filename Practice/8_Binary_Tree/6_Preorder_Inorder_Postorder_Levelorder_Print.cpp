// Preorder     =>  Root → Left → Right
// Inorder      =>  Left → Root → Right
// Postorder    =>  Left → Right → Root
// Level        =>  BFS

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

void print_preorder(Node* root)
{
    if(root == NULL) return;

    cout << root->val << " ";

    print_preorder(root->left);
    print_preorder(root->right);
}

void print_inorder(Node* root)
{
    if(root == NULL) return;

    print_inorder(root->left);
    cout << root->val << " ";
    print_inorder(root->right);
}

void print_postorder(Node* root)
{
    if(root == NULL) return;

    print_postorder(root->left);
    print_postorder(root->right);
    cout << root->val << " ";
}

void level_order(Node* root)
{
    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        Node* cur = q.front();
        q.pop();

        cout << cur->val << " ";

        if(cur->left) q.push(cur->left);
        if(cur->right) q.push(cur->right);
    }
}

int main()
{
    Node* root = input_node();

    print_preorder(root);
    cout << "\n";
    print_inorder(root);
    cout << "\n";
    print_postorder(root);
    cout << "\n";
    level_order(root);

    return 0;
}
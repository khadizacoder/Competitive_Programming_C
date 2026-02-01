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

Node *input_tree()
{
    int val;
    cin >> val;

    if (val == -1)
        return NULL;
    Node *root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *cur = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            cur->left = new Node(l);
            q.push(cur->left);
        }
        if (r != -1)
        {
            cur->right = new Node(r);
            q.push(cur->right);
        }
    }
    return root;
}

// void print_node(Node *root)
// {
//     if (!root)
//         return;

//     queue<Node *> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         Node *cur = q.front();
//         q.pop();

//         cout << cur->val << " ";

//         if (cur->left)
//             q.push(cur->left);
//         if (cur->right)
//             q.push(cur->right);
//     }
//     cout << endl;
// }


// void print_depth(Node *root, int d)
// {
//     if (root == NULL)
//         return;

//     cout << root->val << " depth = " << d << endl;

//     print_depth(root->left, d + 1);
//     print_depth(root->right, d + 1);
// }

int print_depth(Node *root)
{
    if (root == NULL)
        return 0;

    int l = print_depth(root->left);
    int r = print_depth(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = input_tree();
    // print_node(root);
    // print_depth(root, 1);

    int depth = print_depth(root);
    cout << depth << endl;

    return 0;
}

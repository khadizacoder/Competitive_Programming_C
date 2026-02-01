// Balanced – প্রতিটি node এর left এবং right subtree height এর পার্থক্য ≤ 1

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
    queue<Node *> q;
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

// int max_heigth(Node* root)
// {
//     if(root == NULL) return 0;

//     int l = max_heigth(root->left);
//     int r = max_heigth(root->right);

//     return max(l, r) + 1;
// }

// bool isBalanced(Node* root)
// {
//     if(root == NULL) return true;

//     int l = max_heigth(root->left);
//     int r = max_heigth(root->right);

//     if(abs(l-r) > 1) return false;

//     return isBalanced(root->left) && isBalanced(root->right);
// }

// Easy way

int height(Node* root)
{
    if(root == NULL) return 0;

    int l = height(root->left);
    if(l == -1) return -1;

    int r = height(root->right);
    if(r == -1) return -1;

    if(abs(l - r) > 1) return -1;
    return 1 + max(l, r);
}

// bool isBalanced(Node* root)
// {
//     return height(root) != -1;
// }

int main()
{
    Node* root = input_node();

    // if(isBalanced(root))
    //     cout << "True";
    // else
    //     cout << "False";

    if(height(root) != -1)
        cout << "True";
    else
        cout << "False";

    return 0;
}
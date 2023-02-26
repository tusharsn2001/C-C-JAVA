// PreOrder tree {1,2,4,-1,-1,5,-1,-1,6,-1,-1}
#include <iostream>
#include <queue>
using namespace std;
// int i = -1;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
// class BinaryTree
// {
// public:
//     static int idx = -1;
Node *buildTree(Node *root)
{

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    //  data = nodes[i];
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data inserting in Left of " << data << endl;
    root->left = buildTree(root);
    cout << "Enter data for inserting in Right of " << data << endl;
    root->right = buildTree(root);

    return root;
}
//};
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();

        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    // int nodes[] = {1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1};
    Node *root = NULL;
    // BinaryTree tree = new BinaryTree();
    // Node *root = tree.buildTree(nodes);
    // std::cout << tree.data;
    root = buildTree(root);
    levelOrderTraversal(root);
    return 0;
}
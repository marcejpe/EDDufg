
#include <iostream>
#include <string>
using namespace std;
 

struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};
 
struct Trunk
{
    Trunk *prev;
    string str;
 
    Trunk(Trunk *prev, string str)
    {
        this->prev = prev;
        this->str = str;
    }
};
 
void showTrunks(Trunk *p)
{
    if (p == nullptr) {
        return;
    }
 
    showTrunks(p->prev);
    cout << p->str;
}
 
void printTree(Node* root, Trunk *prev, bool isLeft)
{
    if (root == nullptr) {
        return;
    }
 
    string prev_str = "    ";
    Trunk *trunk = new Trunk(prev, prev_str);
 
    printTree(root->right, trunk, true);
 
    if (!prev) {
        trunk->str = "---";
    }
    else if (isLeft)
    {
        trunk->str = "---";
        prev_str = "   |";
    }
    else {
        trunk->str = "---";
        prev->str = prev_str;
    }
 
    showTrunks(trunk);
    cout << " " << root->data << endl;
 
    if (prev) {
        prev->str = prev_str;
    }
    trunk->str = "   |";
 
    printTree(root->left, trunk, false);
}
 
int main()
{
    
    Node* root = new Node(8);
    root->left = new Node(10);
    root->right = new Node(5);
    root->left->left = new Node(11);
    root->left->right = new Node(9);
    root->right->left = new Node(6);
    root->right->right = new Node(2);
  
    
    printTree(root, nullptr, false);
 
    return 0;
}

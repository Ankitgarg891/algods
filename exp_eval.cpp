// C++ program to evaluate an expression tree
#include <bits/stdc++.h>
using namespace std;
 
// Class to represent the nodes of syntax tree
class node
{
public:
    string info;
    node *left=NULL;
    node *right=NULL;
    node(string x)
    {
        info = x;
    }
};
 
// Utility function to return the integer value
// of a given string
int toInt(string s)
{
    
}
 
// This function receives a node of the syntax tree
// and recursively evaluates it
int eval(node* root)
{

    if (root->left==NULL && root->right==NULL)
    {
        return stoi(root->info);
    }

    int op1=eval(root->left);
    int op2=eval(root->right);

    if (root->info == "+")
    {
        return op1+op2;
    }
    else if (root->info=="-")
    {
        return op1-op2;
    }
    else if (root->info=="*")
    {
        return op1*op2;
    }
    else if (root->info=="/")
    {
        return op1/op2;
    }

}
 
//driver function to check the above program
int main()
{
    // create a syntax tree
    node *root = new node("+");
    root->left = new node("*");
    root->left->left = new node("5");
    root->left->right = new node("4");
    root->right = new node("-");
    root->right->left = new node("100");
    root->right->right = new node("20");
    cout << eval(root) << endl;
 
    delete(root);
 
    root = new node("+");
    root->left = new node("*");
    root->left->left = new node("5");
    root->left->right = new node("4");
    root->right = new node("-");
    root->right->left = new node("100");
    root->right->right = new node("/");
    root->right->right->left = new node("20");
    root->right->right->right = new node("2");
 
    cout << eval(root);
    return 0;
}
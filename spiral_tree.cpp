#include <iostream>
using namespace std;

struct node{
    node* left;
    int data;
    node* right;

};

node* add_node(int data)
{
    node* temp=new node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}


void spiral_traversal(node* ptr)
{
    queue<node*> q;

    vector <int> v;
    q.push(ptr);
    while (q.empty()==false) {
        
        if (q.front()->left!=NULL)
        {
        q.push(q.front()->left);
        }
        if (q.front()->right!=NULL)
        {
        q.push(q.front()->right);
        }
        cout<<q.front()->data<<"---";
        q.pop();
    }
}


int main()
{
    node* root =add_node(10);
    root->left=add_node(8);

    root->right=add_node(2);
    root->left->left=add_node(3);

    spiral_traversal(root);


    return 0;

}




// C++ program to check if there exist an edge whose 
// removal creates two trees of same size 
#include<bits/stdc++.h> 
using namespace std; 
  
struct Node 
{ 
    int data; 
    struct Node* left, *right; 
}; 
  
// utility function to create a new node 
struct Node* newNode(int x) 
{ 
    struct Node* temp = new Node; 
    temp->data = x; 
    temp->left = temp->right = NULL; 
    return temp; 
}; 
  
void inorder(Node* root)
{
    queue <Node*> q;
    q.push(root);
    while (!q.empty())

    {
        Node* temp=q.front();
        cout<<q.front()->data<<endl;

        q.pop();

        if (temp->left!=NULL)q.push(temp->left);
        if (temp->right!=NULL) q.push(temp->right);
    }



} 

int replace(Node* root)
{

    if (root==NULL)
        return 0;

    if (root->left==NULL && root->right==NULL)
    {
        return root->data;
    }

    int suml=replace(root->left);
    int sumr=replace(root->right);

    if (root->left!=NULL)(root->left)->data=sumr;
    if (root->right!=NULL)(root->right)->data=suml;

    return (suml+sumr+root->data);
}

void right_view(Node* root)
{
    queue <Node*> q;
    q.push(root);
    q.push(NULL);


    Node* prev=root;
    Node* temp;

    while (q.front()!=NULL || temp!=NULL)

    {
        prev=temp;
        temp=q.front();
      //  cout<<q.front()->data<<endl;

        q.pop();

        if (temp==NULL)
        {
            cout<<prev->data<<endl;
            q.push(NULL);


        }
        else
    {
        if (temp->left!=NULL)q.push(temp->left);
        if (temp->right!=NULL) q.push(temp->right);

    }
    }



}


// Driver code 
int main() 
{ 
    struct Node* root = newNode(5); 
    root->left = newNode(1); 
    root->right = newNode(6); 
    root->left->left = newNode(3); 
    root->right->left = newNode(7); 
    root->right->right = newNode(4); 


    //replace(root);
   // root->data=0;

    right_view(root);

  //  inorder(root);
  
    
    return 0; 
} 
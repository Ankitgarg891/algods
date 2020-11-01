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
 Node* newNode(int x) 
{ 
     Node* temp = new Node; 
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

void top_view(Node* root,int hd,int lev,vector <vector<pair<int,int> > >  &v)
{
    if (root==NULL) return;

    v[100+hd].push_back(make_pair(lev,root->data));
    top_view(root->left,hd-1,lev+1,v);
    top_view(root->right,hd+1,lev+1,v);



}

bool cmp( pair<int,int>  a,  pair<int,int>  b)
{

    return (a.first<b.first);

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
    vector <vector< pair<int,int> > > v(200);

    top_view(root,0,0,v);

 //   cout<<v[0][0]<<"\nhiii::\n";

    for(int i=90;i<110;i++)
    {
        cout<<"here"<<endl;
        sort(v[i].begin(),v[i].end(),cmp);


        for (int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j].second<<"    ";
        }
        cout<<endl;
    }



  //  inorder(root);
  
    
    return 0; 
} 
/*
 // Sample code to perform I/O:
 
 cin >> name;                            // Reading input from STDIN
 cout << "Hi, " << name << ".\n";        // Writing output to STDOUT
 
 // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
 */

// Write your code here

#include<iostream>
#include<string>
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;
    
};



void addnode(string path,int value,struct node* root)
{
    //struct node* temp=new node; //or node* temp=new node
    node* ptr=root;
    
    for (int i=0;i<path.length();i++)
    {
        node *temp=new node;
        temp->data=NULL;
        temp->left=NULL;
        temp->right=NULL;
        if (path[i]=='L')
        {
            if (ptr->left==NULL)
            {
                ptr->left=temp;
            }
            ptr=ptr->left;
        }
        else
        {
            if (ptr->right==NULL)
            {
                
                ptr->right=temp;
                
            }
            
            ptr=ptr->right;
            
        }
        
    }
    ptr->data=value;
}

int height (node * ptr)
{
    /*if (ptr->left==NULL && ptr->right==NULL)
    {
        return 0;
    }*/
    if (ptr==NULL)
    {
        return -1;
    }
    int height_left=height(ptr->left);
    int height_right=height(ptr->right);
    
    int height_max= max(height_left,height_right)+1;
    
    return height_max;
}



int diameter (node *ptr,int &dia)
{
    
    if (ptr==NULL)
    {
        return 0;
    }
    int height_left=diameter(ptr->left,dia);
    int height_right=diameter(ptr->right,dia);
    
    int height_max= max(height_left,height_right)+1;
    
    dia=max(dia,height_left+height_right+1);
    
    return height_max;

    
    
}
void preorder(node * ptr)
{
    if (ptr==NULL)
    {
        return;
    }

    
    cout<<ptr->data<<"--";
    preorder(ptr->left);
    preorder(ptr->right);
}

void inorder(node *ptr)
{
    if (ptr==NULL)
    {
        return;
    }
    
    inorder(ptr->left);
    cout<<ptr->data<<"--";
    inorder(ptr->right);
    
}




int main()

{
    int n,r_data;
    cin>>n>>r_data;
    
    node* root=new node;
    (*root).data=r_data;
    root->left=NULL;
    root->right=NULL;
    
    for (int i=0;i<n-1;i++)
    {
        string path;
        int val;
        //cout<<"path&val:"<<endl;
        cin>>path>>val;
        addnode(path,val,root);
    }
    //cout<<"tree:";
    //inorder(root);
    //cout<<endl;
    //cout<<height(root)<<endl;
    
    int dia=0;
    diameter(root,dia);
    cout<<dia;
    return 0;
}

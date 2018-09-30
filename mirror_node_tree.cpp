#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int a)
	{
		data=a;
		left=NULL;
		right=NULL;
	}
};

void insert(node* root,int p,int c,char lr)
{
	if (root==NULL)
	{
		return;
	}
	if (root->data==p)
	{
		if (lr=='L')
		{
			root->left=new node(c);
			return;
		}
		else
		{
			root->right=new node(c);
			return;
		}
	}

	insert (root->left,p,c,lr);
	insert (root->right,p,c,lr);

	return;}

void preorder(node* root)
{
	if (root==NULL) return;
	cout<<root->data<<"   ";
	preorder(root->left);
	preorder(root->right);

}

int find_image(node* left,node* right,int val)
{
	if (left==NULL || right==NULL) { return -1;}

	if (left->data==val)
	{
		if(right!= NULL) {return right->data; }
	}
	if (right->data==val)
	{
		if(left!=NULL) {return left->data; }
		else { return -1;}
	}

	

	int a=find_image(left->left,right->right,val);

	int b=find_image(left->right,right->left,val);

	return (a>b?a:b);
}

int main(int a,char* b[])
{
	node* root= new node(1);

	int n,q;

	cin>>n>>q;

	for (int i=0;i<n-1;i++)
	{
		int p,c;
		char lr;
		cin>>p>>c>>lr;

		insert(root,p,c,lr);

	}

	//preorder(root);

	for (int i=0;i<q;i++)
	{
		int a;
		cin>>a;
		cout<<find_image(root,root,a)<<endl;


	}

	
}
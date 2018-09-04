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


int sum_tree(node* ptr,int sum)
{
	if (ptr== NULL){
		return 0;
	}
	int h;
	int s1=sum_tree(ptr->left,sum);
	int s2=sum_tree(ptr->right,sum);
	h=s1+s2;
	if (h==0)
	{
		//cout<<"here";
		sum=sum+ptr->data;
	}
	
	return sum+s1+s2;
}
int main()
{
	node* root =add_node(10);
	root->left=add_node(8);

	root->right=add_node(2);
	root->left->left=add_node(3);

	cout<<sum_tree(root,0);


	return 0;

}
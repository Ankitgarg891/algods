#include <iostream>
#include <queue>
using namespace std;

struct node
{
	int data;
	node* left;
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

void find_minmax(int &min,int &max,int hd,node* root)
{
	if (root==NULL)
	{
		return;
	}
	if (hd < min) min=hd;
	if (hd > max) max=hd;
	find_minmax(min,max,hd-1,root->left);
	find_minmax(min,max,hd+1,root->right);

}

void print_line(int line_no,int hd,node* root)
{
	/*if (root == NULL)
	{
		return ;
	}
	if (hd==line_no)	cout<<root->data<<"	";
	print_line(line_no,hd-1,root->left);
	print_line(line_no,hd+1,root->right);*/
	


	queue<pair<node*,int> > q;
	q.push(make_pair(root,hd));
	while(!q.empty())
	{
		int hd2=q.front().second;
		
		if (q.front().first->left!=NULL)q.push(make_pair(q.front().first->left,hd2-1));
		if (q.front().first->right!=NULL)q.push(make_pair(q.front().first->right,hd2+1));

		if (hd2==line_no)
			cout<<q.front().first->data<<" ";

		q.pop();



	}


}

void top_view(int  line_no,int hd,node* root)
{
	/*if (root == NULL)
	{
		return ;
	}
	if (hd==line_no)	{
		cout<<root->data<<"	";
		return;
	}
	top_view(line_no,hd-1,root->left);
	top_view(line_no,hd+1,root->right);*/
	int flag=0;

	queue<pair<node*,int> > q;
	q.push(make_pair(root,hd));
	while(!q.empty() && flag==0)
	{
		int hd2=q.front().second;
		
		if (q.front().first->left!=NULL)q.push(make_pair(q.front().first->left,hd2-1));
		if (q.front().first->right!=NULL)q.push(make_pair(q.front().first->right,hd2+1));

		if (hd2==line_no)
		{
			cout<<q.front().first->data<<" ";
			flag=1;
		}

		q.pop();
	}






}

void vertical_traversal(node* root)
{
	int min=0,max=0;

	find_minmax(min,max,0,root);
	cout<<"\nvertical traversal:\n";

	for(int line_no=min ; line_no<=max ; line_no++)
	{

		print_line(line_no,0,root);

		cout<<endl;
	}

	cout<<"\ntop view:\n";
	for(int line_no=min ; line_no<=max ; line_no++)
	{

		
	top_view(line_no,0,root);
	cout<<endl;
	}

}


int main()
{
	node* root =add_node(1);
	root->left=add_node(2);

	root->right=add_node(3);
	root->left->left=add_node(4);
	root->left->right=add_node(5);
	root->right->left=add_node(6);
	root->right->right=add_node(7);
	root->right->left->right=add_node(8);
	root->right->right->right=add_node(9);

	root->left->right->right=add_node(11);

	vertical_traversal(root);
	return 0;

}
// {
// /*input
// 2
// 3
// 4 1 L 4 3 R 3 3 L
// 5
// 10 8 L 10 2 R 8 3 L 8 5 R 2 2 L
// */
// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
// 	int data;
// 	Node *left,*right;
// };
// Node *newNode(int data)
// {
//     Node* temp = new Node;
//     temp->data = data;
//     temp->left = NULL;
//     temp->right = NULL;
 
//     return (temp);
// }
// void insert(Node *root,int a1,int a2,char lr){
// 	if(root==NULL){
// 		return;
// 	}
// 	if(root->data==a1){
// 		switch(lr){
// 			case 'L':root->left=newNode(a2);
// 			break;
// 			case 'R':root->right=newNode(a2);
// 			break;
// 		}
// 	}
// 	else{
// 		insert(root->left,a1,a2,lr);
// 		insert(root->right,a1,a2,lr);
// 	}
// }
// void inorder(Node *root){
// 	if(root==NULL)
// 		return;
// 	inorder(root->left);
// 	cout<<root->data<<" ";
// 	inorder(root->right);
// }
// void diagonalSumUtil(Node* root, int vd, map<int, int> &diagonalSum)
// {
//      if(!root)
//            return;
//      diagonalSum[vd] += root->data;
//      diagonalSumUtil(root->left, vd + 1, diagonalSum);
//      diagonalSumUtil(root->right, vd, diagonalSum);
// }
// void diagonalSum(Node *root);
// int main()
// {
// 	//freopen("input.txt","r",stdin);
// 	//freopen("output.txt","w",stdout);
// 	int t;
// 	cin>>t;
// 	while(t-->0)
// 	{
// 		int n;
// 		cin>>n;
// 		int m=n;
// 		Node *root1=NULL;
// 		while(n-->0){
// 			int a1,a2;
// 			cin>>a1>>a2;
// 			char lr;
// 			scanf(" %c",&lr);
// 			if(root1==NULL){
// 				root1=newNode(a1);
// 				switch(lr){
// 					case 'L':root1->left=newNode(a2);
// 					break;
// 					case 'R':root1->right=newNode(a2);
// 					break;
// 				}
// 			}
// 			else{
// 				insert(root1,a1,a2,lr);
// 			}
// 		}
// 		diagonalSum(root1);
// 	}
// }
 
// }

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function below
Node is as follows:
struct Node{
	int data;
	Node *left,*right;
};
*/
void inorder (Node* root, vector <pair<int,pair<int,int>>> &v,int x,int y)

{   if (root==NULL) return  ;
    v.push_back(make_pair(root->data,make_pair(x,y)));
    inorder(root->left,v,x-1,y);
    //count negative range
    inorder(root->right,v,x,y+1);
    
}
void diagonalSum(Node* root)
{
    
    vector <pair<int,pair<int,int>>> v;
    inorder(root,v,0,0);
    // cout<<min_x<<":min_x";
    vector <int> sums (100,0);
    int ctr=0;
 
 for (int i=0;i<v.size();i++)
 {
     ctr=max(ctr,-((v[i].second).first));
     //cout<<v[i].second.first<<endl;
     sums[-((v[i].second).first)]+=v[i].first;
 }
 
 for (int i=0;i<ctr+1;i++)
 {
     
     cout<<sums[i]<<" ";
 }
 cout<<endl;
 
 // Add your code here
}
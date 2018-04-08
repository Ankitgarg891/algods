//
//  main.cpp
//  n_queen_problem(Recursion)
//
//  Created by Ankit Garg on 04/04/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;

int n = 6;

bool rakhsaktahu(int board[][100],int row,int col)
{
    for(int i = 0;i<n;i++)
    {
        if(board[row][i] == 1 )
            return false;
        if(board[i][col] == 1 )
            return false;
    }
    int arr[4][4] = {{1,1},{1,-1},{-1,-1},{-1,1}};
    for(int i = 0;i<4;i++)
    {
        for (int j = 0; j < n; ++j)
        {
            int x = row+arr[i][0]*j,y = col+arr[i][1]*j;
            if(x>=0 && x<n && y>=0 && y<n && board[x][y]==1 )
                return false;
        }
    }
    return true;
}


bool rakhkeaa(int board[][100],int row)
{
    if(row == n)
        return true;
    for(int i = 0;i<n;i++)
    {
        if(rakhsaktahu(board,row,i) ==true)
        {
            board[row][i] = 1;
            if(rakhkeaa(board,row+1)==true)
                return true;
            else
                board[row][i] = 0;
        }
    }
    
    
    return false;
}


int main()
{
    int n = 100;
    
    int board[100][100] = {0};
    rakhkeaa(board,0);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}


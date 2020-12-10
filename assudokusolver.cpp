#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool cansolve(int num,int mat[9][9],int i, int j)
{
    for(int k=0;k<9;k++)
    {
        if(mat[i][k]==num || mat[k][j]==num)
        {
            return false;
        }
    }
    int row=(i/3)*3;
    int col=(j/3)*3;
    for(int k=row;k<row+3;k++)
    {
        for(int m=col;m<col+3;m++)
        {
            if(mat[k][m]==num)
            {
                return false;
            }
        }
    }
    return true;
}
bool solve(int mat[9][9],int i,int j)
{
    if(j==9) return solve(mat,i+1,0);
    if(i==9) return true;
    if(mat[i][j]==0)
    {
        for(int num=1;num<=9;num++)
        {
        if(cansolve(num,mat,i,j))
        {
            mat[i][j]=num;
            bool can_solve=solve(mat,i,j+1);
            if(can_solve)
            {
                return true;
            }
            mat[i][j]=0;
        }
        }
        return false;

    }
    else
    {
        return solve(mat,i,j+1);
    }
}

int main() {
   int n;
   int mat[9][9];
   cin>>n;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>mat[i][j];
       }
   }
   if(solve(mat,0,0))
   {
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               cout<<mat[i][j]<<" ";
           }
           cout<<endl;
       }
   }
   else
   cout<<"-1";
   return 0;
}

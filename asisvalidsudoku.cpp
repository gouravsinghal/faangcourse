#include<bits/stdc++.h>
using namespace std;
bool isValidSudoku(char board[9][9])
{
	map<int,map<int,int>> R;
    map<int,map<int,int>> C;
    map<int,map<int,int>> B;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(board[i][j]!='.')
            {
                int num=board[i][j]-'0';
                if(R[i][num]==1) return false;
                if(C[j][num]==1) return false;
                int bn=(i/3)*3+j/3;
                if(B[bn][num]==1) return false;
                R[i][num]=1;
                C[j][num]=1;
                B[bn][num]=1;
            }
        }
    }
    return true;
}
int main(){
	char matrix[9][9];
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			char ch; cin>>ch;
			matrix[i][j]=ch;
		}
	}
	if(isValidSudoku(matrix)) cout<<"true";
	else
	cout<<"false";

}

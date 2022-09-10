#include <iostream>
using namespace std;

int N; //num_queens
int board[8][8]; //size_board
int i,j;

//stores queen matrix
int queen(int n);
//determines whether to store a queen or not
int zero_or_1(int i,int j);


int main()
{
 N=8;
    //setting default values on matrix/board to zeros
    for(i=0;i<N;i++)
    {//rows
        for(j=0;j<N;j++)
        {//columns
            board[i][j]=0;
        }//end of j_for loop
    }//end of i_for loop

//calling queen function    
queen(N);    
//print N_queen matrix
for(i=0;i<N;i++)
{//rows
    for(j=0;j<N;j++)
    {//columns
       cout<<board[i][j]<<"\t";
}//end_j_for
cout<<endl;
}//end_i_for

    return 0;
}//end_main

//function definitions:


int queen(int n)
{
    //solution
    if(n==0)
    {return 1;}
for(i=0;i<N;i++){
    for(j=0;j<N;j++){
        //check if it is safe for queen per rxc
        if((!zero_or_1(i,j))&&(board[i][j]!=1))
        {
            board[i][j]=1;
            //recursive call
            if(queen(N-1)==1)
            {
                return 1;
            }//end recurive call
            board[i][j]=1;
        }//end_if
    }//end_for_j
}//end_for_i
return 0;
}//end queen

int zero_or_1(int i,int j)
{
     int a,b;
    //checks whether rowxcolumn is safe for queen
    for(a=0;a<N;a++)
    {
        if((board[i][a]==1)||board[a][j]==1)
        {return 1;
        }//end_if_a
    }//end for_a
    
    //check if diagonals are safe for queen
    for(a=0;a<N;a++)
    {
        for(b=0;b<N;b++)
        {
            if(((a-b)==i-j)||((a+b)==i-j))
            { if(board[a][b]==1)
                { return 1; }//end_if
            }//end_if
        }//end_for_b
    }//end for_a

    return 0;
}//end zero_or_1
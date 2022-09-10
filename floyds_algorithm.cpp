#include <iostream>

using namespace std;
#define INF 99 //infinity

//universal declarations
int i,j,r,n;
int matrix[99][99];


int floyds()
//floyds algorithm implementation
{
//distance matrix 
for(r=1;r<=n;r++)
{ for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
        {
            //if loop for update distance
            if(matrix[i][j]>(matrix[i][r]+matrix[r][j]))
            {
                matrix[i][j]=(matrix[i][r]+matrix[r][j]);
            }//end of if

        }}}//end of for loops
        return matrix[i][j];
}//end of floyds function


//main function
int main()
{
  //input matrix
      //num of nodes
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    cout<<endl;

    //values of the matrix
    for (i=1; i<=n; i++)
    {for(j=1; j<=n; j++)
        {  cout<<"Enter distance ["<<i<<","<<j<<"]: ";
            cin>>matrix[i][j];
        } } //end of for loop

floyds();

//starting and ending node declaration  
 int a,b;
cout<<"Enter the starting node: ";
cin>>a;
cout<<"Enter the ending node: ";
cin>>b;

//print path from starting node to ending node
cout<<"Path between node "<<a<<" and node "<<b<<" is: "; 
cout<<dist[a][b]<<endl;
        
    return 0;
}


#include <iostream>

using namespace std;
#define INF 999
#define MAX 100

int a,b,n,i,j,r; //universal variables
int Matrix[MAX][MAX]; //input distance matrix
int Dist[MAX][MAX]; //shortest distance matrix

//functions:
void getData()
{//user specified nodes
    cout<<"Enter number of nodes: ";
    cin>>n;

    int tot_nodes=n*(n-1);
    for(i=1; i<=tot_nodes;i++)
    {
        //getting matrix data
        cout<<"\n********* Enter data in the form: [node a][node b]=distance / [0][0]=[0] to quit *********"<<endl;
        char q;
        cout<<"Starting node and ending node respectively: "<<endl;
        cin>>a>>b;
     
//if zero is entered, quit 
        if((a==0)&&(b==0))
        {cout<<"********* INPUT MATRIX COMPLETE *********"<<endl;
        break;}
//node error
else if((a>n)||(b>n))
{
cout<<"ERROR. Invalid node value."<<endl;
}    

//stores distance
else{ cout<<"Distance = ";
        int dist;
        cin>>dist;

        Matrix[a][b]=dist; //stores values into Matrix
     } } //end of for loop
}//end of getData

void floydsAlg()
{
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {//fill in unknown as infinity
    if(Matrix[i][j]==0)
       Dist[i][j]=INF;
       else
        Dist[i][j]=Matrix[i][j];  
    }
//floyd's algorithm implementation
for(r=1;r<=n;r++)
{for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
        {if(Dist[i][j]>(Dist[i][r]+Dist[r][j]))
        {//stores shorter distance
            Dist[i][j]=Dist[i][r]+Dist[r][j];}}}} // end of for loops
    }//end of floyds Alg

//main function
int main()
{    getData();
    floydsAlg();
    
    //user specified nodes
    cout<<"********* CALCULATION OF PATH *********"<<endl;
   cout<<"Enter starting node: ";
   cin>>a;
   cout<<"Enter ending node: ";
   cin>>b;

//if nodes do not lie between 0 and n
   if(a<0||a>n||b<0||b>n)
   {
       cout<<"ERROR. Invalid node."<<endl;
   }
   //output solutions
   cout<<"Shortest path = "<<Dist[a][b]<<endl;
return 0;
}//end of main function






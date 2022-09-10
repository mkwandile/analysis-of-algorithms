#include <stdio.h>

#define max 4
#define INF 999

void djikstra (int M[max][max], int node, int node_1);

int main()
{
    int nodes=4,a=0;
    int M[max][max]={
        {0,3,0,5},
        {2,0,0,4},
        {0,1,0,0},
        {0,2,2,0}
    };
    djikstra(M,nodes,a);
    return 0;
}

void djikstra (int M[max][max], int node, int node_1)
{
    int dist[max][max], node_dist[max],prev[max],adj[max];
    int i,j,next,min_dist,count;
    for(i=1;i<=node;i++)
    {
        for(j=1;j<=node;j++)
        {
            if(M[i][j]==0)
            {dist[i][j]=INF;}//end if

            else
            {dist[i][j]=M[i][j];}}

        for(i=1;i<=node;i++)
        {
            node_dist[i]=dist[node_1][i];
            adj[i]=node_1;
            prev[i]=0;
        }    } //end for

        prev[node_1]=1;
        node_dist[node_1]=0;
        count=1;

        while(count<(node-1))
        {
            min_dist=INF;
            for(i=1;i<=node;i++)
            {if(prev[i]&&min_dist>node_dist[i])
            {min_dist=node_dist[i];
            next=i;}
            }//end for

            prev[next]=1;

            for(i=1;i<=node;i++)
            {
                if(!prev[i])
                {if(node_dist[i]>(dist[next][i]+min_dist))
                {
                    adj[i]=next;
                    node_dist[i]=(dist[next][i]+min_dist);
                } }//end if
            }//end for

            count++;
            
            }//end while

        for(i=1;i<=node;i++)
        {
            if(node_1!=i)
            {
                printf("Distance to %d: %d\n",i,node_dist[i]);
                printf("Path: %d",i);
                j=i;
                do{
                    j=adj[j];
                    printf("<< %d",j);
                }
                while(j!=node_1);
            }
        }
        }
   

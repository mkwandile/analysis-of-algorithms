#include <stdio.h>

int max(int a, int b)
{   return (a>b)?
    a:b;}

int knapSack(int W, int wi[], int vi[], int n)
{ int weight,pos_i ;
   int P[n+1][W+1];
 
   for (pos_i = 0; pos_i <= n; pos_i++)
   {for (weight = 0; weight <= W; weight++)
       { if (pos_i==0 || weight==0)
            P[pos_i][weight] = 0;
           else if (wi[pos_i-1] <= weight)
            P[pos_i][weight] = max(vi[pos_i-1] + P[pos_i-1][weight-wi[pos_i-1]],  P[pos_i-1][weight]);
           else
            P[pos_i][weight] = P[pos_i-1][weight]; }}  
   return P[n][W];}

int main()
{int i, vi[100], wi[100], W, items;
printf("How many items are in the set?\n");
scanf("%d", &items);

for(i=0;i<items;++i)
{printf("\nWeight [item %d]= ", i+1);
scanf("%d", &wi[i]);
printf("Value of [item %d]: $", i+1);
scanf("%d", &vi[i]);}

printf("What is the maximum capacity of the knapsack?\n");
scanf("%d", &W);
printf("Total value in the knapsack: $%d", knapSack(W, wi, vi, items));
    return 0;}
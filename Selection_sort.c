#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
//time declarations
    double time;
    clock_t start, end;
    clock_t time0=clock();
    
int size,a[100000],i,j,t,temp = 0;

  printf("Enter number of elements\n");
  scanf("%d", &size);
  start=clock();    //start timer
 
//generate random number
  for (i=0;i<size;i++)
    { int random = rand();
        a[i] =random%100;}
//sort 
  for (i=0;i<(size-1);i++) // finding minimum element (n-1) times
  {temp = i;
    for (j=i+1;j<size;j++)
    {if(a[temp]>a[j])
        temp=j; }
    if (temp!=j)
    {t = a[i];
      a[i]=a[temp];
      a[temp]=t;}}

//print output
  printf("\n********Ascending order-Selection Sort********:\n");
for (i= 0;i<size;i++)
   {printf("%d\t", a[i]);}

  //time
  end = clock();
    printf("\n\t\t\t\tEXECUTION TIME: %.2f\n", (double)(end-start)/CLOCKS_PER_SEC);

return 0;}
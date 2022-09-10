#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
//time declarations
    double time;
    clock_t start, end;
    clock_t time0=clock();
    
int size,a[100000],i,j,t,temp = 0;

  printf("Enter number of elements:\n");
  scanf("%d", &size);
  start=clock(); //start timer

  //generate array
   for (i=0;i<size;i++)
    {int random = rand();
        a[i] =random%100;}

// sort 
  for (i=1; i<=size-1;i++) 
  {t = a[i];

    for (j=i-1;j>=0;j--) 
    {if (a[j]>t) 
    {a[j+1] = a[j];
        temp = 1;}
      else break;}
    if (temp)
    {a[j+1] = t;}}

//prints elements of array
  printf("\n******** Ascending Order - Insertion Sort *********\n");
  for (i=0;i<=size-1;i++)
  {printf("%d\t", a[i]);}

  //time
  end = clock();
    printf("\n\t\t\t\tEXECUTION TIME: %.2f\n", (double)(end-start)/CLOCKS_PER_SEC);

return 0;}

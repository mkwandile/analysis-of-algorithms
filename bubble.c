#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
//time declarations
    double time;
    clock_t start, end;
    clock_t time0=clock();
    
//bubble sort 
int a[100000],size,i,j,temp;

printf("Enter number of elements:\n");
scanf("%d", &size); 
start=clock(); //start timer

//random array
 for (i=0;i<size;i++)
 {int random = rand();
    a[i]=random%100;}

//sorts array in ascending order
 for(i=1;i<size;i++)
    {for(j=0;j<size-i;j++)
        {if (a[j+1]<a[j])
            {temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp; }}}

// the sorted array
printf("\n********* Ascending Order - Bubble Sort *********\n");
for(i=0; i<size; i++)
{printf("%d\t", a[i]);}  

//end clock
end = clock();
    printf("\n\t\t\t\tEXECUTION TIME: %.2f\n", (double)(end-start));
return 0;}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quicksort(int number[25],int first,int last)
{int i, j, pivot, temp;

   if(first<last)
   {pivot=first;
      i=first;
      j=last;

      while(i<j)
	  {while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;}}

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);}}


int main()
{ //time declarations
    double time;
    clock_t start, end;
    clock_t time0=clock();
    
 int a[100000],size,i,j;
 //declare size of array
printf("Enter number of elements:\n");
scanf("%d", &size);
 start=clock(); //start timer

 //sort 
   for(i=0;i<size;i++)
     {int random = rand();
        a[i] =random%100;}

//call quicksort function
   quicksort(a,0,size-1);

   printf("\n*********Ascending Order - Quick Sort********\n");
   for(i=0;i<size;i++)
      printf("%d\t",a[i]);
        	
end=clock();
printf("\n\t\t\t\tEXECUTION TIME: %.2f\n", (double)(end-start)/CLOCKS_PER_SEC);
return 0;}
#include<stdio.h>

void function(int array[], int i, int *max)
{
    if (array[i] > *max)
    {
        *max = array[i];
        return function(array, i - 1, max);} //end_if

//when pointer reaches 0
return;
}

int main()

{

int n,max,a[200];

printf("Enter number of elements in the array: ");

scanf("%d", &n);

printf("Enter the array elements:\n");

for (int i = 0; i < n ; i++)

scanf("%d",&a[i]);

max = a[0];

function(a, n - 1, &max);

printf("\nThe max number in the list is: %d\n", max);

}
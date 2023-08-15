// Insertion sorting practice code.

#include <stdio.h>

int main(){
int size;
printf("Enter the size of array: "); 
scanf("%d", &size);

int arr[size];
int i; 

printf("Enter %d elements of array:\n", size); 
for(i=0; i<size; i++)
{
    scanf("%d", &arr[i]); // the spaces between "%d" makes error input, so spaces is a factor in C. 
}

printf("The initial array is: "); 
for(i=0; i<size; i++)
{
    printf("%d ", arr[i]);
}

for(i=1; i<size; i++)
{
    int store = arr[i]; //store arr[i] position value in (store) variable 
    int space = i; // create another variable and store the value of i in in, in this case it's gonna be 1,2,3,4....


while(space>0 && arr[space-1]>store)
{
    arr[space]=arr[space-1]; 
    space = space-1;
}
arr[space]=store;
}

printf("\nThe sorted array is: ");
for(i=0; i<size; i++)
{
    printf("%d ", arr[i]);
}
return 0;
}

#include <stdio.h>
int main ()
{
int n, i, j;
int arr[10];
printf ("Enter the number of elements in the array: \t");
scanf ("%d", &n);
printf ("The elements are: ");
for (i = 0; i < n; i++) {
scanf ("%d", &arr[i]);
printf("Element you want to search: \t");
scanf("%d",&j);
for (i = 0; i < n ; i++)
if(arr[i] == j){
printf("Element %d is at position %d.",j,i+1);}
else if (i==n)
printf("The element isn't there in the array.");} }
return 0;}

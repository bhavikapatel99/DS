// Write a program to insert the element at the last and first positions in an array.
// (a) If an array is empty.
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,b,n,arr[100];
    printf("Enter how many element you want?\n");
    scanf("%d",&n);
    printf("Enter Elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter 1st Element:\n ");
    scanf("%d",&a);
    printf("Enter last Element: \n");
    scanf("%d",&b);
    for(i=n;i>=0;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0]=a;
    arr[n+1]=b;
    for(i=0;i<=n+1;i++)
    {
        printf("%d\n", arr[i]);
    }
}

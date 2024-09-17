//Write a program to insert the element at the last and first positions in an array.
//  If the array already has 5 elements.
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,fn,ln,n=5;
    int arr[100];
    printf("Enter 5 Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter First Element:");
    scanf("%d",&fn);
    printf("Enter Last Element:");
    scanf("%d",&ln);
    for(i=n;i>=0;i--)
    {
        arr[i+1] = arr[i]; 
    }
    arr[0] = fn;
    arr[n+1] = ln;
    for(i=0;i<=n+1;i++)
    {
        printf("%d \n",arr[i]);
    }
}

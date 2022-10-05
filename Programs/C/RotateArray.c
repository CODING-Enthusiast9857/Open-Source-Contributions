#include<stdio.h>
#include<conio.h>

void rotate(int a[],int);
void main()
{
    int a[5]={5,7,4,2,9};
    rotate(a,5);
}
void rotate(int a[],int size)
{
    int i,m,j;
    for(i=size-1;i>0;i--)
    {
        j=i-1;
        m=a[i];
        a[i]=a[j];
        a[j]=m;
    }
    printf("\nRotated Array is\n");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
}

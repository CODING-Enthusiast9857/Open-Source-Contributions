#include<stdio.h>
#include<conio.h>

int reverse(int a[],int);
void main()
{
    int a[5]={5,7,4,2,9};
    reverse(a,5);
}
int reverse(int a[],int size)
{
    int k,i,m,j;
    for(k=0;k<size;k++)
    {
        for(i=size-1;i>k;i--)
        {
            j=i-1;
            m=a[i];
            a[i]=a[j];
            a[j]=m;
        }
    }
     for(k=0;k<size;k++)
        printf("%d ",a[k]);
}

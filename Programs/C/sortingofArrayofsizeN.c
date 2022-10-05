#include<stdio.h>
#include<conio.h>

void sort(int [], int);
void  main()
{
    int i,n,a[n];
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the %d elements of Array:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
}
void sort(int a[], int size)
{
    int i,m,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }
    printf("Sorted Array is ");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
}

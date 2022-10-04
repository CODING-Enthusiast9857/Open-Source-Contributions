#include<stdio.h>
#include<conio.h>
void quick(int a[],int first,int last);
void main()
{
	int a[10],i,n;
	clrscr();
	printf("Enter array size : \t");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick(a,0,n-1);
	printf("Sorted array elements are : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}
void quick(int a[],int first,int last)
{
	int pivot,i,j,t,k,n;
	pivot=first;
	i=first+1;
	j=last;
	if(first<last)
	{
		while(i<j)
		{
			while(a[pivot]>a[i])
			{
				i++;
			}
			while(a[pivot]<a[j])
			{
				j--;
			}
			if(i<j)
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
		t=a[pivot];
		a[pivot]=a[j];
		a[j]=t;
		/*for(k=first;k<=last;k++)
		{
			printf("%d\t",a[k]);
		} */
		quick(a,first,j-1); //Recursively calling to the function
		quick(a,j+1,last);
	}
}
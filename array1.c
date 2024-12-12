#include<stdio.h>
void main(){
    int arr1[100],arr2[100],arr3[100],n1,n2,n3;
    printf("enter the size of first array");
     scanf("%d",&n1);
    printf("enter the elements of first array");
    for(int i=0;i<n1;i++)
    {scanf("%d",&arr1[i]);
}
printf("enter the size of second array");
scanf("%d",&n2);
printf("enter the elements of second array");
for(int i=0;i<n2;i++)
{scanf("%d",&arr2[i]);
}
n3=n1+n2;
for(int i=0;i<n1;i++)
arr3[i]=arr1[i];
for(int i=0;i<n2;i++)
arr3[i+n1]=arr2[i];
printf("merged array is: ");
for(int i=0;i<n3;i++)
{printf("%d ",arr3[i]);}
}
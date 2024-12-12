#include<stdio.h>
void main()
{
int n,arr[100],k,s,c=0,position,value;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements to be inserted");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
while(k!=6){
printf("1.DISPLAY");
    printf("2.SEARCH");
    printf("3.SORT");
    printf("4.INSERT");
    printf("5.DELETE");
    printf("6.EXIT");
    printf("Enter your choice");
    scanf("%d",&k);
switch(k){
    case 1 : 
            display();
    
            break;
    case 2 :
            search();
            break;
    case 3 :
            sort();
                
            break;
    case 4:
            insert();
            break;
    case 5:
            delete();
            break;

    default:
    ptintf("error display");
}

}
void display()
{
    int position,i,n,value;
printf("display the array elements");
 for(i=0;i<n;i++)
    printf("%d ",arr[i]);

}
void insert()
{
printf("enter the location elements to be inserted");
scanf("%d",&position);
printf("enter the value to insert\n");
scanf("%d",&value);
for(int i=i-1;i>=position-1;i++)
arr[i+1]=arr[i];
arr[i+1]=arr[i];
arr[position-1]=value;
printf("resultant array is\n");
for(i=0;i<=n;i++)
printf("%d\n",arr[i]);
}
void delete()
{int n,i,p;
printf("enter the location in which element is deleted: ");
scanf("%d",&p);
if(p>=n+1)
{printf("deletion is not possible");}
ele {for(i=p-1;i<n-1;i++)
{a[i]=a[i+1];}
}}
printf("resultant array is: ");
for(int i=0;i<n-1;i++)
{printf("%d",a[i]);
}
}



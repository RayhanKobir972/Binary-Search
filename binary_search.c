#include<stdio.h>

Binary_search(int a[40],int lb,int ub, int x)
{
    int mid,n;
    while(lb < ub)
    {
        mid = (lb + ub)/2;
        if(a[mid == x])
            return mid;
        else if(x < a[mid])
        {
            ub = mid -1;
        }

        else if(x > a[mid])
        {
            lb = mid + 1;
        }
    }
    return -1;
}
int main(void)
{
    int a[40],n,x,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter sorted array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter search element:");
    scanf("%d",&x);
    int result = Binary_search(a,1,n,x);

    if(result == -1)
        printf("Element not found");
    else
       printf("Element present at index :%d and Position:%d",result,result+1);
}

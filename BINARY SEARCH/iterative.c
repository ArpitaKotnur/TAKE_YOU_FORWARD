#include<stdio.h>
#include<stdlib.h>
int Bsearch(int target,int arr[],int size)
{
    int low=0,high=size-1,mid;
    
    while(low<=high)
    {   int mid=(low+high)/2;
        if(arr[mid]==target)
        {
            return arr[mid];
        }
        else if(target>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
void main()
{   int val;
    int a[10]={10,20,30,40,50,60,70,80,100};
    val=Bsearch(72,a,10);
    if(val>-1)
    {
        printf("value exist");
    }
    else
    {
        printf("value not their");
    }
}

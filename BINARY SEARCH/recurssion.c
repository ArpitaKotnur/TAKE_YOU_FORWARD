#include<stdio.h>
#include<stdlib.h>
int Bsearch(int target,int low,int high,int arr[])
{   int mid;
    if(low>high)
    {
        return -1;
    }
    mid=(low+high)/2;
    if(arr[mid]==target)
    {
        return arr[mid];
    }
    else if(target>arr[mid])
    {
        return Bsearch(target,mid+1,high,arr);
    }
    else
    {
        return Bsearch(target,low,mid-1,arr);
    }
    
}
void main()
{   int val;
    int a[10]={10,20,30,40,50,60,70,80,100};
    val=Bsearch(70,0,9,a);
    if(val>-1)
    {
        printf("value exist");
    }
    else
    {
        printf("value not their");
    }
}

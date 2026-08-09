#using sliding window and 2 pointers we need to find max sum of from either starting or ending not from betweenn
#include<stdlib.h>
#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    
    return b;
}
int max_point(int arr[],int n,int k)
{
    int lsum=0,rsum=0,maxsum=0;
    for(int i=0;i<k;i++)
    {
        lsum=lsum+arr[i];
    }
    maxsum=lsum;
    int rindex=n-1;
    for(int i=k-1;i>=0;i--)
    {
        lsum=lsum-arr[i];
        rsum=rsum+arr[rindex];
        rindex=rindex-1;
        maxsum=max(maxsum,rsum+lsum);
    }
    return maxsum;
}

int main()
{   
    int arr[]={10,20,30,40,50,60,70,80,90},max;
    max=max_point(arr,9,4);
    printf("%d",max);
    return 0;
}

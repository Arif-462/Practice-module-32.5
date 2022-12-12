#include<stdio.h>
int lastdigit(int arr[], int size)
{
    if(size==0) return 0;
    int sum = lastdigit((arr+1 % 10) , size-1);
    return sum + arr[0] % 10;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = lastdigit(arr,n);
    printf("%d\n",sum);

    return 0;
}

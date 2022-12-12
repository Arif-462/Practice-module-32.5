#include<stdio.h>
int solve(int i, int n)
{
    if(i>n) return 0;
    int sum = solve(i+1,n);
    return sum + i;

}

int main()
{
    int n;
    scanf("%d",&n);
    int ans = solve(1,n);
    printf("%d\n",ans);
    return 0;
}



#include<stdio.h>

int fact(int x);
int main()
{
    int ans,n,r;
    scanf("%d%d",&n,&r);
    int perm,comb;
    perm=fact(n) / fact(n-r);
    comb=fact(n) / (fact(n-r)*fact(r));

    printf("Your permutation is %d\n",perm);
    printf("Your combination is %d\n",comb);
}


int fact(int x)
{
    int i,res=1;
    for(i=1;i<=x;i++)
    {
        res=res*i;
    }
    return res;
}
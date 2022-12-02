#include<stdio.h>
int main()
{
    int n,k,j=0;
    scanf("%d%d",&n,&k);
    int even[200],odd[200];
    for(int i=0;i<200;i++)
    {
        even[i]=0;
    }
    for(int i=2;i<=n;i+=2)
    {
      even[(i/2)-1]=i;
    }
    for(int i=0;i<200;i++)
    {
        odd[i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        odd[(i/2)]=i;
    }
    while(odd[j] != '\0')
    {
        even[(n/2)+j]=odd[j];
        j++;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",even[i]);
    }     
     printf("\nThe %dth element in this sequence is %d",k,even[k-1]);
    
    
}
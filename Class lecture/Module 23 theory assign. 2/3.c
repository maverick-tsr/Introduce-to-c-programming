#include<stdio.h>
int get_numb(int a, char nums[]);
int main()
{
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    int ans=get_numb(len,str);
    if(ans==1)
        printf("Yes");
    else
        printf("No");

    

}
int get_numb(int a, char nums[])
{
    int i,one_count=0,nine_count=0,seven_count=0;
    for(i=0;i<a;i++)
    {
        if(nums[i]=='1')
            one_count++;
        if(nums[i]=='7')
            seven_count++;
        if(nums[i]=='9')
            nine_count++;

    }
    if(one_count!=0 && seven_count!=0 && nine_count!=0)
        return 1;
    else
        return 0;
}
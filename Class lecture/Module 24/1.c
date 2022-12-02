// #include<stdio.h>

// void solve()
// {
//     int a,b;
//     scanf("%d%d",&a,&b);
//     printf("%d\n",a+b);
// }

// int main()
// {
//     int t;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++)
//     {
//         solve();
//     }
// }




#include<stdio.h>

int take_radius()
{   int r;
    printf("Enter the radius of a circle");
    scnaf("%d",&r);
    return r;
}
float calculate_area(int radius)
{
    int r;
    float ans=3.1416*r*r;
    return ans; 
}
int main()
{
    int r;
    r=take_radius();

    float area=calculate_area(r);
    printf("Area of the circle is %f\n",area);


    return 0;
}
// #include<stdio.h>

// int main()
// {
//     int ar[]={12,20,40,60,80};

//     int size =sizeof(ar)/sizeof(int);
//     printf("%d",size);

//     return 0;
// }

// function r vitore sizeof kaj korbe na. example:

// #include <stdio.h>

// void view_array_size(int array[])
// {
//     int size = sizeof(array) / sizeof(int);
//     // printf("Size=%d",size);
//     printf("%d", array[0]);
// }

// int main(void)
// {
//     int ar[] = {12, 20, 40, 60, 80};
//     view_array_size(ar);

//     return 0;
// }
// Note: ekta array jokhn amra function e pathai tkhn sudhu array r first value ta recieve kore.
// ei jonno amra array r size soho function e pathai.

// amra jevabe korbo:

// #include <stdio.h>

// void view_array_size(int *array, int sz)
// {
//     int size = sizeof(array) / sizeof(int);
//     // printf("Size=%d",size);

//     for (int i = 0; i < sz; i++)
//     {
//         printf("%d ", *(array+i));
//     }
// }

// int main(void)
// {
//     int ar[] = {12, 20, 40, 60, 80};
//     view_array_size(ar, 5);

//     return 0;
// }

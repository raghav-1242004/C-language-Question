// # include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a Value:- ");
//     scanf("%d",&n);


//     if (n==2||n==3||n==5||n==7)
//     {
//         printf("Number is Prime");
//     }
//     else
//     {
//         int count =0;
//         int arr[10] = {2,3,4,5,6,7,8,9,11,13};
//         for(int i=0;i<=9;i++)
//         {
//             if(n%arr[i]==0)
//             {
//                 count++;
//             }
//             // printf("%d\n",i);
//         }
//         if (count == 0 && n!=1)
//         {
//             printf("Number is Prime");
//         }
//         else
//         {
//             printf("Number if not prime");
//         }
//     }
//     return 0;
// }
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Value:- ");
    scanf("%d", &n);

    // 1 is NOT prime
    if (n == 2 || n == 3 || n == 5 || n == 7)
    {
        printf("Number is Prime");
    }
    else if (n == 1)
    {
        printf("Number is Not Prime");
    }
    else
    {
        int count = 0;
        int arr[8] = {2,3,4,5,6,7,8,9};

        for(int i = 0; i < 8; i++)
        {
            if (arr[i] * arr[i] > n)   // √n se bada number check nahi karna
                break;

            if (n % arr[i] == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0)
        {
            printf("Number is Prime");
        }
        else
        {
            printf("Number is Not Prime");
        }
    }

    return 0;
}

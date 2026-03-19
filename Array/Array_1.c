// Write a program to enter number of element in an arry short and find Center Value
# include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a lenth of Array:-\t");
    scanf("%d",&n);

    int array[n];
    
    for (i=0;i<n;i++)
    {
        printf("Enter a %d position of Array:-  ",i);
        scanf("%d",&array[i]);
    }

    printf("YOur Question:-\t\t");
    for(i=0;i<n;i++)
    {
        printf("%d|",array[i]);
    }
    printf("\n");

    // center value
    // int c=array[n/2];
    // int d=array[(n/2)-1];

    
    for (i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(array[i] > array[j])
            {
                int a = array[i];
                array[i]=array[j];
                array[j]=a;
            }
        }
    }
// shorting 
       printf("Acending order:-\t");
    for (i=0;i<n;i++){
        printf("%d|",array[i]);
    }
    printf("\n");
    for (i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(array[i] < array[j])
            {
                int b = array[i];
                array[i]= array[j];
                array[j]=b;
            }
        }
    }
    printf("Decending Order:-\t");
    for (i=0;i<n;i++)
    {
        printf("%d|",array[i]);
    }
    printf("\n");
    } 
    for(i=0; i<n; i++)
    {
        if (n%2==1)
        {
            int c= n/2;
             printf("%d",array[c]);
        }
        if (n%2==0)
        {
            int c=(int) array[n/2-1];
            int d=(int)array[n/2];
            printf("%d and %d",d,c);
        }
    }
 
    return 0;

}

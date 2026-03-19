// C program to multiply two matrices 
# include<stdio.h>
int main()
{
    int n1,m1,n2,m2,i,j;

    printf("Enter a Row and Column First Matrix:-\n");
    scanf("%d %d",&n1,&m1);
    printf("Enter a Row and Column second Matrix:-\n");
    scanf("%d %d",&n2,&m2);
    if (n1!=n2 && m1!=m2)
    {
        printf("Enter Square matrix");
        return 0;
    }


    // First Matrix
    printf("Enter a value in First Matrix:-\n");
    int arry1[n1][m1];
    for (i=0; i<n1; i++)
    {
        for(j=0; j<m1; j++)
        {
            scanf("%d",&arry1[i][j]);
        }
    }

    // Second Matrix
    printf("Enter a value in Second Matrix:-\n");
    int arry2[n2][m2];
    for (i=0; i<n2; i++)
    {
        for (j=0; j<m2; j++)
        {
            scanf("%d",&arry2[i][j]);
        }
    }
    int arry3[n1][m1];
    for (i=0; i<n1; i++)
    {
        for (j=0; j<m1; j++)
        {
            arry3[i][j]=0;
        }
    }
    int k;
    for(i=0; i<n1; i++)
    {
        for(j=0; j<m2; j++)
        {
            for(k=0;k<m1; k++)
            {
                arry3[i][j]=arry3[i][j] + arry1[i][k]*arry2[k][j];
                // +arry1[i][k]*arry2[k][j];
            }
        }
    }

    printf("Your Result Of Matrix:-\n");
    for(i=0; i<n1; i++)
    {
        for(j=0; j<m2; j++)
        {
            printf("%d|",arry3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
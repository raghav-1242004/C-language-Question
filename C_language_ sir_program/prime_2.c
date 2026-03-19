# include <stdio.h>
int main(){
    int input, count = 0;
    printf("Enter a value:-\t");
    scanf("%d",&input);

    int i;
    for(i = 1; i<=input; i++)
    {
        if ( input%i==0)
        {
            count++;
        }
    }
    if (count == 2)
        printf("Number is Prime");
    else
        printf("Number is not Prime");
    
    return 0;

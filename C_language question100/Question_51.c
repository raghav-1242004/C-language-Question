// 51.	Input n, check Armstrong number.
# include <stdio.h>
# include <math.h>
int main(){
    int n, square, count = 0,a;
    printf("\n\n\t\t    Input n, check Armstrong number. \n\n");
    printf("Enter a value:- ");
    scanf("%d",&n);

    if (n == 0)
        count = 1;
    else{
        while (n != 0){
            // a = n%10;
            n = n/10;
            
            count++;
            //  printf("\t%d",);
            // printf("%d\n",a);
            // square = pow (a,count);
            // printf("%d\n",square);
        }
        

    }
    printf("\t\t%d",count);

    // square = pow(n,2);
    // printf("%d",square);
    
}

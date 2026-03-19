// 42.	Input a number, print multiplication table.
# include <stdio.h>
int main(){
    int input;

    printf("Enter a Number:-    ");
    scanf("%d",&input);

    int i = 1 , a = 1;

    for (i==1; i<=10; i++){
        a = (input*i);
        
        printf( "%d X %d = %d\n",input,i,a);

    }
    
    return 0;
}


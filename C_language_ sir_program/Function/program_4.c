# include <stdio.h>
void Evenodd(int a);

int main(){
    int a;
    printf("Enter a Number");
    scanf("%d",&a);
    Evenodd(a);
    return 0;
}

void Evenodd(int a){
    if (a%2 == 0){
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }
}











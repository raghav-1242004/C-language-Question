// Write a program in c to swap two number uning Function
# include<stdio.h>

void swap(int a, int b);

int main(){
    int a,b;
    printf("Enter Two Value");
    scanf("%d %d",&a,&b);
    swap(a,b);
    // printf("%d",swap(a,b));
    return 0;
}

void swap(int a, int b){
    a=a+b; b=a-b; a= a-b;
    printf("%d %d",a,b);
  
}
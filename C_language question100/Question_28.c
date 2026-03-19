// 28.	Input marks of 5 subjects, check grade (>=90 A, >=75 B, >=50 C, else Fail).
# include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter a Marks of Subjects\n");
    printf("First:-    ");
    scanf("%d",&a);
    printf("Second:-   ");
    scanf("%d",&b);
    printf("Third:-    ");
    scanf("%d",&c);
    printf("Fourth:-   ");
    scanf("%d",&d);
    printf("Fifth:-    ");
    scanf("%d",&e);
    int total = a+b+c+d+e;
    int percent = total/5;


    printf("Percent = %d\n",percent);


    if (percent>=90){
        printf("Grade A");
    }
    else if (percent >=75 ){
        printf("Grade B");
    }
    else if (percent >= 50){
        printf("Grade C");
    }
    else {
        printf("Grade Fail");
    }
    

}
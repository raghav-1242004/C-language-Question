# include <stdio.h>
int main(){
    int m1 ,m2 ,m3,op1,op2 ,total_sum, sum1, sum2;
    float per1,per2, total_per;

    printf("Enter Marks of 3 main :Subject-\t");
    scanf("%d %d %d",&m1, &m2, &m3);

    printf("Now you Enter of Marks 2 Optionapl Subject");
    scanf("%d %d",&op1, &op2);


    total_sum = m1+m2+m3+op1+op2;
    sum1 = m1 + m2 + m3;
    sum2 = op1 + op2;

    total_per = (float)(m1+m2+m3+op1+op2)/5;
    per1 = (float)(m1+m2+m3)/3;
    per2 = (float) (op1+op2)/2;


    

    printf("\n\n");
    printf("Tota Marks of over all subject= %d\n", total_sum);
    printf("Total Marks of Main subject = %d\n", sum1);
    printf("Total Marks of optional subject = %d\n",sum2);
    printf("\n\n");
    printf("Over all percentage = %.2f\n",total_per);
    printf("Percentage of 3 Subjects = %.2f\n",per1);
    printf("Percentage of OPtional Subjects = %.2f\n",per2);


    if(total_per>=35){
        if(per2>=75){
            printf("Grade A+");
        }
        else{
            printf("Grade A");
        }
    }
    else {
        if (per2<=75){
            printf("Pass with Grade");
        }
        else{
            printf("Fail");
        }
    }
    return 0;
    
}
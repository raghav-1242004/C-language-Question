// 13. Define a structure of Student (roll_no, name, marks of 5 subjects). Write a C program to pass the structure to 
// function and calculate whether the student has passed the exam.
# include<stdio.h>

struct student {
    int roll;
    char name;
    float marks[5];
};
void sRecord(){
    struct student s;
    int sum = 0;
    int i;
    printf("Enter student Roll_No:-\t");
    scanf("%d",&s.roll);
    printf("Enter student Name:-\t");
    scanf("%s",&s.name);
    printf("Enter student marks\n");
    for(i=0; i<5; i++){
        printf("%d subject Marks:- \t",(i+1));
        scanf("%f",&s.marks[i]);
        sum = sum +s.marks[i];
    }
    int per = (sum*100)/500;
    printf("Per of Marks:- %d\n",per);
    if(per>30){
        printf("Passed the exam");
    }
    else{
        printf("Not Passed the exam");
    }
}
int main(){
    sRecord();
}
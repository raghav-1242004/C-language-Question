// 12. Write a program to store values of 10 students record using structure. Use function to store record and print the record.
# include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
void Srecord(){ 
    struct student s[10];
    int i;
    for(i=0; i<10; i++)
    {
        printf("\nstudent:-\t%d\n",(i+1));
        printf("Roll No. of student:-\n");
        scanf("%d",&s[i].roll);
        printf("Name of Student:-\n ");
        scanf("%s",&s[i].name);
        printf("CGPA of Student:- \n");
        scanf("%f",&s[i].cgpa);
    }
    printf("\n\n---- Total student details-----\n\n");
    for(i=0; i<10; i++){
        printf("StudentRoll No:-:- %d\n",s[i].roll);
        printf("Student Name:- %s\n",s[i].name);
        printf("Student CGPA:- %f\n\n",s[i].cgpa);
    }
}
int main(){
    Srecord();

}
# include<stdio.h>
struct student{
    int roll;
    int marks[5];
    char name[100];
    int s[10];
};
void inputRecord( struct student s[10]){ 
    int n = 2;
    int i,j;
    for(i=0; i<n; i++)
    {
        printf("\nstudent:-\t%d\n",(i+1));
        printf("Roll No. of student:-\n");
        scanf("%d",&s[i].roll);
        printf("Name of Student:-\n ");
        scanf("%s",&s[i].name);
        for(j=0; j<5; j++){
            printf("Marks %d subject:- \n",j+1);
            scanf("%d",&s[i].marks[j]);
        }
    }
}
void printRecords(struct student s[10]){
   
    int n = 2;
    int i,j;
    printf("\n\n---- Total student details-----\n\n");
    printf("Roll_NO.\t Student_Name\t marks(1)\tmarks(2)\tmarks(3)\tmarks(4)\tmarks(5)\t"\n);
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    for(i=0; i<n; i++){
        printf(" %d\t",s[i].roll);
        printf("%s\t",s[i].name);
        for(j=0; j<5; j++){
            printf(" %d \t", s[j].marks[j]);
        }
        printf("\n");
    }
}

int main(){
    struct student s[10];   // Declare array of structure

    inputRecord(s);         // Correct function call
    printRecords(s);  

}
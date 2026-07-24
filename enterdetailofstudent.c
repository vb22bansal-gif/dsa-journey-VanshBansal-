//WAP to create a structure to store 5 different datatype//
#include<stdio.h>
struct student
{
    int roll;
    char name;
    double percentage;
    float marks;
    
};
int main(){
    struct student s;{
        printf("enter roll:");
        scanf("%d",&s. roll);
        printf("enter name:");
        scanf("%s",&s. name);
        printf("enter marks:");
        scanf("%f",&s.marks);
        printf("enter percentage:");
        scanf("%.2f",&s. percentage);
    }
    printf("\nstdent details\n");
    printf("Roll : %d\n",s.roll);
    printf("Name :%s\n",s.name);
    printf("Percentage :%.2f\n",s.percentage);
    printf("Marks :%f\n",s.marks);
    return 0;
}

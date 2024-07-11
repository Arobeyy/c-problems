#include <stdio.h>

struct Info
{
    char name[20];
    char department[20];
    float cgpa;
    int id;
};

void bestStudent(struct Info student[])
{
    float max = student[0].cgpa ;
    int count = 0;
    for(int i = 0; i < 3; i++)
    {
        if(student[i].cgpa > max){
            max = student[i].cgpa;
            count ++;
        }
    }
    //printf("cgpa: %0.2f", max);
    //int count = 0;
    //for(int i = 0; i < 3; i++)
    //{
        //if(max == student[i].cgpa)
        //{
           // count = i;
           // break;
       // }
    //}
    printf("\n\nname: %s\nid: %d\ndepartment: %s\ncgpa: %f\n", student[count].name, student[count].id, student[count].department, student[count].cgpa);
}

int main()
{
    int i;
    int size = 3;
    struct Info student[30];
    for(i = 0; i < size; i++)
    {
        printf("Enter info of student %d:\n ", i+1);
        printf("name: ");
        scanf(" %s", student[i].name);
        printf("id: ");
        scanf(" %d", &student[i].id);
        printf("department: ");
        scanf(" %s", student[i].department);
        printf("cgpa: ");
        scanf(" %f", &student[i].cgpa);
    }
    bestStudent(student);

    return 0;
}

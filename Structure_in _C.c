#include <stdio.h>

struct student
{
    int roll_no;
    char schoolName[20];
    int marks;
};
typedef struct student ss;  // converting struct student to ss. We can use ss instead of struct student

int main()
{
    // struct student Irshad, Razzaque, shahma;
    ss Irshad = {13, "Alfalah", 90};
    struct student Razzaque = {13, "Sanskaardham", 80};
    ss Shahma = {40, "Alfalah", 70};
    printf("The roll number school name and marks of Irshad are  %d, %s, %d\n", Irshad.roll_no, Irshad.schoolName, Irshad.marks);
    printf("The roll number school name and marks of Razzaque are  %d, %s, %d\n", Razzaque.roll_no, Razzaque.schoolName, Razzaque.marks);
    printf("The roll number school name and marks of Shahma are  %d, %s, %d\n", Shahma.roll_no, Shahma.schoolName, Shahma.marks);

    return 0;
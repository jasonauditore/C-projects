# include <stdio.h>
#include <stdlib.h>
#include <string.h>
double compute();
double get_mean(double, double, double, double, double);
char *get_grade(double);
double input();
void show(double, char*);
int main(){
    int count, number;
    printf("How many students do you want to see their Math, English, Kiswahili, Science, Social Studies/CRE marks? \n");
    scanf("%i", &number);
    while(number<0)
    {
        printf("Invalid number of students try again:");
        scanf("%i", &number);
    }


    for (count=0 ;count<number;count++){
        compute();
    }

}
double compute(){
    double math,english,kiswahili,science,social_studies,cre,social_studies_cre;
    char *grade;
    double mean;
    printf("Enter the Maths mark for the student\n");
    math = input();
    printf("Enter the English mark for the student\n");
    english = input();
    printf("Enter the kiswahili mark for the student\n");
    kiswahili = input();
    printf("Enter the science mark for the student\n");
    science = input();
    printf("Enter the social_studies mark for the student\n");
    social_studies = input();
    printf("Enter the cre marks for the student\n");
    cre = input();
    social_studies_cre=((social_studies+cre)/90)*100;
    mean= get_mean(math,english,kiswahili,science,social_studies_cre);
    grade = get_grade(mean);
    show(mean, grade);

}
double input(){
    double mark;
    scanf(" %lf", &mark);
    while (mark<0||mark>100){
        printf("Invalid entry marks must be between 0 and 100\n");
        scanf(" %lf", &mark);
    }
    return mark;
}
double get_mean(double a, double b, double c, double d, double e){
    return (a+b+c+d+e)/5;
}
char *get_grade(double mean){
    if(mean>=80)
    {
        return "A";
    }
    else if (mean>=75)
    {
        return "A-";
    }

    else if (mean>=70)
    {
        return "B+";
    }
    else if(mean>=65)
    {
        return "B";
    }
    else if (mean>=60)
    {
        return "B-";
    }
    else if (mean>=55)
    {
        return "C+";
    }
    else if (mean>=50)
    {
        return "C";
    }
    else if (mean>=45)
    {
        return "C-";
    }
    else if (mean>=40)
    {
        return "D+";
    }
    else if (mean>=350)
    {
        return "D";
    }
    else if (mean>=30)
    {
        return "D-";
    }
    else{
        return "F";
    }
}
void show(double mean, char *grade){
    printf("The mean is %.3lf and the grade is %s", mean,grade);
}


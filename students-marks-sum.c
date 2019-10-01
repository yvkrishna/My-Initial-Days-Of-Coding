#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.hackerrank.com/challenges/students-marks-sum/problem

int marks_summation(int* marks, int number_of_students, char gender) 
{
    int sum1=0,sum2=0,i;
        for(i=0;i<number_of_students;i++)
        {
               if (i%2==0)
              {
                   sum1=sum1+marks[i];
              }
              else
              {
                  sum2=sum2+marks[i];
              }
        }
        if (gender=='b')
        {
            return sum1;
        }
        else
        {
            
            return sum2;
        }
    return 0;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}

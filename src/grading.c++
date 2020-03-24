#include <stdio.h>

char get_grade(int score);

int main()
{
    int score;
    printf("Please score(interger) in range 0-100:");
    scanf("%d", &score);
    char grade = get_grade(score);
    grade == '-' ? printf("Invalid input\n") : printf("%c\n", grade);
}

char get_grade(int score)
{
    if (score > 100)
        return '-';
    if (score >= 91)
        return 'A';
    if (score >= 81)
        return 'B';
    if (score >= 71)
        return 'C';
    if (score >= 61)
        return 'D';
    if (score >= 0)
        return 'F';
    else
        return '-';
}
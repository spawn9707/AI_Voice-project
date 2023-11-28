#include <stdio.h>

int main(){
    char subject1[50], subject2[50], subject3[50];
    int score1, score2, score3;

    printf("과목이름: ");
    scanf("%s", subject1);
    printf("점수 입력 %s: ",subject1);
    scanf("%d", &score1);

    printf("과목이름: ");
    scanf("%s", subject2);
    printf("점수 입력 %s: ",subject2);
    scanf("%d", &score2);
    
    printf("과목이름: ");
    scanf("%s", subject3);
    printf("점수 입력 %s: ",subject3);
    scanf("%d", &score3);

    chart(subject1,score1);
    chart(subject2,score2);
    chart(subject3,score3);
 
    return 0;

    void chart(char subject[], int score) {
         int numStars = round((score / 100.0) * 20);

         printf("%-15s / ", subject);

         for (int i = 0; i < numStars; ++i) {
             printf("*");
         }


         printf(" (%d)\n", score);
    }

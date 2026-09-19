#include <stdio.h>
 int main() {
     int score;
     printf("Enter your score (0-100):");
     scanf("%d", &score);

     if (score < 0 || score > 100) {

     printf("Invalid score! Range is 0-100\n");
     }
     else if (score >= 90) {
         printf("Score: %d Grade:A\n", score);
     }
     else if (score >= 80) {
         printf("Score: %d Grade:B\n", score);
     }
     else if (score >= 70) {
         printf("Score: %d Grade: C\n", score);
     }
     else if (score >= 60) {
         printf("Score: %d Grade: D\n", score);
     }
     else {
         printf("Score: %d Grade: F\n", score);
     }
     return 0;
 }
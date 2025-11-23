#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int score = 0;
    int totalQuestions = 5;
    char answer;
    
    printf("========================================\n");
    printf("     WELCOME TO THE QUIZ GAME!         \n");
    printf("========================================\n\n");
    printf("Answer the following questions by entering A, B, C, or D\n\n");
    
    // Question 1
    printf("Question 1: Which keyword is used to declare a constant in C?\n");
    printf("A) constant\n");
    printf("B) const\n");
    printf("C) static\n");
    printf("D) final\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    answer = toupper(answer);
    if (answer == 'B') {
        printf("Correct !\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is B) const\n\n");
    }
    
    // Question 2
    printf("Question 2: What is the size of 'int' data type in C (on most systems)?\n");
    printf("A) 2 bytes\n");
    printf("B) 4 bytes\n");
    printf("C) 8 bytes\n");
    printf("D) 1 byte\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    answer = toupper(answer);
    if (answer == 'B') {
        printf("Correct ! \n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is B) 4 bytes\n\n");
    }
    
    // Question 3
    printf("Question 3: Which operator is used to access the value at a pointer address?\n");
    printf("A) &\n");
    printf("B) *\n");
    printf("C) ->\n");
    printf("D) .\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    answer = toupper(answer);
    if (answer == 'B') {
        printf("Correct !\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is B) *\n\n");
    }
    
    // Question 4
    printf("Question 4: Which header file is required to use printf() and scanf()?\n");
    printf("A) stdlib.h\n");
    printf("B) conio.h\n");
    printf("C) stdio.h\n");
    printf("D) string.h\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    answer = toupper(answer);
    if (answer == 'C') {
        printf("Correct !\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C) stdio.h\n\n");
    }
    
    // Question 5
    printf("Question 5: What does the '&' operator do when used before a variable?\n");
    printf("A) Returns the value of the variable\n");
    printf("B) Returns the address of the variable\n");
    printf("C) Dereferences the variable\n");
    printf("D) Performs bitwise AND operation\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    answer = toupper(answer);
    if (answer == 'B') {
        printf("Correct !\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is B) Returns the address of the variable\n\n");
    }
    
    // Display final score
    printf("========================================\n");
    printf("          QUIZ COMPLETED!              \n");
    printf("========================================\n");
    printf("Your Score: %d out of %d\n", score, totalQuestions);
    printf("Percentage: %.2f%%\n", (score * 100.0) / totalQuestions);
    
    if (score == totalQuestions) {
        printf("Perfect score! Excellent work!\n");
    } else if (score >= totalQuestions * 0.7) {
        printf("Great job! You did well! \n");
    } else if (score >= totalQuestions * 0.5) {
        printf("Good effort! Keep practicing! \n");
    } else {
        printf("Don't give up! Try again! \n");
    }
    
    printf("========================================\n");
    
    return 0;
}
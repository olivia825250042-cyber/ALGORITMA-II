#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int score = 0;
    int wrong_count = 0;
    int operand1, operand2, user_answer, correct_answer;
    char oper;
    int max_operand;
    int question_count = 0;

    srand(time(NULL));

    while (question_count < 9 && wrong_count < 3) {
        question_count++;

        if (question_count <= 3) {
            max_operand = 10;
        } else if (question_count <= 6) {
            max_operand = 30;
        } else {
            max_operand = 60;
        }

        while (1) {
            int op_choice = rand() % 4;

            if (op_choice == 3) {
                operand2 = (rand() % max_operand) + 1; 
                int max_multiplier = max_operand / operand2;
                if (max_multiplier == 0) continue; 

                int multiplier = rand() % (max_multiplier + 1);
                operand1 = operand2 * multiplier;
            } else {
                operand1 = rand() % (max_operand + 1);
                operand2 = rand() % (max_operand + 1);
            }

            switch (op_choice) {
                case 0:
                    oper = '+';
                    correct_answer = operand1 + operand2;
                    break;
                case 1:
                    oper = '-';
                    correct_answer = operand1 - operand2;
                    break;
                case 2:
                    oper = 'x';
                    correct_answer = operand1 * operand2;
                    break;
                case 3:
                    oper = '/';
                    if (operand2 == 0) continue;
                    correct_answer = operand1 / operand2;
                    break;
            }

            if (correct_answer >= 0 && correct_answer <= max_operand)
                break; 
        }

        printf("Soal %d: %d %c %d = ?\n", question_count, operand1, oper, operand2);
        printf("Jawaban: ");
        if(scanf("%d", &user_answer) != 1) {
            printf("Input tidak valid! Program dihentikan.\n");
            break;
        }

        if (user_answer == correct_answer) {
            printf("Benar!\n");
            if (question_count <= 3) score += 5;
            else if (question_count <= 6) score += 10;
            else score += 15;
        } else {
            printf("Salah! Jawaban benar adalah %d\n", correct_answer);
            wrong_count++;
            if (wrong_count == 3) {
                printf("Kesalahan sudah 3 kali, game selesai.\n");
                break;
            }
        }
        printf("Skor sementara: %d\n\n", score);
    }

    printf("Skor akhir: %d\n", score);
    printf("Olivia(825250042), Merry(825250072), Mettadevi(825250074)");

    return 0;
}

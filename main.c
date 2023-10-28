#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(void)
{
    unsigned int counter;
    int grade;
    int total;
    float average;

    total = 0;
    counter = 0;
    fflush(stdin);
    fflush(stdout);
    SetConsoleOutputCP(CP_UTF8);

    printf("%s", "Podaj wynik, -1 kończy program: ");
    scanf("%d", &grade);
    while (grade != -1);
    {
        total = total + grade;
        counter++;
        printf("%s", "Podaj wynik, -1 kończy program: ");
        scanf("%d", &grade);
    }
    if(counter != 0)
    {
        average = (float) total / counter;
        printf("\nPodano %d wyników.\nŚredni wynik w grupie wynosi %.2f \n", counter, average);
    }
    else
    {
        puts("\nNie podano żadnego wyniku.");
    }
    system("pause");
    return 0;
}

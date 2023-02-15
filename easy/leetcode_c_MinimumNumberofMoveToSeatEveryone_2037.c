#include <stdio.h>




int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {

    int temp, total, total_sum = 0;
    for (int i = 0; i < seatsSize; i++)
    {
        for (int j = i + 1; j < seatsSize; j++)
        {
            if (seats[i] > seats[j])
            {
                temp = seats[i];
                seats[i] = seats[j];
                seats[j] = temp;
            }
        }
    }
    for (int i = 0; i < studentsSize; i++)
    {
        for (int j = i + 1; j < studentsSize; j++)
        {
            if (students[i] > students[j])
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    for (int i = 0; i < seatsSize; i++)
    {
        total = abs(students[i] - seats[i]);

        total_sum += total;
    }

    return total_sum;

}



int main()
{
    int seatsSize, studentsSize, seats_input, students_input,output;

    scanf("%d", &seatsSize);
    scanf("%d", &studentsSize);

    int* seats = malloc(sizeof(int) * seatsSize);
    int* students = malloc(sizeof(int) * studentsSize);

    for (int i = 0; i < seatsSize;i++)
    {
        scanf("%d", &seats_input);
        seats[i] = seats_input;
    }
    for (int i = 0; i < studentsSize; i++)
    {
        scanf("%d", &students_input);
        students[i] = students_input;
    }

    output = minMovesToSeat(seats, seatsSize, students, studentsSize);
    printf("%d\n", output);
    return 0;
}
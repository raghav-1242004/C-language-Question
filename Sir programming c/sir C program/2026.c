#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void delay()
{
    for(int i = 0; i < 20000; i++)
        for(int j = 0; j < 200; j++);
}

int main()
{
    FILE *ptr;
    int ch;

    ptr = fopen("HappyNEWyear2022.txt", "r");
    if(ptr == NULL)
    {
        printf("File not found!");
        return 0;
    }

    srand(time(NULL));

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    
    int colors[] = {1,2,3,4,5,6,7,9,10,11,12,13,14};
    int totalColors = sizeof(colors) / sizeof(colors[0]);

    while((ch = fgetc(ptr)) != EOF)
    {
        delay();

        int col = colors[rand() % totalColors];
        SetConsoleTextAttribute(h, col);

        printf("%c", ch);
    }

    SetConsoleTextAttribute(h, 7); // Reset to white
    fclose(ptr);

    return 0;
}

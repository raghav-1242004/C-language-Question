// #include<stdio.h> 
// #include<stdlib.h> 
// #include<string.h> 
// #define RED "\033[31m"
// #define GREEN "\033[32m"
// #define YELLOW "\033[33m"
// #define BLUE "\033[34m"
// #define MAGENTA "\033[35m"
// #define CYAN "\033[36m"

// // For Delay Read the code from txt

// void delay()
// {
//     for (int i = 0; i < 10000; i++)
//     {
//         for (int j = 0; j < 100; j++)
//         {
//         }
//     }
// }

// // For Color
// void color()
// {
//     int i = 0;
//     while (i < 100)
//     {
//         system("COLOR E");
//         system("COLOR 5");
//         system("COLOR C");
//         system("COLOR 9");
//     }
// }

// int main()
// {
//     const char *colors[] = {RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN};
    
//     FILE *ptr;
//     char c;
//     ptr = fopen("HappyNEWyear2022.txt", "r");
//     c = fgetc(ptr);
   
  
//     while (c != EOF)
//     {
//         delay();
//         printf("%c%s", c, colors[rand() % 6]);
//         c = fgetc(ptr);
//     }
//      color();
//     return 0;
// }
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

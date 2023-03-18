#include <Windows.h>
#include <stdio.h>

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD mode;
    GetConsoleMode(hConsole, &mode);
    SetConsoleMode(hConsole, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
    // Output colored text
    printf("\x1b[31mRed text\x1b[0m\n");
    return 0;
}
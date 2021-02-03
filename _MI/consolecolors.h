#ifndef CONSOLECOLORS_H
#define CONSOLECOLORS_H

#include <stdio.h>

#define ANSI_COLOR_BLACK   "\x1b[30m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_WHITE   "\x1b[37m"

#define ANSI_COLOR_BRIGHT  "\x1b[1m"
#define ANSI_COLOR_RESET   "\x1b[0"

//example:
// std::cout << ANSI_COLOR_RED "Hello World\n" ANSI_COLOR_RESET;

void cmd_red()        {printf("\033[1;31m");}
void cmd_green()      {printf("\033[1;32m");}
void cmd_yellow()     {printf("\033[1;33m");}
void cmd_blue()       {printf("\033[1;34m");}

void cmd_bold_red()   {printf("\033[0;31m");}
void cmd_bold_green() {printf("\033[0;32m");}
void cmd_bold_yellow(){printf("\033[0;33m");}
void cmd_bold_blue()  {printf("\033[0;34m");}
void cmd_reset_color(){printf("\033[0m"   );}

#endif //CONSOLECOLORS_H

// WIN32

/*
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE); 
    if (hStdout == INVALID_HANDLE_VALUE) 
    {
        cout << "Error while getting input handle" << endl;
        return EXIT_FAILURE;
    }
    //sets the color to intense red on blue background
    SetConsoleTextAttribute(hStdout, FOREGROUND_RED | BACKGROUND_BLUE | FOREGROUND_INTENSITY);

    cout << "This is intense red text on blue background" << endl;
    //reverting back to the normal color
    SetConsoleTextAttribute(hStdout, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
/**/

#ifndef CONSOLECOMMANDS_H
#define CONSOLECOMMANDS_H

//call example: cmd_cursorVisibillity(false)

void cmd_cursorVisibillity(bool showFlag)
{
	/*
	BOOL WINAPI SetConsoleCursorInfo
   (
		_In_       HANDLE              hConsoleOutput,
		_In_ const CONSOLE_CURSOR_INFO *lpConsoleCursorInfo
	);
	/**/

	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;
	
	GetConsoleCursorInfo(hOut, &cursorInfo);
	cursorInfo.bVisible = showFlag; // set cursor visibillity
	SetConsoleCursorInfo(hOut, &cursorInfo);

}


#endif // CONSOLECOMMANDS_H

/*
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO ScreenBufferInfo;
	GetConsoleScreenBufferInfo(hOut,&ScreenBufferInfo);
	COORD size;
	size.X = ScreenBufferInfo.srWindow.Right - ScreenBufferInfo.srwindow.Left + 1;
	size.Y = ScreenBufferInfo.srWindow.Bottom - ScreenBufferInfo.srwindow.Top + 1;
/**/


/*
	SetConsoleCursorInfo();
	
	SetConsoleScreenBufferInfoEx();
	GetConsoleScreenBufferInfo();	
	SetConsoleTitle();
	SetConsoleMode();
	GetConsoleMode();

	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD dwMode = 0;
	
	if(hOut = INVALID_HANDLE_VALUE){return GetLastError();}
	GetConsoleMode(hOut, &dwMode){}
	SetConsoleMode(hOut, dwMode){}
/**/

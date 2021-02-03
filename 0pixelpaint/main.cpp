#include <iostream>

#include <sdl.h>
#include <sdl_ttf.h>

#include "c:\z\cpp\sdl\_MI\Window.h"
#include "c:\z\cpp\sdl\_MI\defines.h"
#include "c:\z\cpp\sdl\_MI\colors.h"
#include "c:\z\cpp\sdl\_MI\drawshapes.h"

#undef main

SDL_Renderer*  renderer;
SDL_Window*    window;
SDL_Event      e;

SDL_Texture*	solidTexture;
SDL_Texture*	text;
SDL_Rect			solidRect;
TTF_Font*		gFont;

float FPS =    1000/33.3f;

bool running = true;
bool drawpixel = false;
bool ctrlisdown = false;
bool clear = false;

int mx;
int my;

int nmx;
int nmy;

static int brush = 1;


void input()
{
   if(POLLEVENT)
   {
      if(QUIT){running = false;}
      if(DOWNPRESS)
		{
         if(BACKSPACE) {clear = true;}
			if(SPACE)     {ctrlisdown = true;}
		}
      if(UPPRESS)
      {
         if(ESCAPE)    {running = false;}
         if(BACKSPACE) {clear = false;}
         if(SPACE)     {ctrlisdown = false;}
         if(MINUS)     {brush--;}
         if(EQUALS)    {brush++;}
			
      }
		if(MOUSEBUTTONDOWN)
		{
			drawpixel = true;
		}
		if(MOUSEBUTTONUP)
		{
			drawpixel = false;
		}
		if(MOUSEMOTION)
		{
			nmx = mx;
			nmy = my;
			mx = e.motion.x;
			my = e.motion.y;
		}
   }
}
void draw()
{
	SDL_SetRenderDrawColor(renderer,CYAN);

	static bool clearscreen = true;
	if(clearscreen)
	{
		SDL_RenderClear(renderer);
		clearscreen = false;
	}
	if(clear)
	{
		SDL_RenderClear(renderer);
	}
	
	if(drawpixel)
	{
		if(brush == 1)
		{
			drawLine(nmx,nmy,mx,my,BLACK,0);
		}
		else if(brush == 2)
		{
			drawLine(nmx,  nmy,  mx,  my  ,BLACK,0);
			drawLine(nmx-1,nmy,  mx+1,my  ,BLACK,0);
			drawLine(nmx,  nmy-1,mx,  my+1,BLACK,0);
		}
		else if(brush == 3)
		{
			drawLine(nmx,  nmy,  mx,  my  ,BLACK,0);
			drawLine(nmx-2,nmy,  mx+2,my  ,BLACK,0);
			drawLine(nmx,  nmy-2,mx,  my+2,BLACK,0);
			drawLine(nmx-1,nmy-1,mx+1,my+1,BLACK,0);
			drawLine(nmx+1,nmy-1,mx+1,my-1,BLACK,0);
		}
	}
 
	if(drawpixel && ctrlisdown)
	{
		if(brush == 1)
		{
			drawLine(nmx,nmy,mx,my,PURPLE,0);
		}
		else if(brush == 2)
		{
			drawLine(nmx,  nmy,  mx,  my  ,PURPLE,0);
			drawLine(nmx-1,nmy,  mx+1,my  ,PURPLE,0);
			drawLine(nmx,  nmy-1,mx,  my+1,PURPLE,0);
		}
		else if(brush == 3)
		{
			drawLine(nmx,  nmy,  mx,  my  ,PURPLE,0);
			drawLine(nmx-2,nmy,  mx+2,my  ,PURPLE,0);
			drawLine(nmx,  nmy-2,mx,  my+2,PURPLE,0);
			drawLine(nmx-1,nmy-1,mx+1,my+1,PURPLE,0);
			drawLine(nmx+1,nmy-1,mx+1,my-1,PURPLE,0);
		}
	}
	
	//SDL_Delay(1000/33);
	SDL_RenderPresent(renderer);
}
void update()
{

}

int main()
{
	init_Window("window","0",200,200,800,600,0,0);
	
	while(running)
	{
		input();
		draw();
		update();;
	}
		
	return(0);
}

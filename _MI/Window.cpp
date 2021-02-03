#include <sdl.h>
#include <sdl_image.h>
#include <sdl_ttf.h>
#include <sdl_mixer.h>
#include <iostream>
#include <windows.h>
#include "Window.h"

void init_Window(char *title, char *set_quality, int x, int y, int width, int height, int winparam, bool setproportionate)
{
	if(SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		assert(SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, set_quality));

		if(winparam ==  0){ window = SDL_CreateWindow(title, x,y,width,height, SDL_WINDOW_SHOWN);             }//0
		if(winparam ==  1){ window = SDL_CreateWindow(title, x,y,width,height, SDL_WINDOW_RESIZABLE);         }//1
		if(winparam ==  2){ window = SDL_CreateWindow(title, x,y,width,height, SDL_WINDOW_FULLSCREEN);        }//2
		if(winparam ==  3){ window = SDL_CreateWindow(title, x,y,width,height, SDL_WINDOW_FULLSCREEN_DESKTOP);}//3
		if(winparam ==  4){ window = SDL_CreateWindow(title, x,y,width,height, SDL_WINDOW_OPENGL);            }//4
		if(winparam ==  5){ window = SDL_CreateWindow(title, x,y,width,height, SDL_WINDOW_HIDDEN);            }//5
		if(winparam ==  6){ window = SDL_CreateWindow(title, x,y,width,height, SDL_WINDOW_BORDERLESS);        }//6
		if(winparam ==  7){ window = SDL_CreateWindow(title, x,y,width,height, SDL_WINDOW_MINIMIZED);         }//7
		if(winparam ==  8){ window = SDL_CreateWindow(title, x,y,width,height, SDL_WINDOW_MAXIMIZED);         }//8
		if(winparam ==  9){ window = SDL_CreateWindow(title, x,y,width,height, SDL_WINDOW_INPUT_GRABBED);     }//9
		if(winparam == 10){ window = SDL_CreateWindow(title, x,y,width,height, SDL_WINDOW_ALLOW_HIGHDPI);     }//10
		/*
        flags may be any of the following OR'd together:
        SDL_WINDOW_FULLSCREEN         //fullscreen window
        SDL_WINDOW_FULLSCREEN_DESKTOP //fullscreen window at the current desktop resolution
        SDL_WINDOW_OPENGL             //window usable with OpenGL context
        SDL_WINDOW_HIDDEN             //window is not visible
        SDL_WINDOW_BORDERLESS         //no window decoration
        SDL_WINDOW_RESIZABLE          //window can be resized
        SDL_WINDOW_MINIMIZED          //window is minimized
        SDL_WINDOW_MAXIMIZED          //window is maximized
        SDL_WINDOW_INPUT_GRABBED      //window has grabbed input focus
        SDL_WINDOW_ALLOW_HIGHDPI      //window should be created in high-DPI mode if supported (>= SDL 2.0.1)
        SDL_WINDOW_SHOWN              //is ignored by SDL_CreateWindow(). The SDL_Window
                                        is implicitly shown if SDL_WINDOW_HIDDEN is not set.
                                        SDL_WINDOW_SHOWN may be queried later using SDL_GetWindowFlags().
		 */

		/*
        16:9 resolutons
        MOST COMMMONLY USED RESOLUTIONS 19.1%
        1366x768
		  
        16:9 RESOLUTION
        1600X900 1366X768 1280X720 1152X648 1024X575

        console resolutions
        gba        4:3   240x160
        nds        4:3   256x192
        psp        ~16:9 480x272
        iphone     3:2   480x320
        atari lynx 108x102
        gamegear   160x144
        n-gage     256x192
        sega nomad 320x224
        psx        320x240 368x480 512x240 512x480 640x480
        zoom system1024x768 800x600 640x480
		  
        imac       16:9  2560x1440
        imacretina 16:9  5120x2880
		*/
		
		if(window == NULL)
		{
			printf("Window could not be created! SDL Error: %s\n", SDL_GetError());
		}
		else
		{
			renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
			
			if(renderer == NULL)
			{
				printf("Renderer could not be created! SDL Error: %s\n", SDL_GetError());
			}
			else
			{
				SDL_SetRenderDrawColor(renderer, 0x00,0x00,0x00,0x00);
				//Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if( !( IMG_Init( imgFlags ) & imgFlags ) )
				{
					printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
				}

				 //Initialize SDL_mixer
				if( Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 ) < 0 )
				{
					printf( "SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError() );
				}
			}
		}
	}
	if(setproportionate)
	{
		SDL_RenderSetLogicalSize(renderer,width,height);
	}
}

void destroy_Window()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow  (window);
	window = NULL;
	renderer = NULL;

	SDL_Quit();
}

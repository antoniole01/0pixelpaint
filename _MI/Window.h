#ifndef WINDOW_H
#define WINDOW_H

#include <sdl.h>
#include <assert.h>

extern SDL_Renderer* renderer;
extern SDL_Window*   window;

extern void init_Window(char *title, char *set_quality, int x, int y, int width, int height, int winparam, bool setproportionate);
extern void destroy_Window();

#endif // WINDOW_H

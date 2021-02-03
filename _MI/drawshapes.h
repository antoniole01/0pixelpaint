  
#ifndef DRAWFILLRECT_H
#define DRAWFILLRECT_H

#include <sdl.h>

extern SDL_Renderer* renderer;

//OPAQUE TRANSPARENT

inline void drawPoint(int x, int y, Uint8 r, Uint8 g, Uint8 b, Uint8 a, int BLENDMODE)
{
	
	if(BLENDMODE == 0)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_NONE);
	if(BLENDMODE == 1)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_BLEND);
	if(BLENDMODE == 2)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_ADD);
	if(BLENDMODE == 3)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_MOD);
	
	SDL_SetRenderDrawColor(renderer, r,g,b,a);
	SDL_RenderDrawPoint(renderer,x,y);
}

inline void drawPoints(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, Uint8 r, Uint8 g, Uint8 b, Uint8 a, int BLENDMODE)
{
#define POINTS_COUNT 4

	if(BLENDMODE == 0)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_NONE);
	if(BLENDMODE == 1)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_BLEND);
	if(BLENDMODE == 2)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_ADD);
	if(BLENDMODE == 3)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_MOD);
	
	SDL_Point points[POINTS_COUNT] = {
		{x1, y1},
		{x2, y2},
		{x3, y3},
		{x4, y4}
	};
	
	SDL_SetRenderDrawColor(renderer, r,g,b,a);
	SDL_RenderDrawPoints(renderer, points, POINTS_COUNT);
}
inline void drawLine(int x1, int y1, int x2, int y2, Uint8 r, Uint8 g, Uint8 b, Uint8 a, int BLENDMODE)
{
	
	if(BLENDMODE == 0)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_NONE);
	if(BLENDMODE == 1)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_BLEND);
	if(BLENDMODE == 2)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_ADD);
	if(BLENDMODE == 3)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_MOD);

	SDL_SetRenderDrawColor(renderer, r,g,b,a);
	SDL_RenderDrawLine(renderer, x1,y1,x2,y2);
}

inline void drawLines(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, Uint8 r, Uint8 g, Uint8 b, Uint8 a, int BLENDMODE)
{
#define POINTS_COUNT 4
	
	if(BLENDMODE == 0)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_NONE);
	if(BLENDMODE == 1)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_BLEND);
	if(BLENDMODE == 2)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_ADD);
	if(BLENDMODE == 3)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_MOD);

	SDL_Point points[POINTS_COUNT] = {
		{x1, y1},
		{x2, y2},
		{x3, y3},
		{x4, y4}
	};
	
	SDL_SetRenderDrawColor(renderer, r,g,b,a);
	SDL_RenderDrawLines(renderer, points, POINTS_COUNT);
}

inline void drawOutlineRect(int x, int y, int w, int h, Uint8 r, Uint8 g, Uint8 b, Uint8 a, int BLENDMODE)
{
	if(BLENDMODE == 0)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_NONE);
	if(BLENDMODE == 1)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_BLEND);
	if(BLENDMODE == 2)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_ADD);
	if(BLENDMODE == 3)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_MOD);
	
	SDL_Rect outlineRect = { x, y, w, h };
	SDL_SetRenderDrawColor(renderer, r,g,b,a);
	SDL_RenderDrawRect(renderer, &outlineRect);
}

inline void drawOutlineRects(int max,
									  int x, int y, int w, int h,
									  Uint8 r, Uint8 g, Uint8 b, Uint8 a,
									  int BLENDMODE)
{
	if(BLENDMODE == 0)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_NONE);
	if(BLENDMODE == 1)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_BLEND);
	if(BLENDMODE == 2)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_ADD);
	if(BLENDMODE == 3)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_MOD);

	SDL_Rect outlineRect = { x, y, w, h };
	SDL_SetRenderDrawColor(renderer, r,g,b,a);
	SDL_RenderDrawRects(renderer, &outlineRect, max);
}

inline void drawFillRect(int x, int y, int w, int h,
								 Uint8 r, Uint8 g, Uint8 b, Uint8 a,
								 int BLENDMODE)
{
	if(BLENDMODE == 0)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_NONE);
	if(BLENDMODE == 1)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_BLEND);
	if(BLENDMODE == 2)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_ADD);
	if(BLENDMODE == 3)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_MOD);

	SDL_Rect fillRect = { x, y, w, h };
	SDL_SetRenderDrawColor(renderer, r,g,b,a);
	SDL_RenderFillRect(renderer, &fillRect);
}

inline void drawFillRects(int max,
								  int x, int y, int w, int h,
								  Uint8 r, Uint8 g, Uint8 b, Uint8 a,
								  int BLENDMODE)
{
	if(BLENDMODE == 0)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_NONE);
	if(BLENDMODE == 1)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_BLEND);
	if(BLENDMODE == 2)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_ADD);
	if(BLENDMODE == 3)SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_MOD);
	
	SDL_Rect fillRect = { x, y, w, h };
	SDL_SetRenderDrawColor(renderer, r,g,b,a);
	SDL_RenderFillRects(renderer, &fillRect, max);
}

#endif // DRAWFILLRECT_Hk 


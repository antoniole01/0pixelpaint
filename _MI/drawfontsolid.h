#ifndef DRAWFONTSOLID_H
#define DRAWFONTSOLID_H

extern SDL_Renderer*	renderer;
extern SDL_Texture*	solidTexture_font;
extern SDL_Texture*	text_font;
extern SDL_Rect		solidRect_font;
extern TTF_Font*		gFont;

SDL_Surface*  menu;

extern inline void drawFontSolid(int centertype, int heighttype, int fontstyle,  int x, int y,  const char* textDraw,
											Uint8 r, Uint8 g, Uint8 b, Uint8 a, const char* fontType, int fontSize){
	TTF_Init();		
	gFont = TTF_OpenFont(fontType, fontSize);

	int w,h;

	//////////////////// center type
	enum{ left, center, right };
	int centering = centertype;

	if(centering == left){}
	if(centering == center){
		if (TTF_SizeText(gFont, textDraw, &w, &h) != -1)  x = x - (w / 2);
		else                                              printf("Error\n");
	}
	if(centering == right){
		if (TTF_SizeText(gFont, textDraw, &w, &h) != -1)  x = x - w;
		else                                              printf("Error\n");
	}

	//////////////////// height type
	enum{ top, middle, bottom };
	int heightening = heighttype;
	
	if(heightening == top){}
	if(heightening == middle){
		if (TTF_SizeText(gFont, textDraw, &w, &h) != -1)  y = y - (h / 2);
		else                                              printf("Error\n");
	}
	if(heightening == bottom){
		if (TTF_SizeText(gFont, textDraw, &w, &h) != -1)  y = y - h;
		else                                              printf("Error\n");
	}

	//////////////////// font style
	enum{ normal, bold, italic, underline, strikethrough };
	int fontstyling = fontstyle;
	
	if(fontstyling == normal       )TTF_SetFontStyle(gFont, TTF_STYLE_NORMAL);
	if(fontstyling == bold         )TTF_SetFontStyle(gFont, TTF_STYLE_BOLD);
	if(fontstyling == italic       )TTF_SetFontStyle(gFont, TTF_STYLE_ITALIC);
	if(fontstyling == underline    )TTF_SetFontStyle(gFont, TTF_STYLE_UNDERLINE);
	if(fontstyling == strikethrough)TTF_SetFontStyle(gFont, TTF_STYLE_STRIKETHROUGH);

	SDL_Color textColor	= { r,g,b,a };
	//menu = TTF_RenderText_Solid(gFont, textDraw, textColor); //solid
	menu = TTF_RenderText_Blended(gFont, textDraw, textColor); //blended
	
	text_font = SDL_CreateTextureFromSurface(renderer, menu);
	
	solidTexture_font = text_font;
	SDL_QueryTexture(solidTexture_font, NULL, NULL, &solidRect_font.w, &solidRect_font.h);

	solidRect_font.x = x;
	solidRect_font.y = y;
	SDL_RenderCopy(renderer, solidTexture_font, NULL, &solidRect_font);

	// : DESTROYING TEXTUREFONT IN MAIN APPLICATON CAUSES PROBLEMS WITH REALEASING COLORS

	SDL_FreeSurface(menu);	

	//destroy
	SDL_DestroyTexture(text_font);
	SDL_DestroyTexture(solidTexture_font);

	//close
	TTF_CloseFont(gFont);
}

#endif // DRAWFONTSOLID_H

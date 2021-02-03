#ifndef LTEXTURE_H
#define LTEXTURE_H

#include <sdl.h>
#include <sdl_image.h>
#include <string>

extern SDL_Renderer* renderer;

class LTexture
{
public:
	LTexture();
	~LTexture();
	bool loadFromFile( std::string path );
	void free();
	void setColor( Uint8 red, Uint8 green, Uint8 blue );
	void setBlendMode( SDL_BlendMode blending );
	void setAlpha( Uint8 alpha );
	void render( int x, int y, int w,int h, SDL_Rect* clip = NULL );
	
	int getWidth();
	int getHeight();

private:
	SDL_Texture* mTexture;

	int mWidth;
	int mHeight;
};

#endif // LTEXTURE_H

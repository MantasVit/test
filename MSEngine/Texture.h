/* MANTAS */

#pragma once

#include <iostream>
#include <string>
#include "SDL.h"
#include "SDL_image.h"

class Texture{
protected:
	SDL_Texture* tempTexture;
	SDL_Texture* objectTexture;
public:
	Texture();
	Texture(std::string filename);
	~Texture();
	SDL_Texture* getTexture();
	//SDL_Rect* getRect();
	//void setX(int x);
	//void setY(int y);
	//void centerPivot(int target);
};


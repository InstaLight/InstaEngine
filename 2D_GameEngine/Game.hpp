#pragma once
//#ifdef GAME_HPP
#define GAME_HPP
#include "SDL.h"
#include "SDL_image.h"
#undef main
#include<iostream>

class Game {

public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

	void handleEvents();
	void update();
	void render();
	void clean();

	static SDL_Renderer* renderer;

	bool running() { return isRunning; }

private:
	int cnt = 0;
	bool isRunning;
	SDL_Window* window;
};


//#endif // Game_hpp

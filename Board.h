#pragma once
#include <SFML/Graphics.hpp>

#define BOARD_HEIGHT 31 // row
#define BOARD_WIDTH 28 // column
#define WALL 1
#define FOOD 2
#define EMPTY 0
#define POWER_PELLET 5

class GameTile
{
private:
	const int board[BOARD_HEIGHT][BOARD_WIDTH];
	sf::Vector2i position(int x, int y);
	int type;
	bool isPassable;
	sf::CircleShape food;
	sf::CircleShape powerpellet;
	sf::RectangleShape shade1;
	sf::RectangleShape shade2;

public:
	GameTile(); // Constructor
};



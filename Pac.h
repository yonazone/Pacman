#pragma once

#include <SFML/Graphics.hpp>
#include "Globals.h"

// Declaration of Pacman class
class Pacman
{
private:
	int pacmanRowPos, pacmanColumnPos;
	float pacSpeed;
	sf::Texture pacTexture;
	sf::Sprite pacSprite;
	Direction direction;
	sf::CircleShape pacCircle;

public:
	Pacman();
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	void handleInput();
	void goUp();
};
#include <iostream>

#include <SFML/Graphics.hpp>

#include "Globals.h"
#include "Board.h"
#include "Pac.h"

//enum class Direction
//{
//	Up,   // y coordinate is -ve    pacmanRowPos--  also pacCircle.rotate(90d)upward [when open  mouth implemented]
//	Down, // y coordinate is +ve    pacmanRowpos++  also pacCircle.rotate(90d) or (180d) or (270d)
//	Left, // x coordinate is -ve    pacmanColumnPos--  
//	Right // x coordinate is +ve    pacmanColumnPos++
	/* 
	* if currently pacCircle is towards right(initial pos) then if i want to make it turn towards left then i rotate 180d
	* if currently pacCircle is towards right(initial pos) then if i want to make it turn towards up then i rotate 90d
	* if currently pacCircle is towards right(initial pos) then if i want to make it turn towards down then i rotate 270d or -90d
	* etcs...
	* IMPLEMENT THIS USING in moveUp,Down... functions
	* For example,
	* in moveUp function
	* if current direction = right
	* then pacCircle rotate(90d)
	* if current direction = left
	* then pacCircle rotate(270d) or (-90d)
	* if current direction = down
	* then pacCircle rotate (180d)
	*/

Pacman::Pacman()
	: pacmanRowPos(0), pacmanColumnPos(0), direction(Direction::RIGHT), pacSpeed(0.f)
{

}

void Pacman::moveUp()
{
	if (board[pacmanRowPos - 1][pacmanColumnPos] != WALL)
	{
		//pacmanRowPos--;
		pacCircle.setPosition(pacmanRowPos--, pacmanColumnPos);
	}
}

void Pacman::moveDown()
{
	if (board[pacmanRowPos + 1][pacmanColumnPos] != WALL)
	{
			pacmanRowPos++;
	}
}

void Pacman::moveLeft()
{
	if (board[pacmanRowPos][pacmanColumnPos - 1] != WALL)
	{
			pacmanColumnPos--;
	}
}

void Pacman::moveRight()
{
	if (board[pacmanRowPos][pacmanColumnPos + 1] != WALL)
	{
		pacmanColumnPos++;
	}
}

void Pacman::handleInput()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		this->moveUp();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		this->moveDown();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		this->moveLeft();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		this->moveRight();
	}
}

void Pacman::goUp()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Up))
	//while not pressed any other key or encounterd wall keep moving IMPLEMNT THE LOGIC LATER
	pacCircle.move(pacmanRowPos * 1.f, pacmanColumnPos * 1.f);
}

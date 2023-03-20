#pragma once
#include<SFML/Graphics.hpp>
class flower {
private:
	int xpos;
	int ypos;
	int color[3];

	sf::CircleShape body;
	sf::CircleShape leaf;
	sf::RectangleShape stem;

public:
	flower(int x, int y, int c[3]);
	void changeColor();
	void draw(sf::RenderWindow& window);
};



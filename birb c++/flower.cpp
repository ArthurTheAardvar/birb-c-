#include "flower.h"

flower::flower(int x, int y, int c[3]) {
	xpos = x;
	ypos = y;
	color[0] = c[0]; //if our array was any longer I would have used a for loop here :)
	color[1] = c[1];
	color[2] = c[2];

}

void flower::changeColor() {
	srand(time(NULL));
	int num = rand() % 100;
	if (num <= 5);

}

void flower::draw(sf::RenderWindow& window) {
	body.setPosition(xpos, ypos);
	body.setFillColor((sf::Color(color[0], color[1], color[2])));
	body.setRadius(20);
	window.draw(body);

	//leggies
	stem.setPosition(xpos + 10, ypos + 35);
	stem.setFillColor(sf::Color(200, 150, 0));
	stem.setSize(sf::Vector2f(5, 15));
	window.draw(stem); //first leg
	





	//birb beak
	leaf.setPointCount(3); //make it a triangle
	leaf.setRadius(10);
	leaf.setFillColor((sf::Color(200, 150, 0))); //orange
	leaf.setPosition(xpos + 17, ypos + 10);
	window.draw(leaf);

#include "Game.h"
#include<iostream>



Game::Game() :window()
{
}


Game::~Game()
{
}

void Game::loop()
{
	int skillAvailable = 0;
	while (window.getWindow().isOpen())
	{
		while (window.getWindow().pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.getWindow().close();
		}

		character.move();
		character.animation();
		window.setViewCenter(character.getPosition());
		window.getWindow().clear();
		window.getWindow().draw(map.getMap());
		window.getWindow().draw(character.getSprite());
		window.getWindow().display();
	}
}

#include "game.h"
game::game()
{
    /// initialise window
    this->window = new sf::RenderWindow(sf::VideoMode(1080,720),"Crazy Cricketing Champs",sf::Style::Fullscreen);
    this->window->setFramerateLimit(60);

    /// initialise game logic variables
    this->level_target = {level::EASY,10};
    this->overs_wickets = {2,3};
	this->runsScored = 0;
    this->wicketsTaken = 0;
}

/// defining accessors
const bool game::running() const
{
	return this->window->isOpen();
}

/// to reset game logic variables at the beginning of new game
void game::reset()
{
	this->runsScored = 0;
    this->wicketsTaken = 0;
}

/// window catching an event
void game::pollEvent()
{
    while (this->window->pollEvent(this->event))
	{
		if(this->event.type == sf::Event::KeyPressed)
		{
			switch (this->event.key.code)
		    {
		        case sf::Keyboard::Escape: this->window->close();
			    break;
			}
		}
	}
}

/// updating game logic
void game::update()
{
	this->pollEvent();
}

/// rendering output on window
void game::render()
{
	this->window->clear();
	this->window->display();
}

/// deleting window
game::~game()
{
    delete this->window;
}
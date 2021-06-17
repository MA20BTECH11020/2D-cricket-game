#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <utility>
#include <iostream>

/// enum class for game level
enum class level {EASY, MEDIUM, TOUGH};

/// class that controls overall game flow
class game
{
    private:/// Variables

    /// Window variables
    sf::RenderWindow* window;
	sf::Event event;

    /// Game logic Variables
    bool endGame;
    std::pair<level,unsigned> level_target;
    std::pair<unsigned, unsigned> overs_wickets;
    unsigned runsScored;
    unsigned wicketsTaken;

    public:/// Constructors and destructor
    game();
    virtual ~game();

    /// Functions

    /// Accessors
    const bool running() const;

    /// Functions to control, update and execute game logic on window
    void reset();
    void pollEvent();
    void update();
    void render();
};
#endif
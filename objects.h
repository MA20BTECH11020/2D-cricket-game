#ifndef OBJECTS_H
#define OBJECTS_H
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <iostream>
class objects
{
    public:
    //virtual function that returns the specific object
    virtual sf::Sprite getObject() = 0;
};
#endif
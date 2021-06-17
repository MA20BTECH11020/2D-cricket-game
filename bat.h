#ifndef BAT_H
#define BAT_H
#include "objects.h"
class bat: public objects
{
    sf::Sprite spritebat;
    sf::Texture texturebat;
    public:
    /// initialise sprite
    bat();
    /// function to return bat 
    sf::Sprite getObject();
};
#endif
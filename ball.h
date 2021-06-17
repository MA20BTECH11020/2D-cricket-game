#ifndef BALL_H
#define BALL_H
#include "objects.h"
class ball: public objects
{
    sf::Sprite spriteball;
    sf::Texture textureball;
    public:
    /// initialise sprite
    ball();
    /// function to return ball 
    sf::Sprite getObject();
};
#endif
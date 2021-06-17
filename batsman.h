#ifndef BATSMAN_H
#define BATSMAN_H
#include "objects.h"
class batsman: public objects
{
    sf::Sprite spritebatsman;
    sf::Texture texturebatsman;
    public:
    /// initialise sprite
    batsman();
    /// function to return batsman 
    sf::Sprite getObject();
};
#endif
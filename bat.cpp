#include "bat.h"
bat::bat()
{
    /// loading texture from file
    if(!this->texturebat.loadFromFile("Textures/bat.png"))
    {
        std::cout << "ERROR::OBJECTS::BAT::BAT::Could not load texture file." << "\n";
    }
    /// setting texture to the sprite
    this->spritebat.setTexture(this->texturebat);

    /// resize the sprite
    this->spritebat.scale(0.3f,0.27f);
}
sf::Sprite batsman::getObject()
{
    return this->spritebat;
}
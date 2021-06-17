#include "ball.h"
ball::ball()
{
    /// loading texture from file
    if(!this->textureball.loadFromFile("Textures/ball.png"))
    {
        std::cout << "ERROR::OBJECTS::BALL::BALL::Could not load texture file." << "\n";
    }
    /// setting texture to the sprite
    this->spriteball.setTexture(this->textureball);

    /// resize the sprite
    this->spriteball.scale(0.01f,0.01f);
}
sf::Sprite ball::getObject()
{
    return this->spriteball;
}
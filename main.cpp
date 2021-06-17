#include "game.h"
int main()
{
    game g;
    while(g.running())
    {
        g.update();
        g.render();
    }
    return 0;
}
#ifndef GAME_HPP
#define GAME_HPP

#include <ncurses.h>

struct Brick{
  int x, y;
};

class Game {
  private:
    const int FRAME_PLAY = 1;
    int height, width;
    Brick * brickList;
    int numBricks;
    int update_PLAY();
    int render_PLAY();
    void buildBricks();
    void removeBrick(Brick *);

  public:
    Game();
    ~Game();
    void start();

}; // end game class
#endif

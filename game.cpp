#include "game.hpp"

/**
 * Constructor for Game class.
 *
 **/
Game::Game() {

} // end Game constructor

/**
 * Constructor for Game class.
 *
 **/
Game::~Game() {

} // end Game deconstructor

/**
 * Member fucntion of Game which initializes and starts the game loop
 * @returns void
 **/
int Game::start() {
  int running = 0;
  int cFrame = FRAME_GAME;

  while(running > -1) {
    switch(cFrame) {
      case FRAME_PLAY:                       // BEGIN PLAY FRAME
        int code = update_PLAY();            // update game state and get code
        if (code < 0) return code;           // if failure, return code

        running = render_PLAY();             // render the game
        if (code > running) running = code;  // use the higher priority code.
      break;

      default:
      break;
    } // end switch
  } // end while running
} // end start member function

void Game::buildBricks() {
  int count = 0;
  brickList = new Brick[numBricks];
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      brickList[count] = new Brick();
      brickList[count]->y = i;
      brickList[count]->x = j;
      count++;
    }
  }
} // end buildBricks member function

void Game::removeNextBrick(Brick brick) {


} // end removeBrick member function

int Game::update_PLAY() {

} // end update_PLAY member function

int Game::render_PLAY() {

} // end render_PLAY member function

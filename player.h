#ifndef PLAYER_H
#define PLAYER_H

#include "marble.h"

class player {
public:
    player(marble& mb);
    marble mb;
    int points;
};
#endif
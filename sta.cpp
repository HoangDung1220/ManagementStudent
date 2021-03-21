#include "sta.h"
int sta::count;
sta::sta(){
    sta::count++;
}

sta::~sta(){
    sta::count--;
}


#include "wrapper.h"
#include <stdio.h>

int x = 300;
int y = 200;
int vx = 10;
int vy = -10;

int main() {
  fillRect("#abc", 0, 0, 100, 100);
}

void loop() {
  clear();
  x += vx;
  y += vy;
  if (x > getCanvasWidth() - 100) {
    vx = -1;
  }
  else if (x < 0) {
    vx = 1;
  }
  if (y > getCanvasHeight() - 100) {
    vy = -1;
  }
  else if (y < 0) {
    vy = 1;
  }
  fillRect("#abc", x, y, 100, 100);
}
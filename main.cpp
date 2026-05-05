#include <iostream>

using namespace std;

int main() {
  int width = 10;
  int height = 5;

  int snakeX = 5;
  int snakeY = 2;

  for (int y = 0; y < height; y++) {
    for (int x = 0; x < width; x++) {
      if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
        cout << "#";
      } else if (x == snakeX && y == snakeY) {
        cout << "O";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;

int main() {
    int width = 800, height = 600;
    initwindow(width, height); // Open a graphics window

    int x1 = 100, y1 = 100, x2 = 700, y2 = 500;
    int dx = x2 - x1, dy = y2 - y1;
    int steps = max(abs(dx), abs(dy));
    float xInc = (float)dx / steps, yInc = (float)dy / steps;
    float x = x1, y = y1;

    for (int i = 0; i <= steps; i++, x += xInc, y += yInc)
        putpixel((int)x, (int)y, WHITE);

    cout << "Line drawn using DDA algorithm." << endl;

    delay(5000);
    closegraph();
    return 0;
}

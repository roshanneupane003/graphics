#include <graphics.h>
#include <cmath>

int main() {
    initwindow(800, 600); 

    int x1 = 100, y1 = 100, x2 = 700, y2 = 500; 
    int dx = x2 - x1, dy = y2 - y1;
    int steps = std::max(abs(dx), abs(dy));
    float xInc = (float)dx / steps, yInc = (float)dy / steps;
    float x = x1, y = y1;

    for (int i = 0; i <= steps; i++, x += xInc, y += yInc)
        putpixel((int)x, (int)y, WHITE);

    delay(5000);
    closegraph();
    return 0;
}

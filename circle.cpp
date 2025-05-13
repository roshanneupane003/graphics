#include <iostream>
#include <graphics.h>

using namespace std;

int main() {
    int width = 800, height = 600;
    initwindow(width, height);

    int x = 400, y = 300, radius = 100;
    circle(x, y, radius); 

    cout << "Circle drawn at (" << x << ", " << y << ") with radius " << radius << "." << endl;

    delay(5000);
    closegraph();
    return 0;
}

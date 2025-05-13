#include <iostream>
#include <graphics.h>

using namespace std;

int main() {
    int width = 800, height = 600;
    initwindow(width, height);

    int x = 400, y = 300;         // Center of the ellipse
    int xRadius = 150, yRadius = 100;

    ellipse(x, y, 0, 360, xRadius, yRadius); // Draw full ellipse

    cout << "Ellipse drawn at (" << x << ", " << y << ") with radii "
         << xRadius << " and " << yRadius << "." << endl;

    delay(5000);
    closegraph();
    return 0;
}

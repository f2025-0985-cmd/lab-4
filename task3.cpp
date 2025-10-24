#include <iostream>
using namespace std;

int main() {
    const double pi = 3.1415926535;
    double radius, height, area, volume;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculate surface area and volume
    area = 2 * pi * radius * height + 2 * pi * radius * radius;
    volume = pi * radius * radius * height;

    cout << "\nSurface Area = " << area;
    cout << "\nVolume       = " << volume;

    return 0;
}

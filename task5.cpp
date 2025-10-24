#include <iostream>
using namespace std;

int main() {
    float length1, width1, length2, width2;
    float area1, area2;
    
    
    cout << "Enter the length of Rectangle 1: ";
    cin >> length1;
    cout << "Enter the width of Rectangle 1: ";
    cin >> width1;
    
    cout << "\nEnter the length of Rectangle 2: ";
    cin >> length2;
    cout << "Enter the width of Rectangle 2: ";
    cin >> width2;
    
    area1 = length1 * width1;
    area2 = length2 * width2;

    
    cout << "\nArea of Rectangle 1 = " << area1;
    cout << "\nArea of Rectangle 2 = " << area2;

    
    if (area1 == area2) {
        cout << "\n\nBoth rectangles have equal areas.";
    }
    else if (area1 > area2) {
        cout << "\n\nRectangle 1 has a greater area than Rectangle 2.";
    }
    else {
        cout << "\n\nRectangle 2 has a greater area than Rectangle 1.";
    }

    return 0;
}

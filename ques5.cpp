// 5. Take user input for radius and calculate the area and circumference of a circle. 
#include <iostream>
using namespace std;

int main() {
    float rad, circum;
    cout << "Enter radius of circle: ";
    cin >> rad;

    const float PI = 3.14;
    circum = 2 * PI * rad;
    cout << "The circumference of circle is: " << circum << endl;

    return 0;
}

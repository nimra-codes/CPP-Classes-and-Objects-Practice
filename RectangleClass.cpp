
#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Function to input dimensions
    void input() {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;
    }

    // Calculate area
    float calculateArea() {
        return length * width;
    }

    // Calculate perimeter
    float calculatePerimeter() {
        return 2 * (length + width);
    }

    // Display rectangle details
    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }

    // Compare two rectangles by area
    void compare(Rectangle r, string name1, string name2) {

    if (calculateArea() > r.calculateArea()) {
        cout << name1 << " has a larger area than "
             << name2 << "." << endl;
    }
    else if (calculateArea() < r.calculateArea()) {
        cout << name2 << " has a larger area than "
             << name1 << "." << endl;
    }
    else {
        cout << name1 << " and " << name2
             << " have equal areas." << endl;
    }
}
};

int main() {
    // Creating three objects
    Rectangle r1, r2, r3;

    cout << "Enter details for Rectangle 1:\n";
    r1.input();

    cout << "\nEnter details for Rectangle 2:\n";
    r2.input();

    cout << "\nEnter details for Rectangle 3:\n";
    r3.input();

    // Display details
    cout << "\n--- Rectangle 1 ---\n";
    r1.display();

    cout << "\n--- Rectangle 2 ---\n";
    r2.display();

    cout << "\n--- Rectangle 3 ---\n";
    r3.display();

    // Compare areas
    cout << "\n--- Rectangle Comparison ---\n";

r1.compare(r2, "Rectangle 1", "Rectangle 2");

r1.compare(r3, "Rectangle 1", "Rectangle 3");

r2.compare(r3, "Rectangle 2", "Rectangle 3");

    return 0;
}

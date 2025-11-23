// Abstraction hides complex implementation and only shows essentials to the user

#include <iostream>
using namespace std;

class car {
    private:
    void ignitefuelpump() {
        cout << "pump started\n";
    }

    void rotatetheshaft() {
        cout << "shaftrotating\n";
    }

    public:
    void startcar() {
        cout << "The car is starting" << endl;
        ignitefuelpump(); //hidden complexity
        rotatetheshaft(); //hidden complexity
    }
};

int main() {
    car c;
    c.startcar();  
    return 0;
}
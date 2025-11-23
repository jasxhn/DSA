//ANOTHER WAY TO SET SETTER

// this->score = score; is same as:
// int xe;
// int greet(int x) {
//     xe = x; //like in setters
// }
// this score(is xe)->score(is x)

// `this` is a pointer to the current object
// It helps resolve ambiguity when parameter names and data members match

#include <iostream>
using namespace std;

class player {
    private:
    int score;

    public:
    void setscore(int score) {
        this->score = score;
    }

    void showscore() {
        cout << "Score : " << score << endl;
    }
};

int main() {
    player p1;
    p1.setscore(100);
    p1.showscore();
    return 0;
}
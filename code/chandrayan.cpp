#include <bits/stdc++.h>
using namespace std;

class Chandrayan {
private:
    int x, y, z;
    char direction;

public:
    Chandrayan(int x_co, int y_co, int z_co, char dir){
        x = x_co;
        y = y_co;
        z = z_co;
        direction = dir;
    }

    void get_input();
    void move_forward();
    void move_backward();
    void turn_left();
    void turn_right();
    void turn_up();
    void turn_down();
    void display_status();
};

int main() {
    
    return 0;
}
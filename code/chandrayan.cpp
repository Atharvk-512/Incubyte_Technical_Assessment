#include <bits/stdc++.h>    //header files
using namespace std;

//class Chandrayan declared
class Chandrayan {
private:
    int x, y, z;  //x,y,x coordinates 
    char direction; // direction

public:
    // parameterized constructor
    Chandrayan(int x_co, int y_co, int z_co, char dir){
        x = x_co;
        y = y_co;
        z = z_co;
        direction = dir;
    }

    //member functions
    vector<char> get_input();
    void move_forward();
    void move_backward();
    void turn_left();
    void turn_right();
    void turn_up();
    void turn_down();
    void execute(vector<char>&);
    void display_status();
};

// function for taking input from user
vector<char> Chandrayan :: get_input(){
    vector<char> input;
    char inputchar;

    cout<<"Enter commands (f, b, r, l, t, d) separated by space...press enter to stop giving input and calculate result \n";

    while(cin.get(inputchar)){
        if(inputchar == '\n'){
            break;
        }
        input.push_back(inputchar);
    }
    return input;
}

// function for forward movement
void Chandrayan::move_forward(){
    if (direction == 'N') y++;
    else if (direction == 'S') y--;
    else if (direction == 'E') x++;
    else if (direction == 'W') x--;
    else if (direction == 'U') z++;
    else if (direction == 'D') z--;
}

// function for backward movement
void Chandrayan::move_backward(){
    if (direction == 'N') y--;
    else if (direction == 'S') y++;
    else if (direction == 'E') x--;
    else if (direction == 'W') x++;
    else if (direction == 'U') z--;
    else if (direction == 'D') z++;
}

// function for turning left
void Chandrayan::turn_left(){
    if (direction == 'N') direction = 'W';
    else if (direction == 'S') direction = 'E';
    else if (direction == 'E') direction = 'N';
    else if (direction == 'W') direction = 'S';
}

// function for turning right
void Chandrayan::turn_right(){
    if (direction == 'N') direction = 'E';
    else if (direction == 'S') direction = 'W';
    else if (direction == 'E') direction = 'S';
    else if (direction == 'W') direction = 'N';
}

// function for turning up
void Chandrayan::turn_up(){
    if (direction != 'U') direction = 'U';
}

// function for turning down
void Chandrayan::turn_down(){
    if (direction != 'D') direction = 'D';
}


//function to execute all the commands sequentially by calling appropriate funtion
void Chandrayan::execute(vector<char> &commands){
    for(char cmd : commands){
        if (cmd == 'f') move_forward();
        else if (cmd == 'b') move_backward();
        else if (cmd == 'l') turn_left();
        else if (cmd == 'r') turn_right();
        else if (cmd == 'u') turn_up();
        else if (cmd == 'd') turn_down();
    }
}

// function to display final position and direction of chandrayan
void Chandrayan::display_status(){
    cout<<"Final position of Chandrayan3 : ("<<x<<", "<<y<<", "<<z<<")\n";
    cout<<"Final direction of Chandrayan3 : "<<direction<<"\n";
}


int main() {
    Chandrayan spacecraft(0, 0, 0, 'N');    // object spacecraft of class Chandryan created
    vector<char> commands = spacecraft.get_input();     // get_input() called using object spacecraft
    spacecraft.execute(commands);   // execute() called using object spacecraft
    spacecraft.display_status();    // display_status() called using object spacecraft
    return 0;
}


// program terminated
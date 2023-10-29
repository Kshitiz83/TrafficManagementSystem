#include <iostream>
#include <thread>
#include <chrono>
#include <random>

using namespace std;

// Define traffic light states
enum TrafficLightState {
    RED,
    GREEN,
    YELLOW
};

const vector<string> trafficLightStates = { "RED", "GREEN", "YELLOW" };

class TrafficLight {
public:
    TrafficLight() {
        state = RED;
    }

    void changeState() {
        switch (state) {
            case RED:
                state = GREEN;
                break;
            case GREEN:
                state = YELLOW;
                break;
            case YELLOW:
                state = RED;
                break;
        }
        cout << trafficLightStates[state] << endl;
    }

    TrafficLightState getState() {
        return state;
    }

private:
    TrafficLightState state;
};


int main() {
    cout<<"*******Welcome to the Traffic Management System******";
    TrafficLight T1;
     while (true) {
        cout<<"The Traffic Signal is at:";
        // Call your function
        T1.changeState();

        // Sleep for 10 seconds (10000 milliseconds)
        this_thread::sleep_for(chrono::seconds(10));
    }

    return 0;
}

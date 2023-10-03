#include <iostream>
#include<iomanip>

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // Constructor to initialize the time
    Time(int h = 0, int m = 0, int s = 0) {
        setTime(h, m, s);
    }

    // Getter methods
    int getHour() const {
        return hour;
    }

    int getMinute() const {
        return minute;
    }

    int getSecond() const {
        return second;
    }

    // Setter methods
    void setHour(int h) {
        if (h >= 0 && h < 24) {
            hour = h;
        }
    }

    void setMinute(int m) {
        if (m >= 0 && m < 60) {
            minute = m;
        }
    }

    void setSecond(int s) {
        if (s >= 0 && s < 60) {
            second = s;
        }
    }

    // Set the time using all three parameters
    void setTime(int h, int m, int s) {
        setHour(h);
        setMinute(m);
        setSecond(s);
    }

    // Print the time in "hh:mm:ss" format
    void print() const {
        std::cout << std::setfill('0') << std::setw(2) << hour << ":" << std::setw(2) << minute << ":" << std::setw(2) << second << std::endl;
    }

    // Increment the time by one second
    void nextSecond() {
        second++;
        if (second >= 60) {
            second = 0;
            minute++;
            if (minute >= 60) {
                minute = 0;
                hour++;
                if (hour >= 24) {
                    hour = 0;
                }
            }
        }
    }
};

int main() {
    // Create a Time object and set the time to 12:30:45
    Time myTime(12, 30, 45);

    // Print the initial time
    std::cout << "Initial Time: ";
    myTime.print();
    // while(1){
    // Increment the time by one second and print it
    myTime.nextSecond();
    std::cout << "Next Second: ";
    myTime.print();
    // }
    return 0;
}

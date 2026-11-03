#include <iostream>
using namespace std;

class TimeConverter
{
private:
    int seconds;
    int hours, minutes;

public:

    // Convert Seconds to HH:MM:SS
    void secondsToTime()
    {
        cout << "\nEnter total seconds: ";
        cin >> seconds;

        hours = seconds / 3600;
        minutes = (seconds % 3600) / 60;
        int sec = seconds % 60;

        cout << "HH:MM:SS => "
             << hours << ":"
             << minutes << ":"
             << sec << endl;
    }

    // Convert HH:MM:SS to Seconds
    void timeToSeconds()
    {
        cout << "\nEnter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter seconds: ";
        cin >> seconds;

        int totalSeconds =
        (hours * 3600) +
        (minutes * 60) +
        seconds;

        cout << "Total Seconds = "
             << totalSeconds << endl;
    }
};

int main()
{
    TimeConverter t;
    int choice;

    do
    {
        cout << "\n===== TIME CONVERTER =====";
        cout << "\n1. Seconds to HH:MM:SS";
        cout << "\n2. HH:MM:SS to Seconds";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                t.secondsToTime();
                break;

            case 2:
                t.timeToSeconds();
                break;

            case 3:
                cout << "\nProgram Ended...";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while(choice != 3);

    return 0;
}
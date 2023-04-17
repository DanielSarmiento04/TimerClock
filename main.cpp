#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

void PrintTime(int Hours, int Minutes, int Seconds)
{
    // Print the time
    cout << Hours << ":" << Minutes << ":" << Seconds << endl;
    // delay the time
    this_thread::sleep_for(chrono::seconds(1));

}

int main()
{
    // Set the main variables
    int Hours = 0, Minutes = 0, Seconds = 0;

    // make a clock logic
    while (Hours < 24)
    {
        while (Minutes < 60)
        {
            while (Seconds < 60)
            {
                // Print the time
                PrintTime(Hours, Minutes, Seconds);
            
                // Add 1 to the seconds
                Seconds++;
            }

            // Reset the seconds
            Seconds = 0;

            // Add 1 to the minutes
            Minutes++;
        }

        // Reset the minutes
        Minutes = 0;

        // Add 1 to the hours
        Hours++;
    }

    return 0;
}
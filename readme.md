🕰️ Clock Program 🕰️

This is a program that simulates a digital clock displaying the current hour, minutes, and seconds in the console. The program runs in a continuous loop until 24 hours have been completed.

🔧 How it works 🔧

The program uses the standard C++ time library to print the current time to the console. Every second, the program waits using the "this_thread::sleep_for(chrono::seconds(1))" function to simulate the passage of time.

The program has three main variables: Hours, Minutes, and Seconds. The main loop of the program runs while the Hours are less than 24, and inside this loop, there are two nested loops that run while the Minutes and Seconds are less than 60.

On each iteration of the loop, the program calls the "PrintTime" function to print the current time, and then adds 1 to the Seconds. If the Seconds reach 60, they are reset to zero, and 1 is added to the Minutes. If the Minutes reach 60, they are reset to zero, and 1 is added to the Hours. When the Hours reach 24, the main loop ends, and the program stops.

🚀 How to run 🚀

To run the program, simply compile and execute the file in your preferred development environment. The program will print the current time to the console and continue to do so every second until a full cycle of 24 hours has been completed.





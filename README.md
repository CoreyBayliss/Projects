# ConsoleCPP Project

Basic Overview:

This CPP/C++ project is a console input calculator.  It is mainly functioning out of the calculatorApp.cpp file.  I've made other header files along with classes, but they are currently not functioning.
The purpose of this project was to make a simple application, and then add complexity as time goes on.  I wanted to have a simple application that I could build via command line, and build on any platform.

Down the road I will be looking to effectively make this project better.  Moving classes to other header files to narrow down the purpose of each header/class is the goal, but for simply running the code I had it all in one file.
the main CPP file has a class that take the user input and does the calculations.  In the main() of the cpp file, it prompts the user to input 3 variables.  The main() instatiates a class object to store the input, then calls specific
methods to act upon the input.  Then returns the data and output's a statement regarding the user's input.  The program will finish after that point.

Additional Comments:

There are a couple different approaches that this calculator can utilize.  Currently, I'm taking in two double inputs from the user after a prompt, and a input for the mathematic operator.  
To add complexity it would be interesting to be able to handle a string input, split the double values within the string and handle the input with calculator function.
I did not get to that point.  If you input something other than the accepted input type, you'll get an error and it closes the program.  Ideally, I would reject the user input if there was no matching
accepted value, then return a statement and prompt to enter again.  Then essentially if they failed 3 times, then I could force close of the program.

I could also run this program through a loop that would allow the user to clear the result and run more equations.
Adding more interactive complexity could be the next step of this program.


Sytem Requirements:


To execute this code on my pc, I had to go through the process of installing MinGW and the compilers for CPP/C++.  You'll have to go through the system variables to add the path to the Mingw/bin folder if you've never done so (C++ distributables should be installed also).
You should be able to run this in an IDE, but I've been writing code in Notepad and compiling in command line.  While it's not the most efficient, I wanted to grow my coding skills beyond IDE dependency.  It is nice to have a tool
like an IDE, but you can become reliant on it sometimes.


Notes:

Command Line Coding can be extremely tricky.  I ran an incorrect syntax command that ended up writing over my CPP file.  With that in mind, I created a script that backed up the current working directory to a backup folder.
I ran that every once in a while to ensure that if I made an error on the execution of the compile statment that I'd atleast have a backup file.  One of the downsides to not coding in an IDE.

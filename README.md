# !!!colorvisionproject-Feroz-786!!!

## Description

!!!My program begins by asking the user to enter for numbers of colors. The user is given a choice of picking a number between (2-5) which will replace the numbers of colors they need for the palette. Next, I used a do-while(); loop within an if statement to determine if the user has entered valid data. Then, I ask my user to create a new SVG file. To see if the user has enter .svg in the end I used .find(), and run it through do-while(); loop to let the user know if the file has been created or not. Lastly, the program uses if() statement to write within a file. For example, if the user enters 3, the program will write three safe colors in the file. 

!!!

### v0.2 Updates

*Coming soon*

### v1.0 Updates

*Coming soon*


## Developer

!!!Feroz Khan!!!

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
!!!
Enter the number of colors you need (2-5) ? 
1
Please try again, Enter the number of colors you need (2-5) ? 
6
Please try again, Enter the number of colors you need (2-5) ? 
3
Enter a name of a file where you want to save the palette to? 
k.txt
Enter a valid file name ending with .svg?
.svg
Enter a valid file name ending with .svg?
file.svg
file.svg has been opened !!!
```

## C++ Guide

### Variables and Data Types

!!!
int colors=0; 
    I used an int data type for the numbers of colors because I gave my user numbers to choose from. And Int is a perfect data type for numbers 
string fileName="";
    For the file name, I used a string because a file name can be a single character or words and stings, can capture long sentences. And I used fileName, so others can understand what I am asking for. 
fstream reader;
    I used fstream reader because it is a combination of both of and if stream to read from files or write to files. 
string svg;
    I used sting to store ".svg" to compare to my user. And I used SVG for the variable because it was used to see if the user enters .svg in the end or not. 
size_t  position;
    This was one of the functions, I used it to store a part of the filename rather than the whole string. 
!!!

### Console Input and Output

!!!I used cout for the output to the user to gather the data that was necessary in order to move to the next step. In other words, cout prints whatever is in " " or a specific data type that has been declared. On the other side cin, input to the user. cin allows the user to enter data. cin store the data into one of the declared data types and store it until changed.!!!

### Decisions

!!!I used several if statements to make decisions in the program. For example, I used an if statement to determine whether the number of the colors was in between the range that was provided. I have also used the if statement to write in the file that the user wanted to create. If decisions helped me determine how many colors to write in the file. !!!

### Iteration

!!!Loops helped the program determine how many times the code needs to repeat and when should it quiet the loop. I used several do-while(); loops at least once and repeat if necessary. For example, I used a do-while(); loop to see if the file the user entered has opened or not.!!!

### File Input and Output

!!!File Input and Output are used to create or read from files. I used a fstream reader.open(fileName, ios::out);to open a file to write in. And later used reader as cout with "<<" to write whatever I need to add in the file.!!!

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*

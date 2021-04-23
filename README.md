# !!!colorvisionproject-Feroz-786!!!

## Description

!!!My program begins by asking the user for how many colors they would like in their palete. The user is given a choice of picking a number between (2-5) which will replace the numbers of colors they need for the palette. Next, I used a do-while(); loop within an if statement to determine if the user has entered valid data. Then, I ask my user to create a new SVG file. To see if the user has enter .svg in the end I used .find(), and run it through do-while(); loop to let the user know if the file has been created or not. Lastly, the program uses if() statement to write within a file. For example, if the user enters 3, the program will write three safe colors in the file. 

!!!

### v0.2 Updates

*A few of the new features that I have added to this program include functions and vectors. These two features have helped me a lot with improving my program. For example, my original program would ask the user how many colors they want and write the same colors to the file. but now my program begins with asking the same question to the user and take that response and use one of the functions called '''bool validNumber (int);''' to determine whether the user input is within the given range or not. After completing that the program asks the user to enter a name of a file ending with .svg. After the user input the correct format, my program calls '''void changeCase(string&);''' to change upper case name +(.SVG) to lower case name+ (.svg). Next, the program takes the user's response and opens a file. After that '''oid writeInFile(int, fstream&);''' function is called. This function takes an int and fstream with pass by reference and writes within the file. This function calls another function''' vector<string>colorGenerator();''' to generate colors and write those colors to the file according to the user response. And lastly, this '''void fileClose(const fstream&);''' function take a fstream pass by reference and determine whether the file has been closed or not. It returns nothing but it displays to the user to let the user know if the file is closed or not.  *

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
How many colors would you like in your palete(2-5) ? 
1
Please enter a number between(2-5)
How many colors would you like in your palete(2-5) ? 
5
Enter a name of a file where you want to save the palette to, ending with(.svg)? 
color.sve
Enter a valid file name ending with .svg?
COLOR.SVG
The name of the file is color.svg (yes or no)?
no
what would you like to name the file?
Colors.svg
The name of the file is colors.svg (yes or no)?
yes
colors.svg has been opened 
D4E8D2
721CC6
3DD794
EBBB8A
0D3126
File has been closed
 !!!
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

*Arrays and vectors have a lot of similarities but at the same time, they are slite different from each other. For example, arrays can only hold a fixed size of a number with the same data type but a vector can hold unlimited numbers with the same data type. And vector comes with additions function such as .push_back() and .pop_back(); to remove or add an item along with .size(). On the other side, arrays don't have any of these functions. 

I used several Vectors within my function. For example, this function'''vector<int>newColor;''' stores random number. I used .push_back to store all the 6 random numbers within this vector and used a for() loop to read through each letter and change its value if necessary. Next, I used another vector called '''vector<string>color;''' and ran it through a couple of statements to change a number value to the alphabet. For this to happen I took the previous vector numbers above 9 and less than 15 and changed it to "A-F". Another vector that I have used in my program is '''vector<string>newColor;''' this vector holds the value of one of the functions called '''color generator();''' and write those values to the file by using the reader and a for loop();. *

### Functions

*'''bool validNumber (int);'''
This function takes an int as its parameter and returns a bool. The function checks whether the user has inserted a number that is within a range or not(2-5).
'''void fileClose(const fstream&);'''
Take a fstream with pass by reference to determine whether the file is closed or not and return nothing other than displaying it to the user.
'''void changeCase(string&);'''
Take a string by reference and change its case from upper to lower and return nothing.
'''vector<string>colorGenerator();'''
This function takes no parameters but instead, it returns a vector of string. when this function is called it is assigned to generate colors according to user input. 
'''void writeInFile(int, fstream&);'''
Take in an int and stream with pass by reference and write colors to the file.
*

### Classes

*Coming in version 1.0*

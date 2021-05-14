# !!!Color finder !!!
color finder finds the hex values in a the code checks if the code length is 6. from there the code will take the hex values and turn it into an intiger with that the code will then check if it falls in the correct values and if so will check if the previous pixel is to close to the current pixel in color and may pose a problem.

## Description

!!!currently my program will go though each pixel fidn the hex value convert them to an int value and display the rgb value as a single unit then display red green and blue seperatly so its easier for people who dont understand programing to understand it better. if there is a issue the program will show which color are the problems and by how much!!!

### v0.2 Updates

Updates
addition of an improved file reader
file now looks for the # before the hexvalues of color and then checks if the following string is 6 characters long
created structures that are called pixels, this contains a

### v1.0 Updates

in this update we are adding a class to the program. this lets every pixel save values and do the check hex function and display rgb values. 


## Developer

!!!Matthew Butcher!!!

## Example

To run the program, give the following commands:
type in file 

```
examplesvg.svg
```

Here is an example of the program running:

```
!!!Replace with an example of the program running with user interaction
#A5B6C4

potential issue between red colors values0and0
potential issue between colorsbf0000andff7f00
red issue amount-128
blue issue amount27
green issue amount58
!!!
```

## C++ Guide

### Variables and Data Types

!!!
i used int to represent the color levels of red green and blue because in a file those colors are represented by a number and the mixture of those numbers is how other colors are made.
i made two variables for current pixel and future pixel i am using these to check if any of the color values are to close or might cause a problem
there are a few data types in this code from srings to bools to int.
these cand be see here
string colorValues;
  int redFirst;
  int greenFirst;
  int blueFirst;
  string filename = "";
  int bluesecond;
  int redsecond;
  int greensecond;
  int firstColor;
  int secondColor;
  fstream reader;
  char repeat;
  string line = "";
  size_t point;
  string color;
  string input;
  int counter;
  string lastColor;
  bool keepGoing;
  pixel singlePixel;
  i made a new typle called pixel that is connectede to the struct called pixel. this lets me stor a certain amount of data in a orded area. 
  struct pixel
{
  string red;
  string green;
  string blue;
  // tone;
};
in pixel the red green and blue values are stored and each pixel has its own values.


!!!

### Console Input and Output

!!!
for input i used quite a few, for starters i am having the user input a file. this is important since everyting is based on what file the user inputs. from there i am having the program input what the color pixel rgb values are.
!!!

### Decisions

!!!
i used a decisions by asking the user to input a file.
while not the biggest decision its still an important one.
future decisions might inclue wanting to look out for certain color mixes or even change colors.

multiple decisions are being made in this file from if the following string is correct and should continue on the code to if the code should use the vareint made for a length of  six or if the code should use the three length version. 



!!!

### Iteration

!!!
for my program i am having having it run thought each line of code find the # symbol and having it then display the whole rgb value which would be a hexidecimal. from there the string is broken up value that is easier to understand and check the values against the previous color value. this will keep going for every line until it reaches the end of the image and then quites.
!!!

### File Input and Output

!!!

i am asking my program to use the inputed file and from there go though each pixel in the array and find the rgb values from there my program will display the total color value and break up that value into red green blue to be more understanable to those who dont know  programing.

 getline(cin, filename);
 this gets the file name that is entered
 reader.open(filename, ios::in | ios::out);
this opens the file based on the entered file name
 if(reader.is_open())
 this if says that follow the code if the reader is open
    {
     while (!reader.eof()) 
     this says while the file is not at the end of the file follow this code
     {
       getline(reader, line);
       this line reades the file and uses the string line
       point = line.find("#");
       this code uses point and says that point is the line when it looks though a file and finds a # and the characters after that.



!!!

### Arrays/Vectors

creates an array for the color values. each color found in the file is added to a vector. there are vectors for each red blue and green values of each pixel.
example
redNumbers.push_back(line.substr (0,1));
this takes the substring of the line at points 0 and points 1 and adds it to the vector that contains all the red values. this is to keep a record of all the red values.
there are color vectors for both green and blue

### Functions

multiple functions are coming in this update, one of the main function is the color check function. the color check function checks if a color is 5 to 10 rgb int off from the color before it and if it is it gives a warning about potential color blindness issues.
example 
bool isHexColor( const string & values )
{
  
  if( values.length() == 3 || values.length() == 6 )
  {
    for(int i=0; i < values.length(); i++)
    {
      if( !(values[i] >= '0' && values[i] <='9') &&
          !(values[i] >= 'a' && values[i] <= 'f') &&
          !(values[i] >= 'A' && values[i] <= 'F') )
          {
            return false;
          }
    }
    return true;
  }
  else
  {
    return false;
  }
}
what this function is doing is it is checking the length of the string and seeing if it does indeed match up to the values a pixel color would be. from there it checking the characters to see if the characters are 0 though 9 a though f and A though F) if not then it will stop and return false but if it does contain those characters all the way though then the function returns a true to the main program and the main program will proceed.

### Classes

*in this section we are creating a class called singlePixelin this class we are making it so that the pixel will record the hx values for red green and blue.

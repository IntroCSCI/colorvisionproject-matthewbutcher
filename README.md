# !!!Color finder !!!
color finder finds the hex values in a the code checks if the code length is 6. from there the code will take the hex values and turn it into an intiger with that the code will then check if it falls in the correct values and if so will check if the previous pixel is to close to the current pixel in color and may pose a problem.

## Description

currently my program will go though each pixel fidn the hex value convert them to an int value and display the rgb value as a single unit then display red green and blue seperatly so its easier for people who dont understand programing to understand it better. if there is a issue the program will show which color are the problems and by how much


### v0.2 Updates

Updates
addition of an improved file reader
file now looks for the # before the hexvalues of color and then checks if the following string is 6 characters long
created structures that are called pixels, this contains a

### v1.0 Updates

in this update we are adding a class to the program. this lets every pixel save values and do the check hex function and display rgb values. 


## Developer

Matthew Butcher

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
    };

in pixel the red green and blue values are stored and each pixel has its own values.
pixel is the object type that is created by the class.



### Console Input and Output


for input i used quite a few, for starters i am having the user input a file. this is important since everyting is based on what file the user inputs. 

    getline(cin, filename);

is the main input that asks for the file name so the program can read and react to it.





### Decisions


i make use of a few decisions in my code one of the best examles is when my code is deciding wether it should return true and continue or return fals and stop when testing a string to see if it has a hex value.



    bool pixel::isHexColor( const string & values )
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

this code is basicaly deciiding if it ok to continue to the rest of of the string.





### Iteration


for my program i am having having it run thought each line of code find the # symbol and having it then display the whole rgb value which would be a hexidecimal. from there the string is broken up value that is easier to understand and check the values against the previous color value. this will keep going for every line until it reaches the end of the image and then quites.

    getline(reader, line);
       point = line.find("#");


as mentioned before this line of code examines each line of code for the # synbol. it does this for the every line of code and repeat until it runs out of code to read.





### File Input and Output



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




### Arrays/Vectors

creates an array for the color values. each color found in the file is added to a vector. there are vectors for each red blue and green values of each pixel.
example

    vector <string> redNumbers;
    vector <string> blueNumbers;
    vector <string> greenNumbers;


this takes the substring in singlePixel takes the red value and adds it to the vector that contains all the red values. this is to keep a record of all the red values. push back is used to add the values to the vectors.


    redNumbers.push_back(singlePixel.red);


this is repeated for the blue and green values.

    blueNumbers.push_back(singlePixel.blue);
    greenNumbers.push_back(singlePixel.green);





  



### Functions

multiple functions are coming in this update, one of the main function is the color check function. the color check function checks if a color is 10 rgb int off from the color before it and if it is it gives a warning about potential color blindness issues.
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

*in this section we are creating a class called singlePixelin this class we are making it so that the pixel will first check if the string is a hex value and then it will record the hex values for red green and blue. it will then allow the hex value to be converted over to an rgb and check if the rgb values are withing the parameters they need to be.

 in the pixel.h

    class pixel
    {
      public:
      string red;
      string green;
      string blue;
      string hex;
      int redVal;
      int greenVal;
      int blueVal;


      bool colorDisplay(int, int, int);


      bool isHexColor( const string & );
  
    };

#endif

in pixel.cpp
in the first class function it shows that the hex values has to be between the numbers 0 to 9, a to f, and A to F. if it is not within those parameers the function will return false.

the second method it show that the rgb has to be 255 and 0 and depending if all being ture then the return will be true and if its not then the answer will return false.

both of these functions are to check the values the first one is so the correct values are being entered in to the code from the line reader. the second function is to check if the hex values were converted to rgb int correctly.


    bool pixel::isHexColor( const string & values )
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





    bool pixel::colorDisplay( int redf, int greenf, int bluef)
    {
    bool redtruth;
    bool greentruth;
    bool bluetruth;

    
    if( redf < 0 || redf > 255)
     {
       //cin>>redf;
       cout<<"red value "<<redf<<endl;
       redtruth = true;
     }

    if( greenf < 0 || greenf > 255)
     {
       //cin>>greenf;
       cout<<"green value "<<greenf<<endl;
       greentruth = true;

     }

    if( bluef < 0 || bluef > 255)
    {

       //cin>>bluef;
       cout<<"blue value "<<bluef<<endl;
       bluetruth = true;
       
     }

    if (redtruth == true && bluetruth == true && greentruth == true)
    {
    return true;
    }
    else
    {
      return false;
    }
    
    }





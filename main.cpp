//Author: Matthew Butcher
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
//#include <struct>
//#include "libraries/bitmap.h"
void colorCheck(string );
bool isHexColor( const string & );
bool colorVerify(string ,string, string );
bool colorDisplay(int, int, int);
void colorDominence(string, string, string);
void colorTest(int, int, int, int, int, int, string, string);
//void colorValueHex(string );
//  switch to SVG

struct pixel
{
  string red;
  string green;
  string blue;
  // tone;
};


int main()
{
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

  vector <string> redNumbers;
  vector <string> blueNumbers;
  vector <string> greenNumbers;
  
 //color = (0, 0, 0, 0);
//Palette Analyzer bitmap
  //do{
    //rgb
  cout << "Please enter the File to open:\n";
  //cin >> filename;
  //6 string 
  //01 red 23 green 45 blue
  //sub string
  //indexing i character at at color[0] color[1]
  //string red = color[0] + color[1];
  // deal with one or the other can do that
  // need both by the endl
  //substring position want to start
  //
  //use .length or . size
  
    getline(cin, filename);
    
    //getline(cin,file);
   // reader.open(file);
   reader.open(filename, ios::in | ios::out);
  //line reader still works fine
    if(reader.is_open())
    {
     while (!reader.eof()) 
     {
       getline(reader, line);
       point = line.find("#");
       
       //if(line[point])
       //{
       //cout<<'(';
       input.size();
       if(point != string::npos)
       {
        counter = point+1;
        //counter
        //cout<< counter;
         for(int counter = 0; counter < input.size(); counter++)
         {
           //if (input[counter] >= '0' && input[counter] <= '9')
           keepGoing = isHexColor(input[counter]);
           //keepGoing = isHexCounter(input[counter]);

           if(keepGoing = true && input.lenght = 6);
          {
          cout<< input[counter];
          singlePixel.red = line.substr (0,1);
          singlePixel.blue = line.substr (2,3);
          singlePixel.green = line.substr (4,5);
          //std::stringstream ss
          redFirst = stoi(singlePixel.red, 0, 16);
          blueFirst = stoi(singlePixel.blue, 0, 16);
          greenFirst = stoi(singlePixel.green, 0, 16);
          //if( .length() == 3) || values.length() == 6 )
          //if( .length() == 3) || values.length() == 6 )
          bool colorDisplay(redFirst, blueFirst, greenFirst);
          redNumbers.push_back(line.substr (0,1));
          blueNumbers.push_back(line.substr (2,3));
          greenNumbers.push_back(line.substr (4,5));
          if(counter < 0);
          {
            //
            void colorTest(redFirst, blueFirst, greenFirst, redsecond,bluesecond, greensecond,line, lastColor);
          }
          else if(keepGoing = true && input.length = 3);
          {
          cout<< input[counter];
          singlePixel.red = line.substr (0);
          singlePixel.blue = line.substr (2);
          singlePixel.green = line.substr (3);
          //std::stringstream ss
          redFirst = stoi(singlePixel.red, 0, 16);
          blueFirst = stoi(singlePixel.blue, 0, 16);
          greenFirst = stoi(singlePixel.green, 0, 16);
          //if( .length() == 3) || values.length() == 6 )
          //if( .length() == 3) || values.length() == 6 )
          bool colorDisplay(redFirst, blueFirst, greenFirst);
          redNumbers.push_back(line.substr (0,));
          blueNumbers.push_back(line.substr (1));
          greenNumbers.push_back(line.substr (2));
          if(counter < 0);
          {
            //
            void colorTest(redFirst, blueFirst, greenFirst, redsecond,bluesecond, greensecond,line, lastColor);
          }
          redsecond = redFirst;
          bluesecond = blueFirst;
          greensecond = greenFirst;
          lastColor = line;
          //redNumbers.push_back(line.substr (0,1));
          //blueNumbers.push_back(line.substr (2,3));
          //greenNumbers.push_back(line.substr (4,5));
          //for(int counter = 0; counter < input.size(); counter++){
          //if (input[counter] >= '0' && input[counter] <= '9')
           //{
           //---colorValues= input[counter];
           //}
          }
        }
  //fstream
  //getline
  //within string find where rgb
  //.find funciton
  //read 
  //read then coma
  // read hexadecima 
  // first two first red second 2 green last 2 blue
  //void colortest()
  // idea is to repeat this step for rgb second and have the program turn the old colorfirst to color second
  // bluesecond = bluefirst    
       }
     }
    //if ((firstColor=colorconflict1 && secondColor = colorconflict2)||(firstColor=colorconflict2 && secondColor = colorconflict1));
    //{
      //cout="error, potential color blindness problem at "<<endl;
    //}
  //}while
    }
    //secondPixel = input;
  reader.close();
  return 0;
}

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
//reads pixel and output color variable

//is colors withing parameters
bool colorDisplay( int redf, int greenf, int bluef)
{
  bool redtruth;
  bool greentruth;
  bool bluetruth;

    do
     {
       //cin>>redf;
       cout<<"red value "<<redf;
       redtruth = true;
     }while( redf < 0 || redf > 255);

    do
     {
       //cin>>greenf;
       cout<<"green value "<<greenf;
       greentruth = true;

     }while( greenf < 0 || greenf > 255);

    do
    {

       //cin>>bluef;
       cout<<"blue value "<<bluef;
       bluetruth = true;
       
     }while( bluef < 0 || bluef > 255);

    if (redtruth == true && bluetruth == true && greentruth == true);
    {
    return true;
    }
    else;
    {
      return false;
    }
    
}


void colorTest(int redP1, int blueP1, int greenP1, int redP2, int blueP2, int greenP2, string color1, string color2);
{
bool redTruth;
bool blueTruth;
bool greenTruth;


if (redP1 - redP2 < -5 || 5) && (redP1 - redP2 < 10 || -10);
{
  //
  cout<<"potential issue between red colors values"<<redP1<<"and"<<redP2<<endl;
  redTruth = false;

}
if (blueP1 - blueP2 < -5 || 5) && (blueP1 - blueP2 < 10 || -10);
{
  //
  cout<<"potential issue between red colors values"<<blueP1<<"and"<<blueP2<<endl;
  blueTruth = false;
}
if (greenP1 - greenP2 < -5 || 5) && (greenP1 - greenP2 < 10 || -10);
{
  //
  cout<<"potential issue between red colors values"<<greenP1<<"and"<<greenP2<<endl;
  greenTruth = false;
}

if( redTruth = false || blueTruth = false || greenTruth = false);
{
  cout<<"potential issue between colors"<<color1<<"and"<<color2<<endl;
}

}













//void colorTest(string redC, string blueC, string greenC)
//{



//}




// if pixel 
// v
//check if colors are to close to each other 
//void colorCheck(string )
//{

//}
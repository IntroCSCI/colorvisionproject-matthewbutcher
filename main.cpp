//Author: Matthew Butcher
#include <iostream>
#include <fstream>
#include <vector>
#include "pixel.h"
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
/*
struct pixel
{
  public:
  string red;
  string green;
  string blue;
  // tone;
};
*/
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
  string here ="";
  int revolves = 0;
  //pixel singlePixel;


  vector <string> redNumbers;
  vector <string> blueNumbers;
  vector <string> greenNumbers;
 //color = (0, 0, 0, 0);
//Palette Analyzer bitmap
  //do{
    //rgb
  cout << "Please enter the File to open:\n";
  //cin >> filename;
  //indexing i character at at color[0] color[1]
  //string red = color[0] + color[1];
  // deal with one or the other can do that
  // need both by the endl
  //substring position want to start
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
       //cout<< "while eof";
       //.size();
       if(point != string::npos)
       {
        counter = point+1;
        //counter
        //cout<< counter;
         //for( counter < line.size(); counter++)
         //{
           //cout<< "if point";

           //if (input[counter] >= '0' && input[counter] <= '9')
           // input = "";
           //input += line[counter]
           //check for valid characters
           //if keepGoing == false;
           here = line.substr(point+1,6);
           keepGoing = singlePixel.isHexColor(here);
           //keepGoing = isHexCounter(input[counter]);
           if(keepGoing == true)
          {
            
          cout<< here;
          singlePixel.red = here.substr (0,2);
          singlePixel.blue = here.substr (2,2);
          singlePixel.green = here.substr (4,2);
          //std::stringstream ss
          redFirst = stoi(singlePixel.red, 0, 16);
          blueFirst = stoi(singlePixel.blue, 0, 16);
          greenFirst = stoi(singlePixel.green, 0, 16);

          //singlePixel.redVal = redFirst;
          //singlePixel.blueVal = blueFirst;
          //singlePixel.greenVal = greenFirst;
          //cout<<redFirst;
          //if( .length() == 3) || values.length() == 6 )
          //if( .length() == 3) || values.length() == 6 )
          singlePixel.colorDisplay(redFirst, blueFirst, greenFirst);

          redNumbers.push_back(singlePixel.red);
          blueNumbers.push_back(singlePixel.blue);
          greenNumbers.push_back(singlePixel.green);
          
          if(revolves > 0)
          {
            //

            colorTest(redFirst, blueFirst, greenFirst, redsecond,bluesecond, greensecond,here, lastColor);
          }
          revolves = revolves+1;
          redsecond = redFirst;
          bluesecond = blueFirst;
          greensecond = greenFirst;
          lastColor = here;
          /*
          //else if(keepGoing == true && input.length() == 3)
          //{
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
          //make a value for color display
          colorDisplay(redFirst, blueFirst, greenFirst);
          redNumbers.push_back(line.substr (0));
          blueNumbers.push_back(line.substr (1));
          greenNumbers.push_back(line.substr (2));         
          if(counter < 0)
          {
            //
            colorTest(redFirst, blueFirst, greenFirst, redsecond,bluesecond, greensecond,line, lastColor);
          }
          redsecond = redFirst;
          bluesecond = blueFirst;
          greensecond = greenFirst;
          lastColor = here;
          //redNumbers.push_back(line.substr (0,1));
          //blueNumbers.push_back(line.substr (2,3));
          //greenNumbers.push_back(line.substr (4,5));
          //for(int counter = 0; counter < input.size(); counter++){
          //if (input[counter] >= '0' && input[counter] <= '9')
           //{
           //---colorValues= input[counter];
           //}
           */
          }
        }
  //fstream
  //getline
  //within string find where rgb
  //.find funciton
  // read hexadecima 
  // first two first red second 2 green last 2 blue
  //void colortest()
  // idea is to repeat this step for rgb second and have the program turn the old colorfirst to color second
  // bluesecond = bluefirst    
       //}
     }
    //if ((firstColor=colorconflict1 && secondColor = colorconflict2)||(firstColor=colorconflict2 && secondColor = colorconflict1))
    //{
      //cout="error, potential color blindness problem at "<<endl;
    }
  //}while
    //}
  // }  //secondPixel = input;
  reader.close();
  return 0;
}

/*
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
*/


void colorTest(int redP1, int blueP1, int greenP1, int redP2, int blueP2, int greenP2, string color1, string color2)
{
bool redTruth;
bool blueTruth;
bool greenTruth;
int blueMess;
int redMess;
int greenMess;
cout<<"potnetial issue numbers scale. closer bigger issue 1 - 10 farther away less issue"<<endl;


if ((redP1 - redP2 < 10 ) && (redP1 - redP2 > -10))
{
  if(redP1 > redP2)
  {
  //
  cout<<"potential issue between red colors values"<<redP1<<"and"<<redP2<<endl;
  redTruth = false;
  redMess = redP1 - redP2;
  //cout<<redMess<<endl;
  }
  else if(redP2 > redP1)
  {
  //
  cout<<"potential issue between red colors values"<<redP1<<"and"<<redP2<<endl;
  redTruth = false;
  redMess = redP2 - redP1;
  //cout<<redMess<<endl;
  }
}
if ( (blueP1 - blueP2 < 10) && (blueP1 - blueP2 > -10))
{
  //
  if(blueP1 > blueP2)
  {
  cout<<"potential issue between red colors values"<<blueP1<<"and"<<blueP2<<endl;
  blueTruth = false;
  blueMess = blueP1 - blueP2;
  //cout<< blueMess<<endl;
  }
  else if(blueP2 > blueP1)
  {
  cout<<"potential issue between red colors values"<<blueP1<<"and"<<blueP2<<endl;
  blueTruth = false;
  blueMess = blueP2 - blueP1;
  //cout<< blueMess<<endl;
  }
}
if  ((greenP1 - greenP2 < 10) && (greenP1 - greenP2 > -10))
{
  //
  if(greenP1 > greenP2)
  {
  cout<<"potential issue between red colors values"<<greenP1<<"and"<<greenP2<<endl;
  greenTruth = false;
  greenMess = greenP1 - greenP2;
  //cout<<greenMess<<endl;
  }
  else if(greenP2 > greenP1)
  {
  cout<<"potential issue between red colors values"<<greenP1<<"and"<<greenP2<<endl;
  greenTruth = false;
  greenMess = greenP2 - greenP1;
  //cout<<greenMess<<endl;
  }
}

if( redTruth == false || blueTruth == false || greenTruth == false)
{
  cout<<"potential issue between colors"<<color1<<"and"<<color2<<endl;
  cout<<"red issue amount"<<redMess<<endl;
  cout<<"blue issue amount"<<blueMess<<endl;
  cout<<"green issue amount"<<greenMess<<endl;
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
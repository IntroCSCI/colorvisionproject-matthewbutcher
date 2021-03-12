//Author: Matthew Butcher
#include <iostream>
#include <fstream>
#include "libraries/bitmap.h"

//  switch to SVG

using namespace std;

int main()
{
  int redfirst;
  int greenfirst;
  int bluefirst;
  string filename;
  int bluesecond;
  int redsecond;
  int greensecond;
  int firstColor;
  int secondColor;

  char repeat;

  cin >> filename;
  fstream reader;
//Palette Analyzer bitmap
  //do{
    //rgb
  cout << "File to open:\n";
    getline(cin, filename);
    
    //getline(cin,file);
   // reader.open(file);
   reader.open(filename, ios::in | ios::out);
  

    if(reader.is_open())
    {
    while (!reader.eof()) 
    {
     



  do{
    cin>>redfirst;

  }while( redfirst <0 || redfirst > 255);

  do{

    cin>>greenfirst;

  }while( greenfirst < 0 || greenfirst > 255);

  do{

    cin>>bluefirst;
  }while( bluefirst <0 || bluefirst > 255);


  // idea is to repeat this step for rgb second and have the program turn the old colorfirst to color second
  // bluesecond = bluefirst


    }
    }
    //if ((firstColor=colorconflict1 && secondColor = colorconflict2)||(firstColor=colorconflict2 && secondColor = colorconflict1));
    //{
      //cout="error, potential color blindness problem at "<<endl;
    //}



  //}while
  
  reader.close();
  return 0;
}

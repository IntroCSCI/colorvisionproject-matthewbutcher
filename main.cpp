//Author: Matthew Butcher
#include <iostream>
#include <fstream>
//#include "libraries/bitmap.h"

//  switch to SVG

using namespace std;

int main()
{
  int redfirst;
  int greenfirst;
  int bluefirst;
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
 //color = (0, 0, 0, 0);
  
//Palette Analyzer bitmap
  //do{
    //rgb
  cout << "Please enter the File to open:\n";
  //cin >> filename;
  
    getline(cin, filename);
    
    //getline(cin,file);
   // reader.open(file);
   reader.open(filename, ios::in | ios::out);
  
    if(reader.is_open())
    {
     while (!reader.eof()) 
     {
       getline(reader, line);
       point = line.find("(");
       //color = ;
       if(line[point])
       {
       cout<<'(';
       input.size();
       if(point != string::npos)
{
  counter = point+1;
    //cout<< counter;
  for(int counter = 0; counter < input.size(); counter++){

    if (input[counter] >= '0' && input[counter] <= '9')
    {
      
    cout<< input[counter];


    }
  }


     



    do
     {
       cin>>redfirst;
       cout<<"red value "<<redfirst;

     }while( redfirst <0 || redfirst > 255);

    do
     {

       cin>>greenfirst;
       cout<<"green value "<<greenfirst;

    }while( greenfirst < 0 || greenfirst > 255);

    do
    {

       cin>>bluefirst;
       cout<<"blue value "<<bluefirst;
     }while( bluefirst <0 || bluefirst > 255);


  // idea is to repeat this step for rgb second and have the program turn the old colorfirst to color second
  // bluesecond = bluefirst
        
       }
     }
    }
    //if ((firstColor=colorconflict1 && secondColor = colorconflict2)||(firstColor=colorconflict2 && secondColor = colorconflict1));
    //{
      //cout="error, potential color blindness problem at "<<endl;
    //}



  //}while
    }
  reader.close();
  return 0;
}


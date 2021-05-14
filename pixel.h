#ifndef PIXEL_H
#define PIXEL_H
#include <string>
#include <vector>
#include <iostream>

using namespace std;
using std::cout;
using std::string;
using std::vector;
using std::endl;

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
  //bool colorDisplay(int redVal, int greenVal, int blueVal);
  // tone;

  bool isHexColor( const string & );
  
};

#endif
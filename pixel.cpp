#include "pixel.h"
#include <string>
#include <vector>
//#include <char>
#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;
//using std::char;



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



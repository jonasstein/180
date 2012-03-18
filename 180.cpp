#include <iostream>
#include <cmath>

float oppositeangle(float angle)
{
  //  -180..180
  if (angle <= 0) 
    {return(angle+180);} 
  else
    {return(angle-180);}
}
 
float readangle()
{
  float ra;
  std::cin >> ra;
  return(ra);
}

int main()
{
  float angle;  
    while (angle = readangle())
      {
	std::cout << angle << " deg - 180 deg = "  <<  oppositeangle(angle) << "deg \n";
      }
  return 0;
}

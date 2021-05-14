//Author: Feroz Khan
#include "cvp.h"
#include <string>
#include <vector>
#include <iostream>
#include<fstream>
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::fstream;


//defenations//
//variables that are private//
/*
int numberofColors;
string randomColor;
string safeColor;
vector<string>generatcolor;//
vector<stirng>validColor1++,,,8;//
*/

//constructor//
color::color(int number):numberOfColors{number}
{
  fstream reader;
  generatColor={"color has not been generated"};
  safeColor="";
  validColor0={"F","F","F","F","F","F"};
  validColor1={"0","0","0","0","0","0"};
  validColor2={"E","6","9","F","0","0"};
  validColor3={"0","0","9","E","7","3"};
  validColor4={"5","6","B","4","E","9"};
  validColor5={"C","C","7","9","A","7"};
  validColor6={"F","0","E","4","4","2"};
  validColor7={"0","0","7","2","B","2"};
  validColor8={"D","5","5","E","0","0"};
}
//set the value of color to generatcolor//
void color::setGeneratColor(vector<string>color)
{
  generatColor={color};
}
//display to the user: number of colors etc//
void color::display()
{  
  //cout<<"Number of Colors: "<<numberofColors<<endl;
  for(int i = 0; i<generatColor.size();i++){
    cout<<generatColor[i];
  }
}

bool color::isValid()
{
  if(generatColor==validColor0)
  { 
   return true;
   }
  if(generatColor==validColor1)
  { 
   return true;
   }
  else if(generatColor==validColor2)
  {
   return true;
   }
  else if(generatColor==validColor3)
  {
   return true;
   }
  else if(generatColor==validColor4)
  {
   return true;
   }
   else if(generatColor==validColor5)
  {
   return true;
   }
   else if(generatColor==validColor6)
  {
   return true;
   }
   else if(generatColor==validColor7)
  {
   return true;
   }
  else  if(generatColor==validColor8)
  {
   return true;   
   }
   else {return false;}
}

void color::writeInFile(fstream& reader)
{
  for(int i =0; i<generatColor.size();i++)
  {
    reader<<generatColor[i];
  }
}
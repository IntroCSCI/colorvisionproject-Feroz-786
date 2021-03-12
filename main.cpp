//Author: Feroz Khan
#include <iostream>
#include<fstream>
using namespace std;

int main()
{
  int colors=0;
  string fileName="";
  fstream reader;
  string svg;
  size_t  position;

  do
  {
    cout<<"Enter the number of colors you need (2-5) ? "<<endl;

    cin>>colors;

    if(colors<2 || colors>5)
    {
      cout<<"Please try again, ";
    }
    else
    {
      break;
    }
  }
  while(colors<2 || colors>5);
    
  cout<<"Enter a name of a file where you want to save the palette to? "<<endl;
    
  do
  {
    cin>>fileName;
    position = fileName.find(".svg");
    svg=fileName[position];
    if(fileName.size()>=5 && fileName[position])
    {
       break;
    }
    else
    {
      cout<<"Enter a valid file name ending with .svg?"<<endl; 
    }
  }
  while(svg!=".svg");

  do
  {
    reader.open(fileName, ios::out);
    if(reader.is_open())
    {
      cout<<fileName<< " has been opened " <<endl;
    }
    else
    {
      cout<<"Failed to open the file."<<endl;
    }
  }
  while(!reader.is_open());

  if(colors==2)
  {
    reader<<".color1 {color:#785EF0}"<<endl;
    reader<<".color2 {color: #648FFF}"<<endl;
  }
  else if (colors==3)
  {
    reader<<".color1 {color:#785EF0}"<<endl;
    reader<<".color2 {color: #648FFF}"<<endl;
    reader<<".color3 {color: #DC267F}"<<endl;
  }
  else if (colors==4)
  {
    reader<<".color1 {color:#785EF0}"<<endl;
    reader<<".color2 {color: #648FFF}"<<endl;
    reader<<".color3 {color: #DC267F}"<<endl;reader<<".color4 {color: #FE6100}"<<endl;
  }
  else if (colors==5)
  {
    reader<<".color1 {color:#785EF0}"<<endl;
    reader<<".color2 {color: #648FFF}"<<endl;
    reader<<".color3 {color: #DC267F}"<<endl;reader<<".color4 {color: #FE6100}"<<endl;
    reader<<".color5 {color: #FFB000}"<<endl;
  }

  reader.close();
  
  return 0;
} 

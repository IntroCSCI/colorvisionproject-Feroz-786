//Author: Feroz Khan
#include"cvp.h"  //include cvp.h file//
#include <iostream>
#include<fstream>
#include <vector>
using namespace std;
#include <cstdlib>
#include <ctime>
  
//functions\\

//this function take an int as its parameter and return a bool. function checks wether the user have insert a number that is within a range or not. 
bool validNumber (int);
//take an fstream with pass by reference to determince wether the file is closed or not and return nothing other than displaying.
void fileClose(const fstream&);
//take a string by reference and change its case from upper to lower and return nothing. 
void changeCase(string&);
//this function take no parameters but instead it return a vector of string. when this function is called it is asign to generat colors according to user input. 
vector<string> colorGenerator(int);
//take in an int and fstream with pass byreference and write colors to the file.
void writeInFile(int, fstream&);

int main()
{
  int colors=0;
  string fileName;
  vector<string>checker;
  fstream reader;
  string svgchecker1;
  size_t  position1;
  size_t position2;
  string svgchecker2;
  srand(time(NULL));
  vector<string>newColor;
  string nameIsValid;

  // new variables//

  int count=0;
  int current=0;
  vector<string>randColor;
  int lastNum;
  int firstNum;
  vector<int>numberOfColors;

  //class

  do
  {
    cout<<"How many colors would you like to generat in your palette (2-5) ? "<<endl;
    cin>>colors;
    if(validNumber(colors)==true)
    {
      cout<<"Please enter a number between(2-5)"<<endl;
    }
    else
    {
      break;
    }
  }
  while(colors<2 || colors>5);
  
  color isSafeColor{colors}; //take the value of colors and asign it to the class varaiable named numberofColors.//
 
  cout<<"Enter a name of a file where you want to save the palette to, ending with(.svg)? "<<endl; 
  do
  {
    cin>>fileName;
    
    position1 = fileName.find(".svg");
    position2= fileName.find(".SVG");
  
    if((fileName.size()>=5) && (fileName[position1]||fileName[position2]))
    {
      changeCase(fileName);
      checker.push_back(fileName);
      do
      {
        cout<<"The name of the file is "<<fileName<<" (yes or no)?"<<endl;
        cin>>nameIsValid;
        if(nameIsValid=="no")
        {
          cout<<"what would you like to name the file?"<<endl;
          break;
        }
      }
      while(nameIsValid!="yes"&&nameIsValid!="Yes");
    }
    else
    {
      cout<<"Enter a valid file name ending with .svg?"<<endl; 
    }
    
  }
  while((!fileName[position1])||(nameIsValid=="no"));

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

  reader<<"Here are "<<colors<< " colors that have been generated"<<endl;

  do
  {
    do
    {
      current=(rand()%15); 
    }
    while(current>12);

    for(int i=0; i<numberOfColors.size();i++)
    {
      if(count>=1&&numberOfColors[i]==current)
      {
        do{lastNum=(rand()%15); }
        while(numberOfColors[i]!=lastNum&& lastNum>12);
        current=lastNum;
      }
    }

    numberOfColors.push_back(current);
    randColor=colorGenerator(current);
    //writeInFile(colors,reader);
    isSafeColor.setGeneratColor(randColor);
    isSafeColor.isValid();
    if(count<=0)
    {
      cout<<endl;
      cout<<"Here are " <<colors<<" colors that have been generated. "<<endl;
    }

    if(isSafeColor.isValid()==true)
    {
      reader<<count+1<<": ";
      cout<<count+1<<": ";
      isSafeColor.writeInFile(reader);
      //reader<<randColor[i];
      reader<<" (safe to use)"<<endl;

      isSafeColor.display();
      cout<<" (safe to use)"<<endl;
    }
    else if(isSafeColor.isValid()==false)
    {
      reader<<count+1<<": ";
      cout<<count+1<<": ";
      isSafeColor.writeInFile(reader);
      reader<<" (not safe to use)"<<endl;
      isSafeColor.display();
      cout<<" (not safe to use)"<<endl;
    }
    count++;
  }
  while(count!=colors);

  cout<<endl;
  reader.close();
  fileClose(reader);

  return 0;
} 

//Definations:
bool validNumber (int number)
{
  if (number < 2 || number >5 )
  {
    return true;
  }
  else
  {
    return false;
  }
}

void fileClose(const fstream &reader)
{
  if(reader.is_open())
  {
    cout<<"File has not been closed"<<endl;
  }
  else
  {
    cout<<"File has been closed"<<endl;
  }
  
}

void changeCase(string&fileName)
{
  size_t  position1;
  size_t position2;
  position1= fileName.find(".svg");
  position2= fileName.find(".SVG");

  if(fileName[position1] ||fileName[position2])
  {
    for(int i=0; i<fileName.size(); i++)
    {
      char letter =fileName[i];
      if(letter >= 'A' && letter <= 'Z' )
      {
        letter = letter + ('a' - 'A');
      }
      fileName[i]=letter;
    }
  }
}
  
vector<string> colorGenerator(int number)
{
  string color1="0";
  int randNum=number;
  vector<int>newNum;
  vector<string> color;
  vector<int >lastNum;
  int count=0;
     
  for(int i=0; i<color1.size();i++)
 {
    newNum.push_back(randNum);

    if(newNum[i]==1)
    {
      color={"0","0","0","0","0","0"};
    }
    else if(newNum[i]==0)
    {
      color={"F","F","F","F","F","F"};
    }
    else if(newNum[i]==2)
    {
      color={"D","5","5","E","0","0"};
    }
    else if(newNum[i]==3)
    {
      color={"0","0","7","2","B","2"};
    }
     else if(newNum[i]==4)
    {
      color={"E","6","9","F","0","0"};
    }
    else if(newNum[i]==5)
    {
      color={"F","0","E","4","4","2"};
    }
    else if(newNum[i]==6)
    {
      color={"0","0","9","E","7","3"};
    }
    else if(newNum[i]==7)
    {
      color={"C","C","7","9","A","7"};
    }
    else if(newNum[i]==8)
    {
      color={"5","6","B","4","E","9"};
    }
    else if(newNum[i]==9)
    {
      color={"C","6","9","4","E","A"};
    }
    else if(newNum[i]==10)
    {
      color={"A","3","9","7","E","F"};
    }
    else if(newNum[i]==11)
    {
      color={"E","9","9","5","A","D"};
    }
    else if(newNum[i]==12)
    {
      color={"0","9","0","7","5","B"};
    } 
  }
  //cout<<endl;
  return color;
    
}
/*
void writeInFile(int colors, fstream& reader)
{
  int count=0;
  for(int i=0; i<colors; i++)
  {
    vector<string>newColor=colorGenerator();
    count++;
    reader<<"Color#"<<count<<": #";
  
    for(int i=0;i<newColor.size();i++)
    { 
      reader<<newColor[i];
    }
    reader<<endl;

  }
}*/


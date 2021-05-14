
//Author: Feroz Khan
#ifndef CVP_H
#define CVP_H
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using std::cout;
using std::string;
using std::vector;
using std::fstream;
//class name = color//
class color
{
  private:

  int numberOfColors; //holds how many colors does the user want//
  string randomColor;// 
  string safeColor;
  vector<string>generatColor; // hold the value of the color form the main function//
  fstream reader; //write in files.
  //safe colors//
  vector<string>validColor0;
  vector<string>validColor1;
  vector<string>validColor2;
  vector<string>validColor3;
  vector<string>validColor4;
  vector<string>validColor5;
  vector<string>validColor6;
  vector<string>validColor7;
  vector<string>validColor8;
  
  public:

  color(int); //constructors//
  color();
  bool isValid(); //compare 
  void setGeneratColor(vector<string>);// set generatcolor value to the color that have been pluged in to the function//
  void writeInFile(fstream&);//writes in the given file//
  void display(); // for the user to see//
};
#endif
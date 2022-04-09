#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;
class Flow {
private:
  string filename;
  ofstream fout;
  int chislo ;
  string line;
  float F;
public:

    void OpenF();
    void CloseF();
    void Name();
    bool Openfile();
    bool EndOfFile();
    void Newline();
    void IntF();
    void FloatF();
    Flow(string s,int x,string S1,float y);
};
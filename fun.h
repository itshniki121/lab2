#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;
class Flow {
private:;
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
    void Newline(string stroka);
    void IntF(int Chislo_int);
    void FloatF(float Chislo_float);
    Flow(string s);
    Flow();
};
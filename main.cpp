#include "fun.h"

int main() {
    int Chislo_int;
    float Chislo_float;
    string file, stroka,s;
    file = "file.txt";
    cout<<"Vvedite chislo int!";
    cin >> Chislo_int;
    cout<<"Vvedite stroky!";
    cin>> stroka;
    cout<<"Vvedite chislo float!";
    cin>> Chislo_float;
    Flow Object(file);
    Object.OpenF();
    Object.Name();
    Object.Openfile();
    Object.EndOfFile();
    Object.Newline(stroka);
    Object.IntF(Chislo_int);
    Object.FloatF(Chislo_float);
    Object.CloseF();
    return 0;
}
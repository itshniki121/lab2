#include "fun.h"

int main() {
    int Chislo_int;
    float Chislo_float;
    string file, stroka;
    file = "file.txt";
    cout<<"Vvedite chislo int!";
    cin >> Chislo_int;
    cout<<"Vvedite stroky!";
    cin>> stroka;
    cout<<"Vvedite chislo float!";
    cin>> Chislo_float;
    Flow Object(file, Chislo_int, stroka, Chislo_float);
    char b;
    Object.OpenF();
    Object.Name();
    Object.Openfile();
    Object.EndOfFile();
    Object.Newline();
    Object.IntF();
    Object.FloatF();
    Object.CloseF();

    return 0;
}
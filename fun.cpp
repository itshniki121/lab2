#include "fun.h"

void Flow::OpenF() {
    fout.open(filename);
    cout << "File open" << endl;
}

void Flow::CloseF() {
    fout.close();
    cout << "File close" << endl;
}

void Flow::Name() {
    cout << "File name = ";
    cout << filename << endl;

}

bool Flow::Openfile() {
    return (fout.is_open());
}

bool Flow::EndOfFile() {
    return (!fout.eof());
}

void Flow::Newline(string stroka) {
    cout << "Vacha stroka = " << stroka << endl;
    fout << stroka << endl;

}

void Flow::IntF(int Chislo_int) {
    cout << "Vache chislo int = " << Chislo_int << endl;
    fout << Chislo_int << endl;
}

void Flow::FloatF(float Chislo_float) {
    cout << "Vache chislo float = " << Chislo_float << endl;
    fout << Chislo_float << endl;


}

Flow::Flow(string s) {
    filename = s;
}
Flow::Flow() {

}

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

void Flow::Newline() {
    cout << "Vacha stroka = " << line << endl;
    fout << line << endl;

}

void Flow::IntF() {
    cout << "Vache chislo int = " << chislo << endl;
    fout << chislo << endl;

}

void Flow::FloatF() {
    cout << "Vache chislo float = " << F << endl;
    fout << F << endl;


}

Flow::Flow(string s, int x, string S1, float y) {
    filename = s;
    chislo = x;
    line = S1;
    F = y;
}

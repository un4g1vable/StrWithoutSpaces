#include <iostream>
#include <string>
 
using namespace std;
int main () {
    setlocale(LC_ALL, "Russian");
    string str;
    string strwithoutspaces;
    cout << "Введите строку:" << endl;
    getline(cin,str);
    for (int i = 0; i < str.length();i++){
        if (str[i] == ' ' and str[i+1] == ' ')
            continue;
        else
            strwithoutspaces += str[i];
    }
    cout << "Конечная строка: " "\n" << strwithoutspaces << endl;
}
#include <iostream>
#include <map>
#include <string>
#include <list>
using namespace std;

int main() {
    /*
    map<int, string> mi;

    mi.insert(pair<int,string>(7, string("Giovanni")));
    mi.insert(pair<int,string>(1, string("Luca")));

    //se c'è non fa nulla
    mi.insert(pair<int,string>(7, string("Boh")));
    //se c'è sovrascrive
    mi[7] = "Boh";
    //se non c'è
    mi[5] = "Maria";

    map<int, string>::iterator iter;
    for(iter = mi.begin(); iter != mi.end(); ++iter){
        cout << iter->first << " " << iter->second << endl;
    }

    if(mi.count(7)) cout << "Esiste " << mi[7] << endl;

    for (auto& item : mi){
        cout << item.first << " " << item.second << endl;
    }
    */
    list<int> templ;
    templ.push_front(1);
    templ.push_front(6);
    templ.push_front(3);

    map<string, list<int>> mli;
    mli.insert(pair<string, list<int>>("Mario", templ));
    mli.insert(pair<string, list<int>>("Lucia", {1, 2, 3}));

    mli["Lucia"].push_back(0);
    mli["Tizio"].push_back(9);
    mli["Caio"] = {};

    for(const auto& item : mli){
        cout << "Nome: " << item.first << "\t Valori: ";
        for(const auto& value : item.second){
            cout << "[" << value << "]";
        }
        cout << endl;
    }

} 
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
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

} 
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> mi;

    mi.insert(pair<int,string>(7, string("Giovanni")));
    mi.insert(pair<int,string>(3, string("Luca")));
    mi.insert(pair<int,string>(7, string("Boh")));

    map<int, string>::iterator iter;
    for(iter = mi.begin(); iter != mi.end(); ++iter){
        cout << iter->first << " " << iter->second << endl;
    }

} 
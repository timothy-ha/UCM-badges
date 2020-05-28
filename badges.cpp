#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main() {
    using namespace std; 
    ifstream fh("badges/ethics");
    vector<string> vs;
    string s;
    while (fh >> s) {
        vs.push_back(s);
    }

    for (int i = 0; i < vs.size(); i++){
        cout << vs[i] << endl;
    }
}
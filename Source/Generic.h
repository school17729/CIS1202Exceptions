#pragma once

#include <iostream>
#include <limits>
#include <string>

using namespace std;

template<typename T> void getValue(istream &, T &);
template<> void getValue<string>(istream &, string &);
template<typename T> void getProperty(string const&, T &);
int getChoice(int);

template<typename T> void getValue(istream & inputStream, T & value) {
    inputStream >> value;
    inputStream.ignore(numeric_limits<streamsize>::max(), '\n');
}
 
template<typename T> void getProperty(string const& prompt, T & property) {
    cout << prompt << endl;
    getValue(cin, property);
}

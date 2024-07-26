// Christopher Kong
// CIS 1202 801
// July 25th 2024

#include <cctype>
#include <iostream>
#include <string>

using namespace std;

char character(char start, int offset);

int main() {
}

char character(char start, int offset) {
    bool isStartUpper = isupper(start) > 0;
    if (!isalpha(start)) {
        throw string("invalidCharacterException");
    } 

    char end = start + offset;

    if (!isalpha(end) || (isStartUpper != isupper(end) > 0)) {
        cout << "end is " << end << endl;
        throw string("invalidRangeException");
    }

    return end;
}


// Christopher Kong
// CIS 1202 801
// July 25th 2024

#include <cctype>
#include <iostream>
#include <string>

using namespace std;

char character(char start, int offset);
void test(char start, int offset);

int main() {
    test('a', 1);
    test('a', -1);
    test('Z', -1);
    test('?', 5);
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

void test(char start, int offset) {
    cout << "Passing in " << start << " and " << offset << "." << endl;
    char end;
    bool succeeded;

    succeeded = true;
    try {
        end = character(start, offset);
    } catch (string exception) {
        cout << "The exception was " << exception << endl;
        succeeded = false;
    }
    if (succeeded) {
        cout << "The result is " << end << endl;
    }
}

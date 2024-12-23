#include <iostream>
#include <fstream>
#include "solution.cpp"

using namespace std;

const int TEST_COUNT = 4; //don't forget to change it

int main() {

    fstream input, output;
    input.open("tests/input.txt", ios::in);
    output.open("tests/expected_output.txt", ios::in);
    Solution code;
    for (int i = 0; i < TEST_COUNT; i++) {
        cout << "Test " << i + 1 << " Status: ";

        //------------ checking answers
        int a, b;
        input >> a >> b;
        int sum;
        output >> sum;
        if (sum == code.Sum(a, b))
            cout << "OK" << endl;
        else
            cout << "Failed" << endl;
        //-------------
    }

}
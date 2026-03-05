#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

static const int MAX_SPACES = 40;


class MonopolySpace {
    public:
    string propertyName;
    string propertyColor;
    int value;
    int rent;

    MonopolySpace() {
        propertyName = "";
        propertyColor = "";
        rent = 0;
        value = 0;
    }

    MonopolySpace(string propertyName, string propertyColor, int value, int rent) {

    }

    bool isEqual(MonopolySpace other) {

    }

    void print() {

    }

};
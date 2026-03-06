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
        this->propertyName = propertyName;
        this->propertyColor = propertyColor;
        this->rent = rent;
        this->value = value;
    }

    bool isEqual(MonopolySpace other) {
        return this->propertyName == other.propertyName;
    }

    void print() {
        cout << propertyName << " | " << propertyColor << " | $"
        << value << " | Rent " << rent << endl;
    }

};
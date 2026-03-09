#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "CircularLinkedList.cpp"

using namespace std;

int rollDice2to12() {
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    CircularLinkedList<MonopolySpace> board;

    vector<MonopolySpace> List1 = {
        MonopolySpace("Go", "None", 0, 0),
        MonopolySpace("Mediterranean Ave", "Brown", 60, 2),
        MonopolySpace("Community Chest", "None", 0, 0),
        MonopolySpace("Baltic Ave", "Brown", 60, 4),
        MonopolySpace("Income Tax", "None", 0, 0),
        MonopolySpace("Reading Railroad", "White", 200, 25),
        MonopolySpace("Oriental Ave", "Light Blue", 100, 6),
        MonopolySpace("Chance", "None", 0, 0),
        MonopolySpace("Vermont Ave", "Light Blue", 100, 6),
        MonopolySpace("Connecticut Ave", "Light Blue", 120, 8),
    };
    board.addMany((List1));

    vector<MonopolySpace> List2 = {
        MonopolySpace("Jail/Just Visiting", "None", 0, 0),
        MonopolySpace("St. Charles Place", "Pink", 140, 10),
        MonopolySpace("Electric Company", "Utility", 150, 0),
        MonopolySpace("States Ave", "Pink", 140, 10),
        MonopolySpace("Virginia Ave", "Pink", 160, 12),
        MonopolySpace("Pennsylvania Railroad", "White", 200, 25),
        MonopolySpace("St. James Place", "Orange", 180, 14),
        MonopolySpace("Community Chest", "None", 0, 0),
        MonopolySpace("Tennessee Ave", "Orange", 180, 14),
        MonopolySpace("New York Ave", "Orange", 200, 16),
    };
    board.addMany((List2));

    vector<MonopolySpace> List3 = {
        MonopolySpace("Free Parking", "None", 0, 0),
        MonopolySpace("Kentucky Ave", "Red", 220, 18),
        MonopolySpace("Chance", "None", 0, 0),
        MonopolySpace("Indiana Ave", "Red", 220, 18),
        MonopolySpace("Illinois Ave", "Red", 240, 20),
        MonopolySpace("B&O Railroad", "White", 200, 25),
        MonopolySpace("Atlantic Ave", "Yellow", 260, 22),
        MonopolySpace("Ventnor Ave", "Yellow", 260, 22),
        MonopolySpace("Water Works", "Utility", 150, 0),
        MonopolySpace("Marvin Gardens", "Yellow", 280, 24),
    };
    board.addMany((List3));

    vector<MonopolySpace> List4 = {
        MonopolySpace("Go To Jail", "None", 0, 0),
        MonopolySpace("Pacific Ave", "Green", 300, 26),
        MonopolySpace("North Carolina Ave", "Green", 300, 26),
        MonopolySpace("Community Chest", "None", 0, 0),
        MonopolySpace("Pennsylvania Ave", "Green", 320, 26),
        MonopolySpace("Short Line Railroad", "White", 200, 25),
        MonopolySpace("Chance", "None", 0, 0),
        MonopolySpace("Park Place", "Blue", 350, 35),
        MonopolySpace("Luxuary Tax", "None", 0, 0),
        MonopolySpace("Boardwalk", "Blue", 400, 50),
    };
    board.addMany((List4));



    for (int turn = 1; turn <= 10; turn++) {
        int roll = rollDice2to12();

        cout << "\nTurn " << turn << " | Rolled: " << roll << endl;
        board.movePlayer(roll);

        cout << "Board view from player (next 5 spaces):" << endl;
        board.printFromPlayer(5);

        cout << "Times passed Go: " << board.getPassGoCount() << endl;
    }



    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.


    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}
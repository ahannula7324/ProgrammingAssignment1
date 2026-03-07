#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "MonopolySpace.cpp"

using namespace std;

int rollDice2to12() {
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    //CircularLinkedList<MonopolySpace> board;

    MonopolySpace test("Boardwalk", "Blue", 400, 50);
    test.print();

    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.


    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}
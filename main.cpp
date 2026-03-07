#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "MonopolySpace.cpp"
#include "Node.cpp"
#include "CircularLinkedList.cpp"

using namespace std;

int rollDice2to12() {
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    //CircularLinkedList<MonopolySpace> board;

    MonopolySpace test("Boardwalk", "Blue", 400, 50);
    MonopolySpace test2("Park Place", "Blue", 350, 35);
    test.print();

    Node<MonopolySpace> node(test);
    node.data.print();

    cout << test.isEqual(test2) << endl;

    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.


    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}
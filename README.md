### Build Instructions
Open project in Clion and click Build.

### Run Instructions
Click the green Run/Play button at the top to run main.cpp

### Data Structures Used
We used a circular singly linked list with a maximum of 40 spaces/nodes, similar to that of Monopoly. Each node has only one pointer, and once the board is full, none will have a nullptr.
###
We also used nodes, which each carry a name, color, value, and rent. These nodes, once added, would point to the node in front of it, overall making a loop.

### Limitations
The Monopoly Board has a maximum 40 spaces that it can have, just like the Monopoly game board. You are not allowed to add nodes once the 40 marker is hit.

### Functions Used
MonopolySpace:
bool isEqual(MonopolySpace other): This function simply returns if the name of one property is the same as the one entered in the parameter.
void print(): This function just prints out the property's name, color, value, and rent price.
###
CircularLinkedList:
bool addSpace(T value): This function takes in a parameter (usually a new node), and adds it to the board, updating every other node and its pointer. However it only adds it if the amount of spaces that are currently on the board are less than 40.
int addMany(std::vector<T>  values): Very similar to the previous function, this function takes in a parameter of a vector of new spaces, and adds them all to the list, updating each node correspondingly. Also, this will only add them if it does not exceed the maximum of 40.
void movePlayer(int steps): This function takes in the number rolled on the dice, and moves the player the correct number of steps, and also check if you passed "Go", and updates it.
int getPassGoCount(): This simply returns the number of times the player has passed Go.
void printFromPlayer(int count): This function takes in a number, and shows the upcoming spaces that you wish to see from where you are. For example, if you put 5 in the parameter, it would show you all 5 spaces in front of where you are on the board.
bool removeByName(string name): This function takes in a parameter, which should be corresponding to a name of one of the nodes on the board, and removes that node from the board. In this process, it updates every other node to make sure the pointers are all updated.
vector<string> findByColor(string color): This function takes in a parameter of the color in which you want to find, and returns a list/vector of all the spaces on board that have the same color. For example, if you put in "Blue" for color, it would make a vector with Boardwalk and Park Place both in it.
int countSpaces(): This function loops through the list (assuming it's not empty) and counts how many spaces/nodes there are on the board.
void clear(): This simply clears the board, meaning it loops through and deletes each node, so that in the end everything is pointing to nullptr.

### Traversal and Movement Logic
Each player will start at the headNode, in this case "Go". The dice will then roll, randomly selecting a number 2-12, and move you, node to node until you are on that property. This will continue as long as the loop runs, in this case 10 times. It will track when you pass Go (meaning made a full 40 node loop).

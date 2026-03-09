#include <vector>
#include "Node.cpp"
#include "MonopolySpace.cpp"

template <typename T>

class CircularLinkedList {
    private:
    Node<T>* headNode;
    Node<T>* tailNode;

    Node <T>* playerNode;

    int nodeCount;
    int passGoCount;

    public:
    CircularLinkedList() {
        headNode = nullptr;
        tailNode = nullptr;
        playerNode = nullptr;

        nodeCount = 0;
        passGoCount = 0;
    }

    bool addSpace(T value) {
        if (nodeCount == MAX_SPACES) {
            return false;
        }
        Node<T>* newNode = new Node<T>(value);

        if (headNode == nullptr) {
            headNode = newNode;
            tailNode = newNode;
            playerNode = newNode;
            newNode -> nextNode = headNode;
        } else {
            tailNode -> nextNode = newNode;
            tailNode = newNode;
            tailNode -> nextNode = headNode;
        }
        nodeCount++;
        return true;

    }

    int addMany(std::vector<T>  values) {
        int count = 0;

        for (int i = 0; i < values.size(); i++) {
            if (nodeCount == MAX_SPACES) {
                break;
            }
            addSpace(values[i]);
            count++;
        }
        return count;

    }

    void movePlayer(int steps) {
        if (playerNode == nullptr) {
            return;
        }
        for (int i = 0; i < steps; i++) {
            if (playerNode == tailNode) {
                passGoCount++;
            }
            playerNode = playerNode -> nextNode;
        }

    }

    int getPassGoCount() {
        return passGoCount;
    }

    void printFromPlayer(int count) {
        if (playerNode == nullptr) {
            return;
        }
        Node<T>* currentNode = playerNode;

        for (int i = 0; i < count; i++) {
            currentNode -> data.print();
            currentNode = currentNode -> nextNode;
        }

    }

    bool removeByName(string name) {
        if (headNode == nullptr) {
            return false;
        }
        Node<T>* currentNode = headNode;
        Node<T>* previousNode = tailNode;

        while (currentNode != nullptr) {

            if (currentNode -> data.propertyName == name) {
                if (currentNode == headNode) {
                    headNode = headNode -> nextNode;
                    tailNode -> nextNode = headNode;
                    delete currentNode;
                }
                else if (currentNode == tailNode) {
                    previousNode -> nextNode = headNode;
                    delete tailNode;
                    tailNode = previousNode;
                }
                else if (nodeCount == 1) {
                    delete currentNode;
                    headNode = nullptr;
                    tailNode = nullptr;
                    playerNode = nullptr;
                }
                else {
                    previousNode -> nextNode = currentNode -> nextNode;
                    delete currentNode;
                }
                if (playerNode == currentNode) {
                    playerNode = currentNode;
                }
                nodeCount--;
                return true;
            }
            previousNode = currentNode;
            currentNode = currentNode -> nextNode;
            if (currentNode == headNode) {
                break;
            }
        }
        return false;
    }

    vector<string> findByColor(string color) {
        vector<string> finalList;
        if (headNode == nullptr) {
            return finalList;
        }
        Node<T>* currentNode = headNode;

        for (int i = 0; i < nodeCount; i++) {
            if (currentNode -> data.propertyName == color) {
                finalList.push_back(currentNode -> data.propertyName);
            }
            currentNode = currentNode -> nextNode;
        }
        return finalList;
    }

    int countSpaces() {
        if (headNode == nullptr) {
            return 0;
        }

        int count = 0;
        Node<T>* currentNode = headNode;

        while (true) {
            count += 1;
            currentNode = currentNode -> nextNode;
            if (currentNode == headNode) {
                break;
            }
        }
        return count;
    }

    void clear() {
        if (headNode == nullptr) {
            return;
        }
        if (tailNode != nullptr) {
            tailNode -> nextNode = nullptr;
        }

        Node<T>* currentNode = headNode;

        while (currentNode) {
            Node<T>* temp = currentNode;
            currentNode = currentNode -> nextNode;
            delete temp;
        }
        headNode = nullptr;
        tailNode = nullptr;
        playerNode = nullptr;
        nodeCount = 0;
        passGoCount = 0;

        cout << "Board has been Cleared" << endl;

    }
};

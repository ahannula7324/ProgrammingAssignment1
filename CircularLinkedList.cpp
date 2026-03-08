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

    }

    void clear() {

    }
};

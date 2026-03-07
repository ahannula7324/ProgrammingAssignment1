#include <vector>
#include "Node.cpp"

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

    }

    int addMany(std::vector<T>  values) {

    }

    void movePlayer(int steps) {

    }

    int getPassGoCount() {
        return passGoCount;
    }

    void printFromPlayer(int count) {

    }

    void clear() {

    }
};

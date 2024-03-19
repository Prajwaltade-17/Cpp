

#include <iostream>


using namespace std;

const int MAX_SIZE = 5; // Maximum size of the list

struct StaticList {
    int data[MAX_SIZE];
    int size;

    StaticList() {
        size = 0; // Initialize size to 0
    }

    void insert(int value) {
        if (size < MAX_SIZE) {
            data[size++] = value; // Insert the value at the end and increment size
            cout << "Inserted " << value << " into the list." << endl;
        } else {
            cout << "List is full. Cannot insert " << value << "." << endl;
        }
    }

    void display() {
        cout << "List contents:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    StaticList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.insert(60); // This won't be inserted as the list is full

    list.display();

    return 0;
}

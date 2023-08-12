#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Stack {
private:
    vector<T> values;
    int capacity;

public:
    Stack(int cap) : capacity(cap) {}

    bool isEmpty() {
        return values.empty();
    }

    bool isFull() {
        return values.size() == capacity;
    }

    void push(const T &item) {
        if (isFull()) {
            throw std::runtime_error("Stack is full: push");
        }
        values.push_back(item);
    }

    T pop() {
        if (isEmpty()) {
            throw std::runtime_error("Stack is empty: pop");
        }
        T element = values.back();
        values.pop_back();
        return element;
    }
};

int main() {
    int capacity = 10;
    Stack<int> s(capacity);
  
    for (int i = 0; i < 12; i++) {
        try {
            s.push(i);
            cout << "Inserted the element: " << i << endl;
        } catch (const runtime_error &e) {
            cerr << "Error: " << e.what() << endl;
        }
    }

    return 0;
}

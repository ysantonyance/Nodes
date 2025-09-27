#include <iostream>
using namespace std;

// вузол списка (або один елемент)
class Node {
public:
    int value; // корисні дані (useful data)
    Node* next; // адреса наступного вузла в списку

    Node(int value) {
        this->value = value;
        this->next = nullptr;
    }
};

int main()
{
    Node* head = nullptr;

    for (int i = 0; i <= 10; i++)
    {
        Node* current = new Node(i);
        current->next = head;
        head = current;
    }

    Node* current = head;

    while (current != nullptr)
    {
        cout << current->value << ", ";
        current = current->next;
    }
    cout << "end of list\n";
}
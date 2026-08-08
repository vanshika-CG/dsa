
class Node {
public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;

    MyLinkedList() { head = nullptr; }

    int get(int index) {

        Node* temp = head;

        for (int i = 0; i < index; i++)
            temp = temp->next;

        if (!temp)
            return -1;

        return temp->val;
    }

    void addAtHead(int val) {
        Node* node = new Node(val);

        node->next = head;
        head = node;
    }

    void addAtTail(int val) {

        Node* node = new Node(val);
        Node* temp = head;

        if (!head) {
            head = node;
            return;
        }

        while (temp->next) {
            temp = temp->next;
        }

        temp->next = node;
    }

    void addAtIndex(int index, int val) {
        Node* node = new Node(val);
        Node* temp = head;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        for (int i = 0; i < index - 1; i++)
            temp = temp->next;

        if (!temp)
            return;

        node->next = temp->next;
        temp->next = node;
    }

    void deleteAtIndex(int index) {

        if (!head)
            return;

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        for (int i = 0; i < index - 1; i++)
            temp = temp->next;

        if (!temp || !temp->next)
            return;

        Node* del = temp->next;
        temp->next = del->next;
        delete del;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
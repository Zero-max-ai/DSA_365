#include <iostream>

class Node {
	public:
		int data;
		Node *next;
		Node(int data) {
			this->data = data;
			this->next = nullptr;
		}
};

class LinkedList {
	private:
		Node *head, *tail;
	public:
		LinkedList() {
			this->head = nullptr;
			this->tail = nullptr;
		}
		~LinkedList() {
			this->head = nullptr;
			this->tail = nullptr;
		}

		void insertAtBegin(int data) {
			Node *newNode = new Node(data);
			if (head == nullptr) {
				head = newNode;
				tail = newNode;
				return;
			}
			newNode->next = head;
			head = newNode;
		}
		void insertAtEnd(int data) {
			Node *newNode = new Node(data);
			if (head == nullptr) {
				head = newNode;
				tail = newNode;
				return;
			}

			tail->next = newNode;
			tail = newNode;
		}

		void showData() {
			if (head == nullptr) {
				std::cout << "list is empty" << std::endl;
				return;
			}
			Node *temp = head;
			while (temp != nullptr) {
				std::cout << temp->data << "-> ";
				temp = temp->next;
			}
			std::cout << std::endl;
		}
		
		void reverseList() {
			if (head == nullptr) {
				std::cout << "list is empty" << std::endl;
				return;
			}
			Node *prev = nullptr, *curr = head, *next = nullptr;
			std::cout << "inital" << prev << ", " << curr << ", " << next << std::endl;
			while (curr != nullptr) {
				next = curr->next;
				curr->next = prev;
			std::cout << "inner loop" << prev << ", " << curr << ", " << next << std::endl;
				prev = curr;
				curr = next;
			}
			head = prev;
		}
};

int main() {
	LinkedList *lisk = new LinkedList();
	lisk->insertAtBegin(1);
	lisk->insertAtEnd(2);
	lisk->insertAtEnd(3);
	lisk->insertAtEnd(4);
	lisk->insertAtEnd(5);
	lisk->showData();
	lisk->reverseList();
	lisk->showData();
	return 0;
}

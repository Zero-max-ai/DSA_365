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
			while (head != nullptr) {
				Node *temp = head;
				head = head->next;
				delete temp;
			}
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

		void removeElements(int data) {
			if (head == nullptr) {
				std::cout << "list is empty" << std::endl;
				return;
			}

			while (head != nullptr && head->data == data) {
				Node *to_del = head;
				head = head->next;
				delete to_del;
			}
			
			Node *previous = head;
			while (previous != nullptr && previous->next != nullptr) {
				if (previous->next->data == data) {
					Node *to_del = previous->next;
					previous->next = to_del->next;
					delete to_del;
				}
				else
					previous = previous->next;
			}
		}

		void showData() {
			Node *temp = head;
			while(temp != nullptr) {
				std::cout << temp->data << "-> ";
				temp = temp->next;
			}
			std::cout << "end\n";
			delete temp;
		}
	};

int main() {
	std::cout << "begin\n";
	LinkedList *lisk = new LinkedList();
	std::cout << "entering data loading phase\n";
	lisk->insertAtBegin(1);
	lisk->insertAtEnd(2);
	lisk->insertAtEnd(6);
	lisk->insertAtEnd(3);
	lisk->insertAtEnd(4);
	lisk->insertAtEnd(5);
	lisk->insertAtEnd(6);
	std::cout << "listing data\n";
	lisk->showData();
	std::cout << "removing the value elements\n";
	lisk->removeElements(6);
	std::cout << "again listing the elements\n";
	lisk->showData();
	return 0;
}

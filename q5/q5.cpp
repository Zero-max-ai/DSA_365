#include <iostream>

class Node {
	public:
		int data;
		Node *next;
		
		Node (int data) {
			this->data = data;
			this->next = nullptr;
		}
};

class  LinkedList {
	private:
		Node *head, *tail;
	public:
		LinkedList() {
			this->head = nullptr;
			this->tail = nullptr;
		}

		void insertAtBeginning (int data) {
			Node *newNode = new Node(data);
			if (head == nullptr) {
				head = tail = newNode;
				return;
			}
			newNode->next = head;
			head = newNode;
		}	

		void insertAtEnd (int data) {
			Node *newNode = new Node(data);
			if (head == nullptr) {
				head = tail = newNode;
				return;
			}
			tail->next = newNode;
			tail = newNode;
		}

		void deleteDuplicates() {
			if (head == nullptr) {
				std::cout << "empty linkedlist" << std::endl;
				return;
			}
			Node *temp = head;
			while (temp->next != nullptr) {
				if(temp->next->next == nullptr) {
					return;
				}
				if (temp->data == temp->next->data) {
					temp->next = temp->next->next;
				}
				else if (temp->data != temp->next->data) {
					temp = temp->next;
				}
			}
			return;
		}
		void showData () {
			Node *temp = head;
			while (temp->next != nullptr) {
				std::cout << temp->data << " -> ";
				temp = temp->next;
			}
			std::cout << "end" << std::endl;
			return;
		}
};

int main () {
	LinkedList *l1 = new LinkedList();
	l1->insertAtBeginning(1);
	l1->insertAtBeginning(1);
	l1->insertAtEnd(2);
	//l1->insertAtEnd(2);
	l1->insertAtEnd(3);
	l1->insertAtEnd(3);
	l1->showData();
	l1->deleteDuplicates();
	l1->showData();
	delete l1;
	return 0;
}

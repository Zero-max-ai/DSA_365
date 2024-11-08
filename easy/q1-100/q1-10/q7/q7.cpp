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
			Node *temp = head;
			Node *next;
			// de allocate the next to null because of cycle linkedlist
			if (tail->next)
				tail->next = nullptr;
			while (temp != nullptr) {
				next = temp->next;
				delete temp;
				temp = next;
			}
			head = nullptr;
			tail = nullptr;
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
			return;
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
			return;
		}

		void showList() {
			if (head == nullptr) {
				std::cout << "list is empty" << std::endl;
				return;
			}
			Node *temp = head;
			while (temp != nullptr) {
				std::cout << temp->next << ", " << temp->data << "->";
				temp = temp->next;
			}
			std::cout << std::endl;
			return;
		}

		bool changeEndPointerPos(int val) {
			if (head == nullptr) {
				std::cout << "list is empty" << std::endl;
				return false;
			}

			if (val < 0)
				return false;

			if (val == 0) {
				tail->next = head;
				return true;
			}

			Node *temp = head;
			for (int i=0; i<val; i++) {
				if (!temp->next) {
					std::cout << "invalid input" << std::endl;
					return false;
				}
				temp = temp->next;
			}
			tail->next = temp;
			return true;
		}

		bool hasCycle() {
			if (head == nullptr) {
				std::cout << "list is empty" << std::endl;
				return false;
			}
			Node *slow = head;
			Node *fast = head;
			while (fast && fast->next) {
				slow = slow->next;
				fast = fast->next->next;
				if (slow == fast)
					return true;
			}
			return false;
		}
};


int main() {
	LinkedList *lisk = new LinkedList();
	lisk->insertAtBegin(1);
	lisk->insertAtEnd(2);
	lisk->insertAtEnd(0);
	lisk->insertAtEnd(1);
	//lisk->insertAtBegin(1);
	lisk->showList();
	std::cout << lisk->changeEndPointerPos(0) << std::endl;
	std::cout << lisk->hasCycle() << std::endl;
	delete lisk;
	return 0;
}

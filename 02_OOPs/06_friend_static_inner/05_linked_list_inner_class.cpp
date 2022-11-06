#include <iostream>
using namespace std;

class LinkedList{
private:
	struct Node{
		int data;
		Node *next;
		Node(int num, Node* nxt = NULL){data = num; next = nxt;}
	};
	Node* head;
	int node_count;
public:
	LinkedList(){head = NULL; node_count = 0;}
	int getNodeCount(){return node_count;}

	void insert_at_start(int num){
		Node *new_node = new Node(num);
		if (node_count == 0){
			head = new_node;
		}
		else {
			new_node->next = head;
			head = new_node;
		}
		node_count++;
	}

	void insert_at_end(int num){
		Node *new_node = new Node(num);
		if(head == NULL){head = new_node;}
		else{
			Node *temp = head;
			while(temp->next){temp = temp->next;}
			temp->next = new_node;
		}
		node_count++;
	}

	void display(){
		if (node_count == 0){cout << "Empty LinkedList" << endl; return;}
		else{
			Node *temp = head;
			while(temp->next){
				cout << temp->data << "->";
				temp = temp->next;
			}
			cout << temp->data << endl;
		}
	}
};

int main(int argc, char const *argv[])
{
	LinkedList ll;
	cout << ll.getNodeCount() << endl;
	ll.insert_at_start(5);
	ll.insert_at_start(7);
	ll.insert_at_start(2);
	ll.insert_at_start(1);
	ll.insert_at_end(5);
	ll.insert_at_end(8);
	ll.insert_at_end(3);
	cout << ll.getNodeCount() << endl;
	ll.display();
	return 0;
}

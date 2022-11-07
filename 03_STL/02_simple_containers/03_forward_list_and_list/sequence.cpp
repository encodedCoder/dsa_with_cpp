#include <iostream>
#include <vector>
using namespace std;

class Sequence{
	struct Node{
		int data;
		Node* next;
		Node(int d, Node *n = NULL):data(d), next(n){}
	};
	Node *head, *tail;
public:
	Sequence(){head = NULL;}
	Sequence& insert(int data){
		Node *new_node = new Node(data);
		if(head == NULL){
			head = tail = new_node;
		}
		else{
			tail->next = new_node;
			tail = new_node;
		}
		return *this;
	}
	Sequence& print(){
		Node *temp = head;
		while(temp->next){
			cout << temp->data << " ";
			temp = temp->next;
		} cout << temp->data << endl;
		return *this;
	}
	Sequence& replace(int target, vector<int> seq){
		Node* temp = NULL;
		Node* seq_next;
		Node* del_node;
		if(head->data == target){
			del_node = head;
			seq_next = head->next;
		}else{
			temp = head;
			while(temp->next->data != target){temp = temp->next;}
			del_node = temp->next;
			seq_next = temp->next->next;
		}
		int i = 0;
		if(temp == NULL){
			Node *new_node = new Node(seq[0]);
			head = temp = new_node;
			i = 1;
		}
		for(; i < seq.size(); i++){
			Node *new_node = new Node(seq[i]);
			temp->next = new_node;
			temp = new_node;
		}
		temp->next = seq_next;
		delete del_node;
		return *this;
	}
};

int main(int argc, char const *argv[]){
	Sequence s;
	s.insert(3).insert(10).insert(2).insert(12).print().replace(12, {20,30,40}).print();
	return 0;
}

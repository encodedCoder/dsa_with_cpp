#include <iostream>
#include <unordered_map>
using namespace std;
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Node {
public:
    int val;
    Node* next;
    Node* random;
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr) return head;
        
        unordered_map<Node*,int> nodeAddAndNum;
        Node* temp = head;
        int nodeNumber = 0;
        while(temp){
            nodeAddAndNum[temp] = nodeNumber++;
            temp = temp->next;
        }
        
        unordered_map<int,int> randNodeNumber;
        temp = head;
        nodeNumber = 0;
        while(temp){
            int randNodeNum = -1;
            if(temp->random){randNodeNum = nodeAddAndNum[temp->random];}
            randNodeNumber[nodeNumber++] = randNodeNum;
            temp = temp->next;
        }
        
        unordered_map<int,Node*> nodeNumAndAdd;
        nodeNumber = 0;
        temp = head;
        Node* newHead, *currNode;
        currNode = newHead = new Node(temp->val);
        nodeNumAndAdd[nodeNumber++] = newHead;
        temp = temp->next;
        while(temp){
            currNode->next = new Node(temp->val);
            currNode = currNode->next;
            temp = temp->next;
        }
        
        temp = newHead;
        nodeNumber = 0;
        while(temp){
            if(randNodeNumber[nodeNumber] == -1){temp->random = nullptr;}
            else{temp->random = nodeNumAndAdd[randNodeNumber[nodeNumber]];}
            nodeNumber++;
            temp = temp->next;
        }
        
        return newHead;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

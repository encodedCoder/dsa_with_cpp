#include <iostream>
#include <vector>
using namespace std;

class MyCircularDeque {
    vector<int> array;
    int qSize, head, tail;
public:
    MyCircularDeque(int k) {
        head = tail = -1;
        array.resize(k);
        qSize = array.size();
    }

    bool insertFront(int value) {
        if(isFull()){
            return false;
        }
        if(isEmpty()){
            head = tail = 0;
            array[head] = value;
        }
        else if(head == 0){
            head = qSize-1;
            array[head] = value;
        }
        else{
            array[--head] = value;
        }
        return true;
    }

    bool insertLast(int value) {
        if(isFull()){
            return false;
        }
        if(isEmpty()){
            head = tail = 0;
            array[tail] = value;
        }
        else{
            tail = (tail+1) % qSize;
            array[tail] = value;
        }
        return true;
    }

    bool deleteFront() {
        if(isEmpty()){
            return false;
        }
        if(head == tail){
            head = tail = -1;
        }
        else{
            head = (head+1) % qSize;
        }
        return true;
    }

    bool deleteLast() {
        if(isEmpty()){
            return false;
        }
        if(head == tail){
            head = tail = -1;
        }
        else if(tail == 0){
            tail = qSize-1;
        }
        else{
            tail--;
        }
        return true;
    }

    int getFront() {
        if(isEmpty()){
            return -1;
        }
        return array[head];
    }

    int getRear() {
        if(isEmpty()){
            return -1;
        }
        return array[tail];
    }

    bool isEmpty() {
        return head == -1;
    }

    bool isFull() {
        return (tail+1)%qSize == head;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */

int main(int argc, char const *argv[]){
    MyCircularDeque dq(8);
    cout << dq.insertFront(5) << endl;
    cout << dq.getFront() << endl;
    cout << dq.isEmpty() << endl;
    cout << dq.deleteFront() << endl;
    cout << dq.insertLast(3) << endl;
    cout << dq.getRear() << endl;
    cout << dq.insertLast(7) << endl;
    cout << dq.insertFront(7) << endl;
    cout << dq.deleteLast() << endl;
    cout << dq.insertLast(4) << endl;
    cout << dq.isEmpty() << endl;
    return 0;
}
/**
["MyCircularDeque","insertLast","insertLast","insertFront","insertFront","getRear","isFull","deleteLast","insertFront","getFront"]
[[3],[1],[2],[3],[4],[],[],[],[4],[]]
["MyCircularDeque","insertFront","getFront","isEmpty","deleteFront","insertLast","getRear","insertLast","insertFront","deleteLast","insertLast","isEmpty"]
[[8],[5],[],[],[],[3],[],[7],[7],[],[4],[]]
["MyCircularDeque","insertFront","deleteLast","getRear","getFront","getFront","deleteFront","insertFront","insertLast","insertFront","getFront","insertFront"]
[[4],[9],[],[],[],[],[],[6],[5],[9],[],[6]]
 */

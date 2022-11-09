#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class MaxHeap{
private:
    int length;
    vector<int> heap;
public:
    MaxHeap(){
        this->length = 0;
    }
    void push(int val){
        if (this->length == 0){
            this->heap.push_back(val);
            this->length++;
            return;
        }

        this->heap.push_back(val);
        this->length++;
        int child = this->length-1;
        while (child > 0){
            int parent = ceil(child/2.0)-1;
            // cout << "Parent: " << parent <<"," << "child: " << child << endl; 
            if (this->heap[parent] < this->heap[child]) {
                swap(this->heap[parent], this->heap[child]);
                child = parent;
            } else {
                break;
            }
        }
    }
    void pop(){
        if (this->length == 0) {
            return;
        } else if (this->length == 1) {
            this->length--;
            return;
        } else {
            swap(this->heap[0], this->heap[this->length - 1]);
            this->length--;
            max_heapify(0);
        }
    }
    int top(){
        return this->heap.front();
    }
    void print(){
        for(int i=0; i < this->length; ++i) {
            cout << this->heap[i] << " ";
        } cout << endl;
    }
    void max_heapify(int index) {
        int largest = index;
        int left    = 2*index + 1;
        int right   = 2*index + 2;

        if (left < this->length and this->heap[largest] < this->heap[left]) {
            largest = left;
        }

        if (right < this->length and this->heap[largest] < this->heap[right]) {
            largest = right;
        }

        if (index != largest) {
            swap(this->heap[index], this->heap[largest]);
            max_heapify(largest);
        } 

        return;
    }
    bool empty(){
        return this->length == 0;
    }
    int size(){
        return this->length;
    }
};

int main(int argc, char const *argv[])
{
    MaxHeap max_heap;
    max_heap.push(5);
    max_heap.push(1);
    max_heap.push(8);
    max_heap.push(2);
    max_heap.push(4);
    max_heap.push(9);

    max_heap.print();

    max_heap.pop();
    max_heap.print();

    cout << "Top: " <<max_heap.top() << endl;
    cout << "Size: " <<max_heap.size() << endl;

    while (not max_heap.empty()) {
        cout << max_heap.top() << " ";
        max_heap.pop();
    } cout << endl;

    return 0;
}
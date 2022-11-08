#include<iostream>
#include<algorithm>
#include "sort_suresh.h"
using namespace std;

void printArray(int *nums, int numsLength);
bool compare(int a, int b);

int main(int argc, char const *argv[])
{
    int nums[] = {5,3,9,7,2,8,1};
    int numsLength = end(nums) - begin(nums);

    printArray(nums, numsLength);

    bubble_sort(nums, numsLength);

    printArray(nums, numsLength);
    return 0;
}

void printArray(int *nums, int numsLength){
    for (int i = 0; i < numsLength; cout << nums[i++] << " ");
    cout << endl;
}

bool compare(int a, int b){
    return a < b;
}
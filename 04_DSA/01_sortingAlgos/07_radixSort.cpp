#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int nums[], int numsLength){
    for(int i = 0; i < numsLength; ++i){
        cout << nums[i] << " ";
    }
    cout << endl;
}

void countingSort(int nums[], int numsLength, int place) {
    // Do the eleCount
    int eleCount[10] = {};
    for(int i = 0; i < numsLength; ++i){
        int radix = (nums[i] / place) % 10;
        eleCount[radix]++;
    }

    // do the cummulative countingSort
    for (int i = 1; i < 10; ++i){
        eleCount[i] += eleCount[i-1];
    }

    // do the actual sorting
    int result[numsLength] = {0};
    for (int i = numsLength-1; i >= 0; --i){
        int radix = (nums[i]/place) % 10;
        result[eleCount[radix]-1] = nums[i];
        eleCount[radix]--;
    }

    // printArray(result, numsLength);
    // copy result to original array
    for (int i = 0; i < numsLength; ++i) {
        nums[i] = result[i];
    }
}

void radixSort(int nums[], int numsLength){
    int maxElement = *max_element(nums, nums + numsLength);
    int place = 1;
    while (maxElement){
        maxElement /= place;
        countingSort(nums, numsLength, place);
        place *= 10;
    }
}

int main(int argc, char const *argv[])
{
    int nums[] = {329, 457, 657, 389, 436, 720, 355};
    int numsLength = sizeof(nums)/sizeof(nums[0]);
    printArray(nums, numsLength);

    radixSort(nums, numsLength);
    printArray(nums, numsLength);
    return 0;
}
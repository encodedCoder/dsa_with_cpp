class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    	int prevEle = arr[arr.size()-1];
    	arr[arr.size()-1] = -1; 
    	int currEle = 0;
        for (int i = arr.size()-2; i >= 0; --i) {
        	currEle = arr[i];
        	arr[i] = max(arr[i+1], prevEle);
        	prevEle = currEle;
        }
        return arr;
    }
};
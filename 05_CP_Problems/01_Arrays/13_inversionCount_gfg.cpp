#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag,
	tree_order_statistics_node_update>
	AdvanceOrderedSet;

class Solution{
public:
	long long int inversionCount(long long arr[], long long n){
		AdvanceOrderedSet st;
		long long inversions = 0;
		for(int i = n-1; i >= 0; i--){
			st.insert({arr[i], i}); 
			inversions += st.order_of_key({arr[i], i}); 
		}
		for(int i = 0; i < st.size(); i++)
			cout << i << "-->" << st.find_by_order(i)->first << " "<< st.find_by_order(i)->second << endl;
		return inversions;
	}
};

int main() {
	// long long n = 5, arr[] = {2, 4, 1, 3, 5};
	// long long n = 5, arr[] = {2, 3, 4, 5, 6};
	// long long n = 3, arr[] = {10, 10, 10};
	// long long n = 4, arr[] = {11, 10, 10, 10};
	// long long n = 5, arr[] = {11, 10, 10, 10, 5};
	long long n = 7, arr[] = {11, 10, 10, 5, 10, 5, 2};
	// long long n = 5, arr[] = {10, 11, 10, 10, 10};
	// long long n = 42, arr[] = {468, 335, 1, 170, 225, 479, 359, 463, 465, 206, 146, 282, 328, 462, 492, 496, 443, 328, 437, 392, 105, 403, 154, 293, 383, 422, 217, 219, 396, 448, 227, 272, 39, 370, 413, 168, 300, 36, 395, 204, 312, 323};
	// long long n = 67, arr[] = {25979495799463, 31266, 2, 2, 842341, 1245315, 57875348314943137, 23, 1, 12832174, 92697, 4, 6191678497132552, 3, 9146, 8437, 15, 319622733, 914255, 33, 7187799566668456, 735, 953356, 244872628794848225, 36371, 4, 6512264339382, 9977, 3352, 5971979332897, 63116543, 787, 1815428, 48742, 46798125426673163, 84418647, 63961, 9383259746593224, 6, 9, 22437289, 28772226, 19235118767838884, 326558623, 1, 58875636, 39978321524538178, 5643, 4285, 2, 389537538, 2385, 716427374, 179, 56, 43651, 89827818, 875854, 3, 194163846, 6, 9742, 7, 18965, 958733737, 25484, 8};

	Solution obj;
	cout << obj.inversionCount(arr, n) << endl;
	return 0;
}
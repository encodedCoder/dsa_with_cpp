#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Job { 
	int id;	 // Job Id 
	int dead; // Deadline of job 
	int profit; // Profit if job is over before or on deadline 
}; 

class Solution {
public:
	vector<int> JobScheduling(Job jobs[], int n){ 
		auto compare = [](Job& j1, Job& j2){return j1.profit > j2.profit;};
		sort(jobs, jobs+n, compare);

		// for(int i = 0; i < n; i++){
		// 	printf("(%d, %d, %d) ", jobs[i].id, jobs[i].dead, jobs[i].profit);
		// } cout << endl;

		auto compare2 = [](Job& j1, Job& j2){return j1.dead < j2.dead;};
		Job* maxDeadJob = max_element(jobs, jobs+n, compare2);

		bool *deadlines = new bool[maxDeadJob->dead]{false};
		// for (int i = 0; i < maxDeadJob->dead; i++) cout << deadlines[i] << " "; cout << endl;
		int profit = 0; int jobsCount = 0;
		for (int i = 0; i < n; i++){
			int currProfit = jobs[i].profit;
			int j = jobs[i].dead;
			for (; j >= 0 and deadlines[j]; j--);
			if (j <= 0) continue;
			deadlines[j] = true;
			profit += currProfit;
			jobsCount++;
		}
		return {jobsCount, profit};
	} 
};

int main() { 
	// int n = 4; Job jobs[] = {{1,4,20},{2,1,10},{3,1,40},{4,1,30}};
	int n = 5; Job jobs[] = {{1,2,100},{2,1,19},{3,2,27},{4,1,25},{5,1,15}};

	Solution obj;
	for (auto& ele : obj.JobScheduling(jobs, n)) cout << ele << " "; cout << endl;
	
	return 0; 
}
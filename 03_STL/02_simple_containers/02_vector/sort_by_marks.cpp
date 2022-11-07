#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int rolls[] = {101,108,103,105};
	int marks[] = {70,80,40,90};

	vector<pair<int,int>> roll_marks;
	for(int i = 0; i < 4; i++){
		roll_marks.push_back({rolls[i], marks[i]});
	}

	for(const auto &ele : roll_marks){
		cout << ele.first << ": " << ele.second << endl;
	}

	auto compare = [&](pair<int,int> p1, pair<int,int> p2){return p1.second > p2.second;};
	// sort(roll_marks.begin(), roll_marks.end(), compare);
	sort(roll_marks.begin(), roll_marks.end(), greater<pair<int,int>>());

	cout << endl;
	for(const auto &ele : roll_marks){
		cout << ele.first << ": " << ele.second << endl;
	}

	return 0;
}

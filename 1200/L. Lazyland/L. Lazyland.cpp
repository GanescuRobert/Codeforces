#include <iostream>
#include <algorithm>
using namespace std;

struct idle {
	int chosenJob;
	unsigned long long timeChange;

	bool operator<(const idle& tempIdle) {
		if (timeChange < tempIdle.timeChange)
			return true;
		return false;
	}
};

int job[100005];
int main()
{
	int numberIdle, numberJobs;
	cin >> numberIdle >> numberJobs;
	idle a[100005];

	for (int i = 0; i < numberIdle; i++) {
		cin >> a[i].chosenJob;
		job[a[i].chosenJob] ++;
	}

	int switchJob = 0;
	for (int i = 1; i <= numberJobs; i++) {
		if (job[i] == 0)
			switchJob++;
		if (i == numberJobs)
			if (switchJob == 0) {
				cout << "0";
				return 0;
			}
	}

	for (int i = 0; i < numberIdle; i++)
		cin >> a[i].timeChange;

	sort(a, a + numberIdle);

	unsigned long long totalTime = 0;
	for (int i = 0; i < numberIdle; i++) {
		if (job[a[i].chosenJob] > 1) {
			job[a[i].chosenJob]--;
			totalTime += a[i].timeChange;
			switchJob--;
		}
		if (switchJob == 0)
			break;
	}
	cout << totalTime;
}
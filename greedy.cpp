#include<iostream>
using namespace std;

 /* // max no of acticity

int maxActivities(vector<int> start, vector<int> end) {

    // A0 select
    cout << "selecting A0\n";

    int count = 1;
    int currEndTime = end[0];

    for (int i = 1; i < start.size(); i++) {

        if (start[i] >= currEndTime) { // non-overlapping
            cout << "selecting A" << i << endl;

            count++;
            currEndTime = end[i];
        }
    }

    return count;
}

int main() {

    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};

    cout << "Maximum activities = "
         << maxActivities(start, end) << endl;

    return 0;
}
*/

 /*   // pair in c++ 

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}

int main()
{
    vector<int> start = {0, 1, 2};
    vector<int> end = {9, 2, 4};

    vector<pair<int, int>> activity(3, make_pair(0, 0));

    activity[0] = make_pair(start[0], end[0]);
    activity[1] = make_pair(start[1], end[1]);
    activity[2] = make_pair(start[2], end[2]);

    for (int i = 0; i < activity.size(); i++) {
        cout << "A" << i << ": "
             << activity[i].first << ","
             << activity[i].second << endl;
    }

    sort(activity.begin(), activity.end(), compare);

    cout << "\n---sorted---\n";

    for (int i = 0; i < activity.size(); i++) {
        cout << "A" << i << ": "
             << activity[i].first << ","
             << activity[i].second << endl;
    }

    return 0;
}
    */

    // fractional knapsack
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<double, int> p1, pair<double, int> p2) {
    return p1.first > p2.first;
}

int fractionalKnapsack(vector<int> val, vector<int> wt, int W) {
    int n = val.size();

    vector<pair<double, int>> ratio(n, make_pair(0.0, 0));
    // pair(ratio, idx) → (double, int)

    for(int i = 0; i < n; i++) {
        double r = val[i] / (double)wt[i];
        ratio[i] = make_pair(r, i);
    }

    sort(ratio.begin(), ratio.end(), compare);

    int ans = 0;

    for(int i = 0; i < n; i++) {
        int idx = ratio[i].second;

        if(wt[idx] <= W) {
            ans += val[idx];
            W -= wt[idx];
        }
        else {
            ans += ratio[i].first * W;
            W = 0;
            break;
        }
    }

    return ans;
}

int main() {
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};

    int W = 50;

    cout << fractionalKnapsack(val, wt, W) << endl;

    return 0;
}
    
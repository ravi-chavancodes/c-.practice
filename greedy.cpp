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

 /*  // pair in c++ 

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

 /*  // fractional knapsack

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

    cout << "max value =" <<ans<<endl;
    return ans;
}

int main() {
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};

    int W = 50;

    cout << fractionalKnapsack(val, wt, W) << endl;

    return 0;
}
    */

 /*   // min absolute diff pair

int main() {
    vector<int> A = {4, 1, 8};
    vector<int> B = {12, 3, 6, 5};

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int absDiff = 0;

    for (int i = 0; i < A.size(); i++) {
        absDiff += abs(A[i] - B[i]);
    }

    cout << "MIN abs diff = " << absDiff;

    return 0;
}
    */

/*   // max length chain of pair

bool compare(pair<int, int> p1, pair<int, int> p2) {
    // ascending
    return p1.second < p2.second;
}

int maxChainLength(vector<pair<int, int>> pairs) {
    int n = pairs.size();

    sort(pairs.begin(), pairs.end(), compare);

    int ans = 1;
    int currEnd = pairs[0].second;

    for (int i = 1; i < n; i++) {
        if (pairs[i].first > currEnd) {
            // non-overlapping
            ans++;
            currEnd = pairs[i].second;
        }
    }

    cout << "max chain length = " << ans << endl;
    return ans;
}

int main() {
    int n = 5;

    vector<pair<int, int>> pairs(n, make_pair(0, 0));

    pairs[0] = make_pair(5, 24);
    pairs[1] = make_pair(39, 60);
    pairs[2] = make_pair(5, 28);
    pairs[3] = make_pair(27, 40);
    pairs[4] = make_pair(50, 90);

    maxChainLength(pairs);

    return 0;
}
    */

 /*  // indian coin

int getMinChange(vector<int> coins, int V) {
    int ans = 0;
    int n = coins.size();

    for (int i = n - 1; i >= 0 && V > 0; i--) {
        if (V >= coins[i]) {
            ans += V / coins[i];
            V = V % coins[i];
        }
    }

    cout << "min coins for change = " << ans << endl;
    return ans;
}

int main() {
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000};

    int V = 590;

    getMinChange(coins, V);

    return 0;
}
    */

 /*   // job sequence problem

bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second > p2.second;
}

int maxProfit(vector<pair<int, int>> jobs) {
    sort(jobs.begin(), jobs.end(), compare);

    // first → deadline; second → profit
    int profit = jobs[0].second;
    int safeDeadline = 2;

    for (int i = 1; i < jobs.size(); i++) {
        if (jobs[i].first >= safeDeadline) {
            profit += jobs[i].second;
            safeDeadline++;
        }
    }

    cout << "max profit from jobs: " << profit << endl;
    return profit;
}

int main() {
    int n = 4;

    vector<pair<int, int>> jobs(n, make_pair(0, 0));

    jobs[0] = make_pair(4, 20);
    jobs[1] = make_pair(1, 10);
    jobs[2] = make_pair(1, 40);
    jobs[3] = make_pair(1, 30);

    maxProfit(jobs);

    return 0;
}
    */

    // job sequence variation
    
class Job {
public:
    int idx;
    int deadline;
    int profit;

    Job(int idx, int deadline, int profit) {
        this->idx = idx;
        this->deadline = deadline;
        this->profit = profit;
    }
};

int maxProfit(vector<pair<int, int>> pairs) {
    int n = pairs.size();

    vector<Job> jobs;

    for (int i = 0; i < n; i++) {
        jobs.emplace_back(i, pairs[i].first, pairs[i].second);
    }

    sort(jobs.begin(), jobs.end(), [](Job &a, Job &b) {
        return a.profit > b.profit;
    });

    cout << "Selecting Job " << jobs[0].idx << endl;

    int profit = jobs[0].profit;
    int safeDeadline = 2;

    for (int i = 1; i < n; i++) {
        if (jobs[i].deadline >= safeDeadline) {
            cout << "Selecting Job " << jobs[i].idx << endl;
            profit += jobs[i].profit;
            safeDeadline++;
        }
    }

    cout << "Max Profit = " << profit << endl;

    return profit;
}

int main() {
    int n = 4;

    vector<pair<int, int>> jobs(n, make_pair(0, 0));

    jobs[0] = make_pair(4, 20);
    jobs[1] = make_pair(1, 10);
    jobs[2] = make_pair(1, 40);
    jobs[3] = make_pair(1, 30);

    maxProfit(jobs);

    return 0;
}
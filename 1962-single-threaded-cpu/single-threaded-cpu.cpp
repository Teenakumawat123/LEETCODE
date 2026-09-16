class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n = tasks.size();

        // {enqueueTime, processingTime, originalIndex}
        vector<tuple<long long, long long, int>> jobs;

        for (int i = 0; i < n; i++) {
            jobs.push_back({tasks[i][0], tasks[i][1], i});
        }

        sort(jobs.begin(), jobs.end());

        // {processingTime, originalIndex}
        priority_queue<
            pair<long long, int>,
            vector<pair<long long, int>>,
            greater<pair<long long, int>>
        > pq;

        vector<int> ans;
        long long time = 0;
        int i = 0;

        while (i < n || !pq.empty()) {

            // If no task is available, jump to next task's enqueue time
            if (pq.empty() && time < get<0>(jobs[i])) {
                time = get<0>(jobs[i]);
            }

            // Add all available tasks
            while (i < n && get<0>(jobs[i]) <= time) {
                pq.push({get<1>(jobs[i]), get<2>(jobs[i])});
                i++;
            }

            // Process task with minimum processing time
            auto [processingTime, index] = pq.top();
            pq.pop();

            time += processingTime;
            ans.push_back(index);
        }

        return ans;
    }
};
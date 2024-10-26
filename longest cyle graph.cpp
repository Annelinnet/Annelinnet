class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int Len = -1;
        int time = 1;
        vector<int> node(edges.size(), 0);

        for (int current = 0; current < edges.size(); ++current) {
            if (node[current] > 0)
                continue;
            const int start = time;
            int u = current;
            while (u != -1 && node[u] == 0) {
                node[u] = time++;
                u = edges[u];
            }
            if (u != -1 && node[u] >= start)
                Len = max(Len, time - node[u]);
        }
        return Len;
    }
};
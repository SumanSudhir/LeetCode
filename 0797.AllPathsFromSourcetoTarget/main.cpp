class Solution {
public:

    vector<int> tmp;
    vector<vector<int>> out;
    int target;
    void dfs(vector<vector<int>>& graph, int cur_node=0){

        tmp.push_back(cur_node);
        if(cur_node==target) out.push_back(tmp);

        else for(int node : graph[cur_node]){
            dfs(graph,node);
        }

        tmp.pop_back();
    }


    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        target = graph.size()-1;
        dfs(graph);

        return out;
    }
};

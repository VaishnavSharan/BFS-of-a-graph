
#include <iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int>q;
        vector<int>ans;
        //it is very important to push false else teh deafult array created will push the garbage value
        bool check[V]={false};
        q.push(0);
        check[0]=true;
        while(!q.empty())
        {
             int temp=q.front();
            q.pop();
            ans.push_back(temp);
            for(auto a:adj[temp]){
                if(!check[a]){
                    q.push(a);
                    check[a]=true;
                }
            }
            
        }
        return ans;
    }
};
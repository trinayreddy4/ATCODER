#include <iostream>
#include <vector>
using namespace std;

int ans(int N, int M, const vector<pair<int, int>>& info) {
    vector<vector<int>> graph(N + 1);
    vector<int> in_degrees(N + 1, 0);

    for (int i = 0; i < M; i++) {
        int A = info[i].first;
        int B = info[i].second;
        graph[A].push_back(B);
        in_degrees[B]++;
    }
    vector<int> potential_strongest_programmers;
    for (int i = 1; i <= N; i++) {
        if (in_degrees[i] == 0) {
            potential_strongest_programmers.push_back(i);
        }
    }

    if (potential_strongest_programmers.size() == 1) {
        return potential_strongest_programmers[0];
    } else {
        return -1;
    }
}

int main() {
    int n,m;
    cin>>n>>m;
    vector<pair<int, int>> info;
    for(int i=0;i<m;i++)
    {
    	int temp1,temp2;
    	cin>>temp1;
    	cin>>temp2;
    	pair<int,int>temp3;
    	temp3.first=temp1;
    	temp3.second=temp2;
    	info.push_back(temp3);
	}
    cout<<ans(n,m,info)<< endl;
    return 0;
}


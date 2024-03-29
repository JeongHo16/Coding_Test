//https://www.acmicpc.net/problem/15649
//DFS, Back Tracking

#include <iostream>

using namespace std;

int n, m;
int arr[9];
bool visited[9];

void dfs(int depth){
    if (depth==m){
        for (int i=0; i<m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i=1; i<n+1; i++){
        if(!visited[i]){
            visited[i] = true;
            arr[depth] = i;
            dfs(depth+1);
            visited[i] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    dfs(0);
}
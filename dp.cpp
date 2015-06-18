#include <iostream>
using namespace std;

int main(){
int N = 5;
string A,B;
int dp[N+1][N+1];

for (int i = 0; i <= N; ++i)

  dp[0][i] = dp[i][0] = 0;

for (int i = 1; i <= N; ++i)

  for (int j = 1; j <= N; ++j) {

    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);

    if (A[i-1] == B[j-1])

      dp[i][j] = max(dp[i][j], dp[i-1][j-1]+1);

  }


int answer = dp[N][N];

cout << answer << endl;
return 0;
}
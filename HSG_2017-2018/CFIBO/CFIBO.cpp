#include <bits/stdc++.h>

using namespace std;

int main()
{

  freopen("CFIBO.inp","r",stdin);
  freopen("CFIBO.out","w",stdout);

  long long A,B;
  int ans = 0;
  cin>>A>>B;
  vector<int> fibo;
  fibo.resize(B);
  fibo[0] = 0;
  fibo[1] = 1;
  for(int i = 2;i < B; i++){

    fibo[i] = fibo[i - 1] + fibo[i - 2];


  }
  for(int i = 0;i < B;i++){

    if(fibo[i] >= A && fibo[i] <= B){

        ans++;

    }

  }
  cout<<ans;


}

#include<bits/stdc++.h>
using namespace std;
int  main()
{

  int t;
  cin>>t;
  while(t--){
    int n,x;
    cin>>n>>x;
    int ans;
    if(n==1 or n==2){
        ans=1;
    }else{

      int temp = ceil((float)(n-2)/(float)x);
      temp++;
      ans = temp;

    }
    cout<<ans<<endl;
  }
}

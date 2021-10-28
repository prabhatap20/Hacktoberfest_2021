#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main(){
    int n ,a, q , y;
    vector<int>v;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
          cin>>a;
          v.push_back(a);
    }
    cin>>q;
    for(int i = 0 ; i < q ; i++){
        cin>>y;
   
    auto lb  = lower_bound(v.begin() ,v.end() , y);
    int index = (lb - v.begin());

    if(y == v[index]){
        cout<<"Yes"<<" "<<index +1<<endl;
    }
    else{
        cout<<"No"<<" "<<index+1<<endl;
    }
    }
    return 0;
}


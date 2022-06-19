#include <bits/stdc++.h>

using namespace std;
// #define long int

signed main() {
	
	int m, n; cin >> m >> n;
	
	vector<int> v(n);
	   
	for(int i = 0; i < n; i++){
	    cin >> v[i];
	}   
	
	sort(v.begin(), v.end());
	
	int ct(0);
	
	while(m > 0){
	    m -= v[ct];
	    if(m >= 0) ct++;
    
	}
	
	cout << ct;
	
	   
	return 0;
}
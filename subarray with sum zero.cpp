#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	//this code prints the count of all subarrays whose sum is zero
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int i;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int ans=0,cur_sum=0;
	    unordered_map<int,int> m;
	    for(i=0;i<n;i++){
	        cur_sum+=a[i];
	        if(cur_sum==0){
	            ans++;
	        }
	        if(m.find(cur_sum)!=m.end()){
	            ans+=m[cur_sum];
	        }
	        
	        m[cur_sum]++;
	        
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}

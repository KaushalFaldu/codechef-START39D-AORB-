#include <iostream>
using namespace std;

void solve(){
    int a,b;cin>>a>>b;int x,Xaa,y,Yaa;x=500-(a*2);Xaa=1000-(b*4);
    y=500-((a+b)*2);Yaa=1000-((b+a)*4);
    int peeda=x+Yaa;int laddu=Xaa+y;
    int catt=max(peeda,laddu);
    cout<<catt<<endl;
}

int main() {
    int tin;
	cin>>tin;
	while(tin--){
	    solve();
	}
	return 0;
}
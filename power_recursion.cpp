#include<bits/stdc++.h>
using namespace std; 

int power_fun(int x,int y){
	int ans = x;
	if(y == 0){
		return 1;
	}
	ans *= power_fun(x,y-1);
	return ans ;
}
int fast_power(int a, int b){
	if(b == 0)
		return 1;
	int ans = fast_power(a,b/2);
	ans *= ans;
	if(b&1)
		return a*ans;
	return ans;
}
int main(){
	int x = 2; int y = 4;
	int t = power_fun(x,y);
	cout << t << endl;
}
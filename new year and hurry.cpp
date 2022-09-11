#include <iostream>
using namespace std;
int main(){

int n, k, total_time=240, res=5,count=0;
cin>>n>>k;

while(total_time>=k){

    total_time = total_time - res;
	count++;
	res=res+5;

}

if(count>n){
	count=n+1;
}
cout<<count-1;




}

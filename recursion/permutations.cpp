#include<iostream>

using namespace std;

void generatePermuations(string s, int i){
	if(i==s.size()){
		cout<< s<<endl;
		return;
	}
	int curr = i;
	for(int j=i;j<s.size();j++){
		swap(s[curr], s[j]);
		generatePermuations(s, i+1);
		swap(s[curr], s[j]);
	}
}

void permutationsInString(string s){

	generatePermuations(s,0);

}

int main (){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin>>s;

	permutationsInString(s);

	return 0;
}

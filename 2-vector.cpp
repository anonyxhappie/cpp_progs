//https://www.topcoder.com/community/data-science/data-science-tutorials/power-up-c-with-the-standard-template-library-part-1/#containers
#include <bits/stdc++.h>
using namespace std;
template <typename T1, typename T2> struct mpair{
	T1 f;
	T2 s;
};
void mf(vector<int>&);
int main(){
	//vector<int> v(10);
	//v1[0]
	vector<int> v1;
	v1.push_back(3);
	//vector<int> v2(v1);
	vector<int> v2 = v1;
	cout << v2.back();
	//vector<string> vs(3, "hello"); //hello-default at each position
	//v.resize(20);
	mf(v1);
	mpair<string, mpair< mpair<int, int>, char> > P;
	P.f = "Hell Yeah!!";
	P.s.f.f = 3;
	P.s.f.s = 8;
	P.s.s = 'd';
	cout << P.f << " " << P.s.f.f << " " << P.s.f.s << " " << P.s.s << endl;
	return 0;
}

void mf(vector<int>& v){
	v.pop_back();
}


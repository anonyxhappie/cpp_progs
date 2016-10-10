#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

template <typename p>
p fnameiemax(p i, p j){
	return i > j ? i : j;
}

template <class POP> 
class FPOP{
		vector<POP> items;
	public:
		void pushv(POP);
		void popv();
		POP topv();
		bool empty() const{
			return items.empty();
		}
};
template <class POP> 
void FPOP<POP>::pushv(POP item){
	items.push_back(item);
}
template <class POP> 
void FPOP<POP>::popv(){
	if(items.empty()){
		throw out_of_range("FPOP<>::popv(): empty FPOP.");
	}
	items.pop_back();
}
template <class POP> 
POP FPOP<POP>::topv(){
	if(items.empty()){
		throw out_of_range("FPOP<>::topv(): empty FPOP.");
	}
	return items.back();
}

int main(){
    cout << fnameiemax(3, 45) << endl;
	FPOP<int> intFpop;
    try{
		intFpop.pushv(5);
		cout << intFpop.topv() << endl;
		intFpop.pushv(5);
		cout << intFpop.topv() << endl;
		intFpop.popv();
		cout << "Element poped" << endl;
	}catch(exception const& e){
		cerr << "Exception : " << e.what() << endl;
	}
	return 0;
}

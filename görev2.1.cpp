#include <iostream>
#include <vector>

using namespace std;

double mean(vector<double> vect){
	double sum=0 ;
	double eleman=0 ;
	
	for (int i=0 ; i<vect.size(); ++i){
		sum += vect.at(i);
		eleman += 1;	
	}
	return sum / eleman;
	
}

double stand(vector<double> v2){
	int sum = 0;
	int eleman = 0;
	for (int i=0 ; i<v2.size(); ++i){
		sum += v2.at(i);
		eleman += 1;	
	}
	double mean = sum / eleman;
	
	double ssum = 0;
	for (int i=0 ; i<v2.size(); ++i){
		ssum += (mean-v2.at(i))*(mean-v2.at(i)); 
		
	}
	return ssum / eleman;
	
}


int main(){
	
	vector<double> v{1,2,3,4,5};
	cout << mean(v) << "\n";
	cout << stand(v);


	
}

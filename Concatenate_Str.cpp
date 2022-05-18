#include<iostream>
using namespace std;
int main() {
	string s1, s2, result;
	cout <<"Enter string 1:	";
	getline(cin, s1);
	cout <<"Enter string 2:	";
	getline(cin, s2);
	result=s1 +" "+s2;
	cout << "Result string=	"<<result;
	return 0;
}

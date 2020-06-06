#include <bits/stdc++.h>
#define LL long long
#define INF 2e5
using namespace std;

map<int,string> s;

string digit(int x){
	switch(x){
		case 0: return "";
		case 1: return "one";
		case 2: return "two";
		case 3: return "three";
		case 4: return "four";
		case 5: return "five";
		case 6: return "six";
		case 7: return "seven";
		case 8: return "eight";
		case 9: return "nine";
	}
}

string tens(int x){
	switch(x){
		case 10: return "ten";
		case 11: return "eleven";
		case 12: return "twelve";
		case 13: return "thirteen";
		case 14: return "fourteen";
		case 15: return "fifteen";
		case 16: return "sixteen";
		case 17: return "seventeen";
		case 18: return "eighteen";
		case 19: return "nineteen";
		case 20: return "twenty";
		case 30: return "thirty";
		case 40: return "forty";
		case 50: return "fifty";
		case 60: return "sixty";
		case 70: return "seventy";
		case 80: return "eighty";
		case 90: return "ninety";
	}
}


string name(int x){
	if (x==0) return "";
	
	if (x>=100)
		return digit(x/100)+"hundred"+name(x%100);
	else if (x>=10) {
		if (x<20) return tens(x);
		else if (x%10==0) return tens(x);
		else return tens(x-x%10)+name(x%10);
	}
	else return digit(x);
}

string parse(int x){
	if (x>=(int)1e9){
		return name(x/(int)1e9)+"billion"+parse(x%(int)1e9);
	}
	if (x>=(int)1e6){
		return name(x/(int)1e6)+"million"+parse(x%(int)1e6);
	}
	if (x>=(int)1e3){
		return name(x/(int)1e3)+"thousand"+parse(x%(int)1e3);
	}
	return name(x);
} 

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n!=4){
//    	cout << parse(n) << endl;
      	cout << (n=parse(n).length()) << endl;
    }

    return 0;
}

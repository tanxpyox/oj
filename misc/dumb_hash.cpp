#include <iostream>
#include <string>
#include <cstring>
#define INF 2e9
using namespace std;

string hash_tab[26];
int status[26]; // -1 = tombstone; 0 = not occupied; 1 = occupied

int shash(string a){
	return (int) a[0];
}

int find(string a){
	for (int i=0; i<26; i++){
		int index = (shash(a) + i) % 26;
		if (status[index] == 1) {
			if (hash_tab[index] == a) return index; // found
			else continue; 
		} else if (status[index] == 0) {
			return -index-1; // not found and free at index
		} else {
			continue;
		}
	}
	
	return -INF; // full and not found
}

void del(string a){
	int temp = find(a);
	if (temp < 0) return;
	else status[temp] = -1;
}

void ins(string a){
	int temp = find(a);
	if (temp > 0 || temp == -INF) return;
	else {
		status[-temp-1] = 1;
		hash_tab[-temp-1] = a;
	}
}

int main () {
	memset(status, 0, sizeof(status));
	
	string word;
	while (cin >> word) {
		if (word[0] == 'A') ins(&word[1]);
		else if (word[0] == 'D') del(&word[1]);
	}
	
	for(int i=0; i<26; i++){
		if (status[i] == 1) {
			cout << hash_tab[i];
			cout << status[i];
			(i == 25) ? cout << endl : cout << " " ;	
		}
	}
}

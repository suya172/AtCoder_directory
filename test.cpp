#include <iostream>
#include <vector>
using namespace std;

const int N = 100;

vector<bool> is_prime(N+1,true);

void f() {
	is_prime[0] = false;
	is_prime[1] = false;
	for(int i = 2; i * i <= N; i++){
		if(is_prime[i]){
			for(int j = 2; i * j <= N; j++) is_prime[i * j] = false;
		}
	}
}

int main() {
	f();
	for(int i = 2; i <= 100;i++)if(is_prime[i])cout << i << '\n';
	return 0;
}

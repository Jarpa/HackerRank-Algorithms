#include <iostream>
using namespace std;

int height(int n) {
	int height = 0;
	for(int i = 0; i <= n; ++i)
		if(i%2)
			height += height;
		else
			height += 1;

    return height;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}


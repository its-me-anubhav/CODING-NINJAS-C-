#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
       int n;
    cin >>n;
    int i = 1;
    while (i <= n) {
        int space = 1;
        while( space <= n - i) {
            cout << ' ';
            space = space + 1;
         } 
         int star = 1;
         int k = n - i - 1;

            while ( k <= i ) {
            int k = n - i - 1;
            cout << '*';
            star = star + 1;
        }
        int kh = i - star;
        while(kh >1) {
        	cout <<'*';
        	kh = kh - 1;
		}
              cout << endl;
        i = i + 1;
    }
    
}


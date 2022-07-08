#include<stdio.h>
int main () {
	int i,n;
	int t1 = 0, t2 = 1;
	int nextTerm = t1 + t2;	
	printf("Enter the number of terms");
	scanf("%d", &n);
	// print the first two terms t1 and t2
	printf("Fibonacci series:%d,%d",t1,t2);
	// print 3rd to next term
	for(i=3;i<=n;++i) {
		printf("%d",nextTerm);
		t1=t2;
		t2=nextTerm;
		nextTerm=t1+t2;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main(){
				  // 辗转相除法
	int a,b,c;    // a/b   (a b)= (b c)   c为余数
	c = 1;
	cin >> a >> b ;

	while(c != 0){   // 若a<b 通过这个while， a%b后a==c ,结果是ab会调换位置

		c = a%b;   
		a = b;
		b = c;
	}

	cout << a;



	return 0;
}
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <stack>
//#include <string.h>
//#include <string>
//using namespace std;
//
//int main(void) {
//	stack<int> stk;
//	int test;
//	scanf("%d", &test);
//	for (int i = 0; i < test; i++) {
//		string str="";
//		cin >> str;
//		
// 		if (str=="push") {
//			int num;
//			scanf(" %d", &num);
//			stk.push(num);
//		}
//		else if (str == "pop") {
//			if (stk.empty()) printf("%d\n", -1);
//			else {
//				printf("%d\n", stk.top());
//				stk.pop();
//			}
//		}
//		else if (str=="size"){
//			printf("%d\n", (int)stk.size());
//		}
//		else if (str=="empty") {
//			if (stk.empty()) printf("%d\n", 1);
//			else printf("%d\n", 0);
//		}
//		else if (str=="top") {
//			if(stk.empty()) printf("%d\n", -1);
//			else			printf("%d\n", stk.top());
//		}
//	}
//	return 0;
//}





// Fast version


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

int main(void) {
	stack<int> stk;
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		char str[6];

		scanf("%s", str);
		if (strcmp(str, "push") == 0) {
			int num;
			scanf("%d", &num);
			stk.push(num);
		}
		else if (strcmp(str, "pop") == 0) {
			if (stk.empty()) printf("%d\n", -1);
			else {
				printf("%d\n", stk.top());
				stk.pop();
			}
		}
		else if (strcmp(str, "size") == 0) {
			printf("%d\n", (int)stk.size());
		}
		else if (strcmp(str, "empty") == 0) {
			if (stk.empty()) printf("%d\n", 1);
			else printf("%d\n", 0);
		}
		else if (strcmp(str, "top") == 0) {
			if (stk.empty()) printf("%d\n", -1);
			else			printf("%d\n", stk.top());
		}
	}
	return 0;
}
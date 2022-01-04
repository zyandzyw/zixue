//#include <iostream> 
//using namespace std;
//int my_strlen(char* str) {
//	char* start = str;
//	char* end = str;
//	while (*end != '\0') {
//		end++;
//	}
//	return end - start;
//}
//int main() {
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//}
//#include <iostream>
//using namespace std;
//typedef struct Stu {
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main() {
//	Stu s = { "李四",40,"4454656546","男" };
//	printf("%s", s.name);
//	return 0;
//}
#include <iostream>
using namespace std;
typedef struct Stu {
	char arr[20];
	short age;
	char tele[12];
	char sex[20];
}Stu;
int main() {
	Stu s = { "李四",40,"454646","男" };
	printf("%s", s.sex);
}
#include"test.h"




int add(int a, int b) {
	
		return a+b;
}

int sub(int a, int b) {
	
		return a-b;
}


void sayHello(char* str) {

	while (true)
	{
		printf("%s=====",str);
	}
}


const char* get_av_version_info() {
	printf("av_version_info:%s", av_version_info());
	return av_version_info();
}





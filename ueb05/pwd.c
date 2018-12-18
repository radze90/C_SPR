#include <stdio.h>
#include <unistd.h>

int main(){
	
	char *dir;	

	dir = getcwd(0, 0);
	puts(dir);

	return 0;
}

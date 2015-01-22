include <stdio.h>

void removeIndex(char* str, int i) { 
	for (i ; i < strlen(str); i++ ){
		str[i] = str[i+1];
	}
}

void sub(char* str) {
	int i;
	int j;
	char tmp;
	for (i = 0; i < strlen(str); i++) {
		tmp = str[i];
		for (j = i + 1; j < strlen(str); j++) {
			if (tmp == str[j]) 
				removeIndex(str, j);
		} 
	}
}

int main () {

	return 0;

}
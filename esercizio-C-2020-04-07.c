/** ex 1 */
#include <stdio.h>
#include <string.h>

char * str_1 = "prima-";
char * str_2 = "seconda-";
char * str_3 = "terza!";

int main(int argc, char **argv) {
	// Preparazione buffer
	int total_len = strlen(str_1) + strlen(str_2) + strlen(str_3) + 1;
	char * str_new[total_len];
	// Concatenazione
	strcat(str_new, str_1);
	strcat(str_new, str_2);
	strcat(str_new, str_3);
	// Output
	printf(str_new);
}

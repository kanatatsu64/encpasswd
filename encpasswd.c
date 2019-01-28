#include <stdio.h>
#include <stdlib.h>
#include <crypt.h>

int usage() {
	fprintf(stderr, "usage: encpasswd <password> <salt>\n");
	return 0;
}

int main(int argc, char **argv) {
	if (argc != 3) {
		usage();
		exit(1);
	}
	printf("%s\n", crypt(argv[1], argv[2]));
	return 0;
}

#ifndef _filesupport_h_ /* Include guard */
#define _filesupport_h_
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

struct Transaction_t {
	char transDate[MAX_CHAR];
	int price;
	char payment[MAX_CHAR];
	char name[MAX_CHAR];
	char city[MAX_CHAR];
	char state[MAX_CHAR];
	char country[MAX_CHAR];
	char accCreate[MAX_CHAR];
	char lastLogin[MAX_CHAR];
	int latitude;
	int longtitude;
};

int countrow (FILE *file);
void strget(char *token, char *line, const char *sign);
void loadentry11(char *line, struct Transaction_t *trans);

#endif //

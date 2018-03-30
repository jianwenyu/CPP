#include "fileSupport.h"

int countrow (FILE *file){
    int row = 0;
    int count = 0;
    int i = 0;
    char readOneLine[256];
    if (file == NULL) {
        perror("error opening file for function countRow\n");
        exit(1);
    }
    else {
        while (fgets(readOneLine, 256, file) != NULL) { 
			if (readOneLine[0] == '\0') {break;}
			row++;
        }
    }
    rewind(file);
    return row;
}

void strget(char *token, char *line, const char *sign){
    memset(token, '\0', MAX_CHAR); //wipe out previous token string
    int i = 0;
    int j = 0;
    int signlength = strlen(sign);
    if (line == NULL){
        perror("Input string is invalid.\n");
    }
    else {
        for (i=0;i<(strlen(line)+1);i++) {
            if (strchr(sign, line[i]) != NULL) {
                j++; //delimiter occurs
                if (strchr(sign, line[i+1]) == NULL) {
                    memcpy(token, line,i-(j-1));
                    memmove(line, &line[i+1], strlen(line)-i+1); //remove the previous token
                    break;
                }
            }
            if (line[i]=='\0'){
                memcpy(token, line, i);
                memset(line, '\0', strlen(line));
                line = NULL;
                break;
            }
        }
    }
}

void loadentry11(char *line,struct Transaction_t *trans){
    int j=0;
    int column = 11;
    
    const char *sign = ",";
    char *buff = (char *)malloc(MAX_CHAR*sizeof(char));
    while(j<column) {
        strget(buff, line, sign);
        switch(j){
            case 0: strncpy(trans->transDate, buff,MAX_CHAR); break;
            case 1: trans->price = atoi(buff); break;
            case 2: strncpy(trans->payment, buff,MAX_CHAR); break;
            case 3: strncpy(trans->name, buff,MAX_CHAR); break;
            case 4: strncpy(trans->city, buff,MAX_CHAR); break;
            case 5: strncpy(trans->state, buff,MAX_CHAR);break;
            case 6: strncpy(trans->country, buff,MAX_CHAR); break;
            case 7: strncpy(trans->accCreate, buff,MAX_CHAR); break;
            case 8: strncpy(trans->lastLogin, buff,MAX_CHAR); break;
            case 9: trans->latitude = atoi(buff); break;
            case 10: trans->longtitude = atoi(buff); break;
            default: printf("error assigning token into structure member\n"); exit(1);
        }
        j++;
    }
    free(buff);
}


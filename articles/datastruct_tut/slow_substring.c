#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include <string.h>



#define ASSERTS


int slow_substring_search(char *text, char *pattern){
        int i = 0;
        int textLength = strlen(text);
        int patternLength = strlen(pattern);
        int comparisons = 0;

        while( i <= textLength - patternLength) {
                if (text[i] == pattern[0]){
                        int j = 0;
                        for (j = 0; j < patternLength; j++) {
                                comparisons++;
                                if (text[i+j] != pattern[j])
                                        break;
                        }
                        if (j == patternLength) {
                                printf("%d\n", comparisons);
                                return 0;
                        }
                }
                i++;
        }

        printf("%d\n", comparisons);
        return 1;
}

int main(int argc, char *argv[]){
        if (argc < 2){
                printf ("usage: %s Text Pattern\n", argv[0]);
                exit(0);
        }

        printf("%d\n", slow_substring_search(argv[1], argv[2]));
        
        return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include <string.h>


#define ASSERTS

int fast_substring_search(char *text, char *pattern){
        int patternhash = 0;

        int textLength = strlen(text);
        int patternLength = strlen(pattern);
        int comparisons = 0;

        if (textLength < patternLength)
                return 1;

        char *i = pattern;

        while(*i){
                patternhash += *i;
                i++;
        }

        int texthash = 0;
        int j = 0;

        while(j < patternLength)
                texthash += text[j++];

        j = 0;
        do {
                comparisons++;
                if (texthash == patternhash) 
                        break;

                texthash -= text[j];
                j++;
                texthash += text[j + patternLength - 1];
        } while(j <= (textLength - patternLength));

        printf("%d\n", comparisons);

        if (texthash == patternhash)
                return 0;
        else 
                return 1;
}

int main(int argc, char *argv[]){
        if (argc < 2){
                printf ("usage: %s Text Pattern\n", argv[0]);
                exit(0);
        }

        printf("%d\n", fast_substring_search(argv[1], argv[2]));
        
        return 0;
}

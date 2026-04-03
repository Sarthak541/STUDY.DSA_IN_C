#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* selection_sort(char* input){
    int word_len = strlen(input);
    for (int i = 0; i < word_len; ++i) {
        input[i] = tolower(input[i]);
    }
    for (int i = 0; i < word_len-1; ++i) {
        int smallest = i;
        for (int j = i+1; j < word_len; ++j) {
            if (input[j] < input[smallest]) {
                smallest = j;
            }
        }
        char temp = input[i];
        input[i] = input[smallest];
        input[smallest] = temp;
    }
    return input;
}

int main(){
    char selection_sort_input[] = "SELECTIONSORT";
    printf("Now we are doing selection_sort \n"
           "The value of selection sort is %s\n",
           selection_sort(selection_sort_input));
    return 0;
}
#include <stdio.h>
int main(){
   char str[100], rev[100];
    int j = 0, len = 0, flag = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    while (str[len] != '\0') {
        len++;
    }

    for (int i = len - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0'; 

    for (int i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("%s = True (Palindrome)\n", str);
    else
        printf("%s = False (Not Palindrome)\n", str);





    // printf("Q-2 Frequency Counter.");
    // char str[100];
    // int freq[26] = {0};
    // int i;

    // printf("Enter any string: ");
    // scanf("%s", str);

    // for (i = 0; str[i] != '\0'; i++){
    //     if (str[i] >= 'a' && str[i] <= 'z'){
    //         freq[str[i] - 'a']++;
    //     }
    // }

    // printf("\nFrequency of each letter:\n");
    // for (i = 0; i < 26; i++){
    //     if (freq[i] != 0){
    //         printf("%c => %d\n", i + 'a', freq[i]);
    //     }
    // }
}
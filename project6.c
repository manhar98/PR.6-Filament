#include <stdio.h>

int main() {
    
    char a[20];
    int flag = 1;
    int len = 0;
    
    printf("Enter the word :- ");
    scanf("%s",&a);
    
    for(int i = 0 ; a[i] != '\0' ; i++){
        len = i;
    }
    
    for(int i = 0 ; a[i] != '\0' ; i++){
        if(a[i] != a[len]){
            flag = 0;
            break;
        }
        len--;
    }
    
    if(flag){
        printf("String is palindrome.\n");
    }

    else{
        printf("String is not palindrome.\n");
    }
    
    printf("Frequency of each letter :- \n");
    
    for(int i = 0 ; a[i] != '\0' ; i++){
        int count = 0;
        int ac = 0;

        for (int k = 0; k < i; k++) {
            if (a[k] == a[i]) {
                ac = 1;
                break;
            }
        }
    
        
        if (ac)
            continue;
            
        for(int j = 0 ; a[j] != '\0' ; j++){
            if(a[j] == a[i]){
                count++;
            }
        }
        printf("%c :- %d\n",a[i],count);
    }
}
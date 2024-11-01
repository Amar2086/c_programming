#include <stdio.h>
#include <string.h>

int is_palindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {  // Compare characters
            return 0;  // Not a palindrome
        }
        left++;
        right--;
    }
    return 1;  // It's a palindrome
}
int reversed_copy(const char *src,int length,char *dest)
{
    int j=0;
    for (int  i =length-1;i>=0;i--)
    {
        dest[j]=src[i];
        j++;
    }

    if (strcmp(dest,src)==0)
    return 1;
    else
    return 0;
}
int main() {
    char destination[23];
    char word[] = "radar";
    char word2[30];
    scanf("%s",&word2);
    int length = strlen(word2);
    if (is_palindrome(word)) {
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }
    //this Technicals taken from the chatgpt.
    //Let's create something of our 
    int cmp;
      if( reversed_copy(word2,length,destination)) {
        printf("%s is a palindrome.\n", word2);
    } else {
        printf("%s is not a palindrome.\n", word2);
    }
    return 0;
}

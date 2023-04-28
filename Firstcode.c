#include <stdio.h>
#include <string.h>

void text();

int main(){
    text();
    
    return 0;
}

void text(){
    char str[10000];
    char splitStrings[100][100];//can store 100 words 100characters
    int i,j,cnt;
    
    printf("Enter a String: ");
    gets(str);
    
    j=0;
    cnt=0;
    for(i=0; i<= (strlen(str)); i++){
        //if space or NULL found, assign NULL into splitStrings[cnt]
        if(str[i] == ' ' || str[i] == '\0'){
            splitStrings[cnt][j] = '\0';
            cnt++; //for next word
            j=0; //for next word, init index to 0
        }
        else{
            splitStrings[cnt][j] = str[i];
            j++;
        }
    }
    printf("\nOriginal String is: %s", str);
    printf("\nStrings (words) after split by space:\n");
    for(i = 0;i < cnt; i++){
        printf("%s\n",splitStrings[i]);
    }
}

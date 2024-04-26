#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
    char s[100001];
    scanf("%s",s);
    int len=strlen(s);
    int capital=0;
    int small=0;
    int digit=0;
    for(int j=0;j<len;j++){
        if(s[j] >= 'a' && s[j] <= 'z'){
           small++;
        }
        else if(s[j] >= 'A' && s[j] <= 'Z'){
           capital++;
        }
        else if (s[j] >= '0' && s[j] <= '9') {
            digit++;
        }
    }
    printf("%d %d %d\n",capital,small,digit);
}

   
}
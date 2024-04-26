#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        
        int original_days, new_days;
        
        if (M2 == 0) {
            original_days = D; 
        } else {
            original_days = M1 * D /#include<stdio.h>
#include<string.h>
int main(){
    char s[100001];
    scanf("%s",s);
    int len=strlen(s);
    int capital=0;
    int small=0;
    int digit=0;
    for(int i=0;i<len;i++){
        if(s[i] ){
            count++;
        }
    }
    printf("%d",count);
} (M1 + M2); 
        }
        
        new_days = D - original_days;
        
        printf("%d\n", new_days);
    }

    return 0;
}

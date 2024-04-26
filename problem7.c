#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        
        int x;
        scanf("%d", &x);
        int found = 0;
        
        for(int j = 0; j < n; j++) {
            if(arr[j] == x) {
                found = 1;
                break; 
            }
        }
        
        if(found == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

    

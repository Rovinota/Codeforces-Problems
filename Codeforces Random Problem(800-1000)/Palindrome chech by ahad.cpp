#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char str[n+1];
        scanf("%s", str);
        int oddCount = 0;
        for (char i = 'a'; i <= 'z'; i++) {
            int tempCount = 0;
            for (int j = 0; str[j] != '\0'; j++) {
                if (i == str[j]) tempCount++;
            }

            if (tempCount % 2 == 1) oddCount++;
        }
        if (oddCount > 1) printf("No\n");
        else printf("Yes\n");
    }
}

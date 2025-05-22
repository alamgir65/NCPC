#include<stdio.h>
int main()
{
    int testcase; 
    scanf("%d", &testcase);

    for(int i = 0; i < testcase; i++)
    {
        int m1,m2,d; 
        scanf("%d %d %d", &m1, &m2, &d);
        int sobar_lagbo = (m1 * d)/(m1 + m2);
        int ans = d-sobar_lagbo;
        printf("%d\n", ans);
    }
    return 0;
}
// 
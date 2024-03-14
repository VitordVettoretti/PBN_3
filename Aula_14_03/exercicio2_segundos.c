#include <stdio.h>

void tempo(int totseg, int *h,
           int *m, int *s)
{
    *h = totseg / 3600;
    *m = totseg % 3600 / 60;
    *s = totseg % 3600 % 60;
}

int main()
{
    int ts;
    int horas, mins, segs;
    printf("Digite um total em segundos: ");
    scanf("%d", &ts);
    tempo(ts, &horas, &mins, &segs);
    printf("%02d:%02d:%02d\n", horas, mins, segs);   
}
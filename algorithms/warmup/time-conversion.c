// https://www.hackerrank.com/challenges/time-conversion

#include <stdio.h>
#include <string.h>

int main(){
    int hour; int minute; int second; char m[2];
    scanf("%d:%d:%d%s", &hour, &minute, &second, &m);
    if (strcmp(m, "PM") == 0 && hour != 12 || strcmp(m, "AM") == 0 && hour == 12)
      hour += 12;
    hour %= 24;
    printf("%02d:%02d:%02d\n", hour, minute, second);
    return 0;
}

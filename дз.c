#include <stdio.h>

int main() {
    int total_kop;
    int rub, kop;
    char *kop_word;
    printf("Введите сумму в копейках: ");
    scanf("%d", &total_kop);
    rub = total_kop / 100;
    kop = total_kop % 100;

    switch (kop % 10) 
    {
        case 1:
            kop_word = (kop % 100 == 11) ? "копеек" : "копейка";
            break;
        case 2:
        case 3:
        case 4:
            kop_word = (kop % 100 >= 12 && kop % 100 <= 14) ? "копеек" : "копейки";
            break;
        default:
            kop_word = "копеек";
    }
    printf("%d руб. %d %s\n", rub, kop, kop_word);
    return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int main(void) {
    int mm, dd, yy;
    printf("날짜를 입력해주세요 (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm, &dd, &yy);

    printf("Dated this %d", dd);

    switch(dd) {
    case 1:
        /* intentional fallthrough */
    case 21:
        /* intentional fallthrough */
    case 31:
        printf("th");
        break;
    case 2:
        /* intentional fallthrough */
    case 22:
        printf("nd");
        break;
    case 3:
        /* intentional fallthrough */
    case 23:
        printf("rd");
        break;
    default:
        printf("th");
        break;
    }

    printf(" day of ");

    switch(mm) {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        assert(false);
        break;
    }

    printf(", 20%.2d.\n", yy);

    return 0;
}

//
// Created by m01 on 28/10/2026.
//

#include "lastDayOfWeekOfMonth.h"

#include "isALapYear.h"

int lastDayOfWeekOfMonth(int year, int month, int firstDay) {
    int max_days;

    if (month == 2) {
        if (isALeapYear(year)) max_days = 29;
        else max_days = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        max_days = 30;
    }
    else {
        max_days = 31;
    }

    int lastDay = firstDay;

    for (int i = 1; i < max_days; i++) {
        lastDay++;
        if (lastDay > 7) lastDay = 1;
    }

    return lastDay;
}

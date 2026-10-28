//
// Created by m01 on 28/10/2026.
//

#include "isALapYear.h"

bool isALeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
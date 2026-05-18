#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;
    year_month_day ymd = 2023y/July/15d;
    std::cout << (int)ymd.year() << "-" << (unsigned)ymd.month() << "-" << (unsigned)ymd.day() << std::endl;
    return 0;
}

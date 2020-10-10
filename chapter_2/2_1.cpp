//
// Created by hangshan on 2020/10/7.
//

#include <cstdio>
#include <thread>
#include <unistd.h>

struct func{
    int &i_;

    func(int &i): i_(i){}

    void operator()(){
        sleep(1);
        printf("%d:", i_);
        for(unsigned j = 0; j < 100000000; j++){
            i_ += 1;
        }
    }
};

int main(){
    int local_state = 0;
    func my_func(local_state);
    std::thread my_thread(my_func);
    my_thread.join();
    return 0;
}
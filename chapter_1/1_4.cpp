//
// Created by hangshan on 2020/10/7.
//

#include <iostream>
#include <thread>

void hello(){
    std::cout << "Hello Concurrency World!" << std::endl;
}

int main(){
    std::thread t(hello);
    t.join();
    return 0;
}

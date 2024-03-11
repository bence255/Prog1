#include <iostream>
#include <vector>
#include <thread>

void InfiniteLoop(){
	while(true){}
}

int main(){
    int n = std::thread::hardware_concurrency();

    std::vector<std::thread> threads;
    for (int i; i < n; i++){
        threads.emplace_back(InfiniteLoop);
    }

    for (auto& thread : threads){
        thread.join();
    }
    return 0;
}

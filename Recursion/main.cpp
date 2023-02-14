#include <iostream>
#include <vector>

void print_count(int, int);
template <class T> void print_list(std::vector<T> list);
int fibonacci(int);

int main() {
    
    int start = 0;
    int stop = 10;

    //print from x to y iteratively
    for (int i = start; i < stop; i++) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    //print from x to y recursively
    print_count(start, stop);
    std::cout << std::endl;

    std::vector<int> li = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //print list iteratively
    for (int i = 0; i < li.size(); i++) {
        std::cout << li[i] << " ";
    }
    std::cout << std::endl;

    //print list recursively
    print_list(li);

    std::cout << std::endl;

    std::cout << fibonacci(4) << std::endl;

    return 0;
}

void print_count(int start_at, int stop_at) {
    if (start_at != stop_at) {
        std::cout << start_at << " ";
        print_count(start_at + 1, stop_at);
    }
}

template <class T>
void print_list(std::vector<T> list) {
    if (list.size() > 0) {
        std::cout << list[0] << " ";
        list.erase(list.begin());
        print_list(list);
    }
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
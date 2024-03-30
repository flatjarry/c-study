
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // 设置随机种子

    int secretNumber = rand() % 100 + 1; // 生成1到100之间的随机数
    int guess;
    int attempts = 0;

    std::cout << "猜猜我心里想的数字是多少（1-100）：" << std::endl;

    do {
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "猜小了，再试一次：" << std::endl;
        }
        else if (guess > secretNumber) {
            std::cout << "猜大了，再试一次：" << std::endl;
        }
        else {
            std::cout << "恭喜你猜对了！你用了 " << attempts << " 次猜中了数字 " << secretNumber << std::endl;
        }
    } while (guess != secretNumber);

    return 0;
}
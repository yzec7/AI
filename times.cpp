#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    while (true) {
        // 获取当前系统时间
        time_t currentTime = time(0);
        tm *localTime = localtime(&currentTime);

        // 清屏
        system("clear"); // for Linux/macOS
        // system("cls"); // for Windows

        // 显示模拟斜体日期和时间
        cout << "当前日期: /" << localTime->tm_year + 1900 << "/" << "/" << localTime->tm_mon + 1 << "/" << localTime->tm_mday << "/" << endl;
        cout << "当前时间: /" << localTime->tm_hour << "/" << "/" << localTime->tm_min << "/" << "/" << localTime->tm_sec << "/" << endl;

        // 暂停一秒钟
        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}

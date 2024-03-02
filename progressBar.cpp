#include <iostream>
#include <unistd.h> // For sleep function in Unix

void displayProgressBar(int completed, int total) {
    float progress = (float)completed / total;
    int barWidth = 50; // Width of the progress bar in characters

    std::cout << "[";
    int pos = barWidth * progress;
    for (int i = 0; i < barWidth; ++i) {
        if (i < pos) std::cout << "=";
        else if (i == pos) std::cout << ">";
        else std::cout << " ";
    }
    std::cout << "] " << int(progress * 100.0) << " %\r";
    std::cout.flush();
}

int main() {
    const int totalSteps = 100;
    for (int step = 0; step <= totalSteps; ++step) {
        displayProgressBar(step, totalSteps);
        usleep(100000); // Sleep for 100 milliseconds
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>
#include <algorithm>

int main() {
    
    int test_scores[] = {26, 49, 98, 87, 62, 75};
    int num_scores = sizeof(test_scores) / sizeof(test_scores[0]);

    std::sort(test_scores, test_scores + num_scores);

    std::cout << "Sorted Test Scores (Ascending Order): ";
    for (int i = 0; i < num_scores; i++) {
        std::cout << test_scores[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

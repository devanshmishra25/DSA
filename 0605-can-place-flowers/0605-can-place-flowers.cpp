class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();

        for (int i = 0; i < size; i++) {
            // Check if the current plot is empty and its adjacent plots are also empty
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == size - 1 || flowerbed[i + 1] == 0)) {
                flowerbed[i] = 1; // Plant a flower in the current plot
                count++; // Increment the count of planted flowers
            }
        }

        return count >= n; // Return true if the count of planted flowers is greater than or equal to n
    }
};
class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        return ((arrivalTime + delayedTime) % 24);
    }
    // Time complexity - O(1)
    // Space complexity - O(1)
};
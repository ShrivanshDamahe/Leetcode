class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int dist = 0;

        while (mainTank != 0){
            if (mainTank >= 5){
                int temp = mainTank / 5;
                dist += (temp * 50);
                if (temp <= additionalTank){
                    mainTank = (mainTank % 5) + temp;
                    additionalTank -= temp;
                }
                else {
                    mainTank = (mainTank % 5) + additionalTank;
                    additionalTank = 0;
                }
            }
            else {
                dist += (mainTank * 10);
                mainTank = 0;
            }
        }

        return dist;
    }
    // Time complexity - O(mainTank)
};
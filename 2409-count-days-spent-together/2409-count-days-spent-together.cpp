class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int aliceArriveMonth = stoi(arriveAlice.substr(0, 2));
        int aliceArriveDay = stoi(arriveAlice.substr(3, 2));
        int aliceLeaveMonth = stoi(leaveAlice.substr(0, 2));
        int aliceLeaveDay = stoi(leaveAlice.substr(3, 2));

        int bobArriveMonth = stoi(arriveBob.substr(0, 2));
        int bobArriveDay = stoi(arriveBob.substr(3, 2));
        int bobLeaveMonth = stoi(leaveBob.substr(0, 2));
        int bobLeaveDay = stoi(leaveBob.substr(3, 2));

        int arriveA = 0;
        for (int i = 0; i < (aliceArriveMonth - 1); i++)
            arriveA += days[i];
        arriveA += aliceArriveDay;

        int leaveA = 0;
        for (int i = 0; i < (aliceLeaveMonth - 1); i++)
            leaveA += days[i];
        leaveA += aliceLeaveDay;

        int arriveB = 0;
        for (int i = 0; i < (bobArriveMonth - 1); i++)
            arriveB += days[i];
        arriveB += bobArriveDay;

        int leaveB = 0;
        for (int i = 0; i < (bobLeaveMonth - 1); i++)
            leaveB += days[i];
        leaveB += bobLeaveDay;

        return max(0, (min(leaveA, leaveB) - max(arriveA, arriveB) + 1));
    }
    // Time complexity - O(1)
};
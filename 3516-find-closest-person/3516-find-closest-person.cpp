class Solution {
public:
    int findClosest(int x, int y, int z) {
        int dist1 = abs(x - z);  // Distance Person 1 needs to travel
        int dist2 = abs(y - z);  // Distance Person 2 needs to travel

        if (dist1 < dist2) return 1;   // Person 1 arrives first
        else if (dist2 < dist1) return 2; // Person 2 arrives first
        else return 0; // Both arrive at the same time
    }
};

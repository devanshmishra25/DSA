class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int distance = 0;
        
        while (mainTank >= 5 && additionalTank > 0) {
            distance += 50; // Add 50 km for every 5 liters consumed from the main tank
            mainTank -= 5; // Reduce the fuel in the main tank by 5 liters
            
            additionalTank--; // Reduce the fuel in the additional tank by 1 liter
            mainTank++; // Transfer 1 liter of fuel from the additional tank to the main tank
        }
        
        distance += mainTank * 10; // Add the remaining fuel distance in the main tank
        
        return distance;
    }

};
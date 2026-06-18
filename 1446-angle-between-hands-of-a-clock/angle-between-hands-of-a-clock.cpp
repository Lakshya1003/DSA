class Solution {
public:
    double angleClock(int hour, int minutes) {
        double mang = 6.00;
        double minu = minutes * mang;
        double mah = 0.5 * minutes;
        double hang = 0.0;

        if (hour != 12) {
            hang = 30.00 * hour;
        }

        hang += mah;

        double diff = abs(hang - minu);

        return min(diff, 360.0 - diff);
    }
};
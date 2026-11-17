//Q 1342_ Number of steps required to reduce a number to zero
// uses a while loop to repeat the operation until the number becomes zero
// uses an if-statement to determine whether the number is even or odd, if number is even divide by 2, if it is odd, subtract 1, repeat till you get zero.
class Solution {
public:
    int numberOfSteps(int num) {
         int steps = 0;

        while (num != 0) {
            if (num % 2 == 0) {
                num = num / 2;
            }
            else {
                num = num - 1;
            }

            steps++;
        }

        return steps;
    }
};

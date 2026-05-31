class Solution {
public:
    int countSeniors(const vector<string> &details) {
        int seniorCount{0};

        for (const string passenger : details) {
            switch (passenger[11]) {
                case '6':
                    if (passenger[12] != '0') seniorCount += 1;
                    break;
                case '7':
                    seniorCount += 1;
                    break;
                case '8':
                    seniorCount += 1;
                    break;
                case '9':
                    seniorCount += 1;
                    break;
            }
        }

        return seniorCount;
    }
};
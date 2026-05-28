class Solution {
public:
    vector<int> replaceElements(const vector<int>& arr) {
        vector<int> output{arr};

        for (size_t i{0}; i < output.size() - 1; ++i) {
            int maxRight{0};

            for (size_t j{i + 1}; j < output.size(); ++j) {
                maxRight = max(maxRight, output[j]);
            } 

            output[i] = maxRight;
        }

        output[arr.size() - 1] = -1;

       return output; 
    }
};
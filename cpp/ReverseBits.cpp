#include <iostream>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rs = 0;

        for(int i = 0; i < 32; ++i) {
            if(n & 1 << i) {
                rs += 1 << (31 - i);
            }
        }

        return rs;
    }
};

int main() {
	Solution *sol = new Solution;

	uint32_t rs = sol->reverseBits(43261596);
	cout<<rs<<endl;
	return 0;
}
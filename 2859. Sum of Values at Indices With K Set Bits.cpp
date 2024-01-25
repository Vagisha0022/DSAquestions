class Solution {
    private:
int convert_to_binary(int n) {
  int binary[32];
  int i = 0;
  while (n > 0) {
    binary[i++] = n % 2;
    n /= 2;
  }
  int binary_number = 0;
  for (int j = i - 1; j >= 0; j--) {
    binary_number += binary[j] * pow(2, i - j - 1);
  }
  return binary_number;
}

int count_ones(int n) {
  return __builtin_popcount(n);
}
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
                           int sum =0;
          for(int i=0;i<nums.size();i++){
              int b =  convert_to_binary(i);
              int l = count_ones(b);
               if(l == k){
                   sum = sum + nums[i];
               }
          }
          return sum;
    }
};

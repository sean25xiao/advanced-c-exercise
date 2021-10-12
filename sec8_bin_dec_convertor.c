#include <stdio.h>
#include <math.h>

// Convert binary to decimal
// ex. 0100 1001 --> 73
int BinToDec(long long int bin_num) {
  
  int exp = 0;
  int remainder = 0;
  int result = 0;

  while (bin_num != 0) {
    remainder = bin_num % 10;
    bin_num = bin_num / 10;
    result = result + remainder * pow(2, exp);
    exp++;
  }

  return result;
}

long long int DecToBin(int dec_num) {
  int exp = 0;
  int remainder = 0;
  long long int result = 0;

  while(dec_num != 0) {
    remainder = dec_num % 2;
    dec_num = dec_num / 2;
    result = result + remainder * pow(10, exp);
    exp++;
  }

  return result;
}

int main() {
  int res1 = 0;
  int res2 = 0;
  long long int bin_input = 1001001;
  int dec_input = 73;

  res1 = BinToDec(bin_input);
  res2 = DecToBin(dec_input);

  printf("res1 of BinToDec is %d \n", res1);
  printf("res2 of DecToBin is %d \n", res2);

  return 0;
}
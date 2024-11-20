function decimalToBinary(num) {
  let power = 1;
  let ans;
  while (num > 0) {
    let rem = num % 2;
    num = Math.floor(num / 2);
    ans += rem * power;
    power *= 10;
  }
  return ans;
}

console.log(decimalToBinary(10));

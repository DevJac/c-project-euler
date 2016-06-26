int fib() {
  static int a = 0;
  static int b = 1;
  int result = a + b;
  a = b;
  b = result;
  return result;
}

int main() {
  int sum = 0;
  int n = 0;
  do {
    n = fib();
    if (n % 2 == 0) sum += n;
  } while (n < 4000000);
  printint(sum);
}

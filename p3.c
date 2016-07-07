long long int * primes(long long int n) {
  int result_size = 100;
  long long int * result = malloc(sizeof(long long int) * result_size);
  long long int * next = result;
  while (n != 1) {
    for (long long int d=2; d <= n; d++) {
      if (n % d == 0) {
        n /= d;
        * next = d;
        next++;
        break;
      }
    }
  }
  *next = 0;
  return result;
}

int main() {
  long long int max = 0;
  long long int * ps = primes(600851475143);
  for (long long int * p = ps; *p != 0; p++) {
    if (*p > max) {
      max = *p;
    }
  }
  printint(max);
  free(ps);
}

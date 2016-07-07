int is_palidrom_int(int n) {
  char s[7];
  sprintf(s, "%i", n);
  for(int i = 0; i < strlen(s) / 2 + strlen(s) % 2 ; i++) {
    if (s[i] != s[strlen(s) - 1 - i]) return 0;
  }
  return 1;
}

int main() {
  int max_palidrome_int = 0;
  for (int i = 1; i <= 999; i++) {
    for (int j = 1; j <= 999; j++) {
      if (is_palidrom_int(i*j) && i*j > max_palidrome_int) {
        max_palidrome_int = i*j;
      }
    }
  }
  printint(max_palidrome_int);
}

int main {
char a[MAX_ARRAY_SIZE] = 0/* initialize */;

 size_t cnt = 0/* initialize */;

 for (unsigned int i = cnt-2; i >= 0; i--) {

 a[i] += a[i+1];

 }
return 0; }
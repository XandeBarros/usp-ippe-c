#include <stdio.h>

int main() {
  int n, i, j;
  n = 3;
  float tests[n], aux;
  float ftest, stest, ttest, fcoursework, scoursework;
  float averagetests, averagecwork, finalaverage;

  scanf("%f %f %f %f %f", &ftest, &stest, &ttest, &fcoursework, &scoursework);

  tests[0] = ftest;
  tests[1] = stest;
  tests[2] = ttest;

  for(i = 0; i < n; ++i) {
    for(j = i + 1; j < n; ++j) {
      if(tests[i] > tests[j]) {
        aux = tests[i];
        tests[i] = tests[j];
        tests[j] = aux;
      }
    }
  }
  
  averagetests = (tests[2] + tests[1]) / (float)2;
  averagecwork = (fcoursework + scoursework) / (float)2;
  finalaverage = (0.7 * averagetests) + (0.3 * averagecwork);

  printf("%f", finalaverage);
}

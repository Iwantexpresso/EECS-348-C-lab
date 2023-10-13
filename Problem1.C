#include <stdio.h>
#include <string.h>



int main() {

float Arr[12] ={23458.01,
40112.00,
56011.85,
37820.88,
37904.67,
60200.22,
72400.31,
56210.89,
67230.84,
68233.12,
80950.34,
95225.22};

int width = 10;
int len =12;

char Months[len][width]= {"January","February","March","April","May","June",
"July","August","September","October","November", "December"};

  printf("Monthly Sales Report for:\n");
  

for (int i = 0; i < 12; i++) {
  printf("%-*s\t%.2f\n",width, Months[i], Arr[i]  );
  
  }

printf("Sales Summary: \n");

float min;
float max;
// min index code 
for (int i = 0; i < 12; i++) {
  int min_index = i;
  for(int j =0;j<12; j++){
     if ( Arr[j] < min_index){
      min_index = j;
  
     } 
}
min = Arr[min_index];
printf("Min:%-*s\t%.2f\n ",width, Months[min_index], Arr[min_index]);
break;


}
// max index code
for (int i = 0; i < 12; i++) {
  int max_index = i;
  for(int j =0;j<12; j++){
     if ( Arr[j] > max_index){
      max_index = j;
     
     } 
}
max = Arr[max_index];
printf("Max:%-*s\t%.2f\n ",width, Months[max_index], Arr[max_index]);
break;


}
// Aveareg index code
float avg;
for (int i = 0; i < 12; i++) {
  avg += Arr[i];
}
avg =avg/len;
printf("Average:\t%.2f\n ", avg);













return 0;
}

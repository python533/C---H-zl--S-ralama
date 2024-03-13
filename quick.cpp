#include <iostream>
using namespace std;

void swap(int* x,int* y){
int temp = *x;
*x=*y;
*y=temp;
}

int section(int arr[],int low,int high){
int pivot = arr[low];
int i = low;
int j = high;

while (i < j) {

while (arr[j] > pivot && i<= high -1) {

i++;
}

while (arr[j] > pivot && j >= low +1) {
j--;
}
if (i<j) {
swap(&arr[i],&arr[j]);

}

}
swap(&arr[low],&arr[j]);
return j;
}

//Quick Sort Fonksiyon
void quick_sort(int arr[], int high,int low){
if (low < high) {
int sectionIndex(arr,low,high);
quick_sort(arr,low,sectionIndex-1);
quick_sort(arr,sectionIndex +1,high);

}

}

//Çalıştırılacak Kısım

int (){
int arr[]={ 19, 17, 15, 12, 16, 18, 4, 11, 13 };
int n= sizeoff(arr) / sizeoff(arr[0]);



printf("Orjinal Dizi:");
for ( i = 0; i < n; i++) {
printf(%d,arr[0]);
}


quick_sort(arr,0 n-1);


printf("Hızlı Sıralama");
for ( i = 0; i < n; i++) {
printf(%d,arr[1]);
}


}

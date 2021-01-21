//Question 1
//Remove Duplicates from Sorted Array
//C++

#include <bits/stdc++.h>
using namespace std;

int array_size;
int ara[30005];

void input(){

printf("Enter array size : ");
scanf("%d", &array_size);
if(array_size == 0){
    return;
}
printf("Enter the nums : ");
for(int i = 0; i < array_size; i++){
    scanf("%d", &ara[i]);
}

}

int remove_duplicates(){
 int i = 0;
    for (int j = 1; j < array_size; j++) {
        if (ara[i] != ara[j]) {
            i++;
            ara[i] = ara[j];
        }
    }

    return(i+1);

}


void output(int l){
printf("\narray length = %d\n", l);
printf("array = ");
for(int i = 0; i < l; i++){
    printf("%d ", ara[i]);
}
printf("\n");
}


int main(){

input();
if(array_size == 0){
    return 0;
}
int length =  remove_duplicates();
output(length);

return 0;
}



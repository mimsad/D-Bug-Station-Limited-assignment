//filter an image
//Smoothing Process Over an Image Using Average


#include <bits/stdc++.h>
using namespace std;

int input_image[11][11];
int output_image[11][11];



void process(){

memset(output_image, 0, sizeof(output_image));

for(int i = 0; i < 10; i++){
 for(int j = 0; j < 10; j++){
    input_image[i][j] = rand() % 100;
 }
}

for(int i = 0; i <= 10 - 3; i++){
    for(int j = 0; j <= 10 - 3; j++){
            int sum = 0;
        for(int k = i; k < i + 3; k++){
            for(int l = j; l < j+3; l++){
                sum += input_image[k][l];
            }
        }
        sum /= 9;
    int row_position = (((i + 2) - i) / 2) + i;
    int col_position = (((j + 2) - j) / 2) + j;
    output_image[row_position][col_position] = sum;
    }
}
}



void result(){

for(int i = 0; i < 10; i++){
 for(int j = 0; j < 10; j++){
    printf("%d ", output_image[i][j]);
 }
 printf("\n");
}

}


int main()
{
    process();
    result();
    return 0;
}


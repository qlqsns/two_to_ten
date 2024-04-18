#include <stdio.h>
#include <math.h>

int getlength(const char arr[]) {
    int len = 0;
    while(arr[len] != 0) {
        len++;
    }
    return len;
}


int main(){
    int index = 0 , dec = 0;
    int sum = 0;
    int length = 0;
    char binary[40] = {0};

    printf("write binary numbers (up to 32)\n");
    scanf("%s",binary);
    length = getlength(binary);
    printf("%s\n",binary);
    printf("sizeofbinary:%d\n",length);


    for(index ; index < length ; index++) {
        dec = (int) binary[index] - '0';

        sum += (int)pow(2,length-index-1)*dec;  // 1101 = 2*3*1 + 2*2+1 + 2*1+0 + 2*0+1

        printf("%d ", dec);
    }
    printf("\n10 decimal:%d\n",sum);

    }


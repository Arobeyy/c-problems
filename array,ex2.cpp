    #include <stdio.h>

    int main(){
        int x[7] = {-99,45,100,37,89,-327,245};
        int max = x[0], i;

        for(i = 1; i < 7; i++){
            if(x[i] > max)
                max = x[i];
        }
        printf("Max value is : %d\n", max);
        return 0;
    }
//-99
//45 > -99 =45
// 100 > 45 = 100
// 37 > 100 = 100
// 89 > 100 = 100
// -327 > 100 = 100
// 245 > 100 = 245

#include <stdio.h>
    int main(){
        int i = 0;

        while (i <= 10)
        {
            if(i % 2 != 0)
            {
                printf("O número %d é impar!\n", i);
            }

            i++;
        }
        
    return 0;
    }
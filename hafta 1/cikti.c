#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int x=5;
int main(int argc, char *argv[]) {
    {
        int x=10,y=20;
        {
            printf("x = %d, y = %d\n",x,y);
            {
                int y = 40;
                x++;
                y++;
                printf("x = %d, y = %d\n",x,y);
            }
            
            printf("x = %d, y = %d\n",x,y);
        }
        
    }
    
    printf("x = %d",x);
    
	return 0;
}

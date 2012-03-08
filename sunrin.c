//1학년 4반 21번 엄민석입니다.다시 구현 했습니다.
#include <stdio.h>

int main(int argc, char **argv){
    int tape[99];
    int *head = tape;
	int i;
    char curMconfig;

    FILE *fp;
    fp = fopen(argv[1], "r");

    while((curMconfig=fgetc(fp))!=-1){
        switch(curMconfig){
            case '>':
                head++;
                break;
            case '<':
                head--;
                break;
            case '!':
                printf("%d\n", *head);
                break;
            case '?':
                scanf("%d", head);
                break;
            case '+':
                ++*head;
                break;
            case '-':
                --*head;
                break;
			case '*':
				for(i = 0 ; i < *head ; i++)
					printf("*");
				break;
        }
    }
    fclose(fp);

}
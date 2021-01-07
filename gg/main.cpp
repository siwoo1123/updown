#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int modeChanger()
{
    int mod, sel;
    
    while (1) {
        puts("1. 연습모드 (1 ~ 1000, 10, 정답 공개)");
        puts("2. 이지모드 (0 ~ 10, 5)");
        puts("3. 하드모드 (0 ~ 100, 5)");
        puts("4. 불가능모드 (0 ~ 1000, 3)");
        
        printf("모드를 선택해주세요 (숫자형식으로) : ");
        scanf("%d", &sel);
        
        if (sel == 1) {
            puts("연습모드를 시작합니다.");
            mod = 1;
            break;
        } else if (sel == 2) {
            puts("이지모드를 시작합니다.");
            mod = 2;
            break;
        } else if (sel == 3) {
            puts("하드모드를 시작합니다.");
            mod = 3;
            break;
        } else if (sel == 4) {
            puts("불가능모드를 시작합니다.");
            mod = 4;
            break;
        } else {
            puts("다시 선택해주세요.\n");
        }
    }
    
    return mod;
}

void game(int mod)
{
    srand(time(NULL));
    
    int randomNumber;
    int ipt;
    
    if (mod == 1) {
        randomNumber = rand() % 1000;
        for (int i = 0; i < 10; i++) {
            printf("숫자를 입력하세요(답 : %d, 남은 기회 : %d) : ", randomNumber, 10 - i);
            // printf("숫자를 입력하세요 (남은 기회 : %d) : ", i);
            scanf("%d", &ipt);
            
            if(ipt == randomNumber) {
                printf("성공!!!!\n");
                return;
            } else {
                if (ipt > randomNumber) {
                    puts("down!");
                } else if (ipt < randomNumber) {
                    puts("up!");
                }
            }
        }
    } else if (mod == 2) {
        randomNumber = rand() % 10;
        for (int i = 0; i < 5; i++) {
            printf("숫자를 입력하세요 (남은 기회 : %d) : ", 5 - i);
            scanf("%d", &ipt);
            
            if(ipt == randomNumber) {
                printf("성공!!!!\n");
                return;
            } else {
                if (ipt > randomNumber) {
                    puts("down!");
                } else if (ipt < randomNumber) {
                    puts("up!");
                }
            }
        }
    } else if (mod == 3) {
        randomNumber = rand() % 100;
        for (int i = 0; i < 5; i++) {
            printf("숫자를 입력하세요 (남은 기회 : %d) : ", 5 - i);
            scanf("%d", &ipt);
            
            if(ipt == randomNumber) {
                printf("성공!!!!\n");
                return;
            } else {
                if (ipt > randomNumber) {
                    puts("down!");
                } else if (ipt < randomNumber) {
                    puts("up!");
                }
            }
        }
    }  else if (mod == 4) {
        randomNumber = rand() % 1000;
        for (int i = 0; i < 3; i++) {
            printf("숫자를 입력하세요 (남은 기회 : %d) : ", 3 - i);
            scanf("%d", &ipt);
            
            if(ipt == randomNumber) {
                printf("성공!!!!\n");
                return;
            } else {
                if (ipt > randomNumber) {
                    puts("down!");
                } else if (ipt < randomNumber) {
                    puts("up!");
                }
            }
        }
    }
    printf("실패!\n");
}

int main()
{
    int mod;
    // int randomNumber = rand() % 100;
    
    mod = modeChanger();
    
    game(mod);
    
    return 0;
}

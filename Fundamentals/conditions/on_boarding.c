//Your program must destroy the enemy ships by shooting the closest enemy on each turn.
//link: https://www.codingame.com/ide/puzzle/onboarding

int main(void)
{

    // game loop
    while (1) {
        char enemy1[257]; // name of enemy 1
        scanf("%s", enemy1);
        int dist1; // distance to enemy 1
        scanf("%d", &dist1);
        char enemy2[257]; // name of enemy 2
        scanf("%s", enemy2);
        int dist2; // distance to enemy 2
        scanf("%d", &dist2);


        if (dist1 < dist2) {
            printf("%s\n", enemy1);
        } else {
            printf("%s\n", enemy2);
        }

    }

    return 0;
}

int main()
{
    int n = 10;
    int x = n/2, y = n/2;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < n; j++) {
            if((i == 1 || i == n) && j == n/2)
                printf("*");
            else if(j == x)
                printf("/");
            else if(j == y)
                printf("\\");
            else 
                printf(" ");
        }
        
        if(i == n/2) {
            int t = x;
            x = y;
            y = t;
        }
        else {
            x--;
            y++;
        }
        
        printf("\n");
    }
    return 0;
}
// this problem is solved by combinatorial, the fractorial may overflow,
// but the issue can be solved by big number algorithm.

int uniquePaths(int m, int n){

    if(n < 1 || m < 1) return 0;
    else if(n == 1 || m == 1) return 1;
    m = m - 1;
    n = n - 1;
    int i, k = m+n;
    printf("%d  %d  %d\n", k, m, n);
    if(m >= n)
    {
        for(i=k; i>m+1; i--) k = k*(i-1);
        for(i=n; i>1; i--) n = n*(i-1);
        printf("m >= n, %d  %d  %d\n", k, m, n);
        return k/n;
    }
    else
    {
        for(i=k; i>n+1; i--) k = k*(i-1);
        for(i=m; i>1; i--) m = m*(i-1);
        printf("m < n,%d  %d  %d\n", k, m, n);
        return k/m;
    }
}

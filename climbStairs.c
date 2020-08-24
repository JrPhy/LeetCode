int climbStairs(int n){
    if(n <= 2) return n;
    //a1 = 1
    //a2 = 2
    //a_n = a_(n-1) + a_(n-2)
    int i, an1 = 1, an2 = 2, an;
    for(i=3; i<n+1; i++)
    {
        an = an1 + an2;
        an1 = an2;
        an2 = an;
    }
    return an;
}

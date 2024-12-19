
double my_pow(double n, int m) {
    if (m > 1)
        return my_pow(n*n, m-1);
    if (m == 1)
        return n;
    if (m == 0)
        return 1;
    if (m < 0) {
        double res = 1;
        for (int i = 0; i > m; i--) {
            res = 1 / n;
        }
        return res;
    }
}
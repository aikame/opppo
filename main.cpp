
double my_pow_bug_fix(double n, int m) {
    double res = 1;
    if (m > 0) {
        while (m) {
            if (m % 2 == 0) {
                m /= 2;
                n *= n;
            }
            else {
                n--;
                res *= n;
            }
        }
        return res;
    }
    if (m < 0) {
        double res = 1;
        for (int i = 0; i > m; i--) {
            res = 1 / n;
        }
        return res;
    }
}

double my_pow(double n, unsigned int m) {
    long res = 1;
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
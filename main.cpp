
double my_pow(double n, unsigned int m) {
    if (m > 1)
        return my_pow(n*n, m-1);
    if (m == 1)
        return n;
    if (m == 0)
        return 1;
}
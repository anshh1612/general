int subtract(int n1, int n2) {
    if (n1 > n2)
        return n1 + (~n2 + 1);

    else if (n2 > n1)
        return n2 + (~n1 + 1);

    else
        return 0;
}

int expression_matter (int a, int b, int c) {
    if (a==1) ++b;
    if (c==1) ++b;
    if (b==1) if (a<c) ++a; else ++c;
    return a*b*c;
}
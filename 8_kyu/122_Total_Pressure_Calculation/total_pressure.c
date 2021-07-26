double total_pressure(double mM1, double mM2, double gM1, double gM2, double v, double t) {
    return (gM1 / mM1 + gM2 / mM2) * 0.082 * (t + 273.15) / v;
}
double solution(const double* values, const char** units) {
    int             i = 0;
    double          objects[3] = {values[0], values[1], values[2]};
    const double    GRAVITY = 6.67E-11;

    while (i < 3){
        if(units[i] == "g") objects[i] /= 1000.0;
        else if(units[i] == "mg") objects[i] /= 1E+6;
        else if(units[i] == "μg") objects[i] /= 1E+9;
        else if(units[i] == "lb") objects[i] *= 0.453592;
        else if(units[i] == "cm") objects[i] /= 100.0;
        else if(units[i] == "mm") objects[i] /= 1000.0;
        else if(units[i] == "μm") objects[i] /= 1E+6;
        else if(units[i] == "ft") objects[i] *= 0.3048;
        i++;
    }

    return (GRAVITY * objects[0] * objects[1]) / pow(objects[2], 2);
}
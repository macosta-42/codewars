int enough(int cap, int on, int wait) {
    return (on + wait > cap) ? on + wait - cap : 0 ;
}
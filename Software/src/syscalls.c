
/*int _fstat(int file, struct stat *st) {
    st->st_mode = S_IFCHR;
    return 0;
}*/

char* _sbrk(int incr) {
    extern char _end;
    static char *heap_end;
    char *prev_heap_end;

    if (heap_end == 0) {

        heap_end = &_end;
    }

    prev_heap_end = heap_end;
    heap_end += incr;
    return (char*) prev_heap_end;
}

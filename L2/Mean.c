#include <stdio.h>

BEGIN
    count <-- 0
    sum <-- 0
    array <-- input the size of array (a)

    IF count > 0:
        WHILE count < a:
            READ a value
            sum = sum + value of a
            count + 1
            a - 1
        ENDWHILE
    ENDIF

    mean = sum / count
END
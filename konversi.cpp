#include "konversi.h"

const double faktorKeMeter[] = {
    1000,    // KM
    100,     // HM
    10,      // DAM
    1,       // M
    0.1,     // DM
    0.01,    // CM
    0.001    // MM
};

double keMeter(double nilai, int asal)
{
    return nilai * faktorKeMeter[asal - 1];
}

double dariMeter(double meter, int tujuan)
{
    return meter / faktorKeMeter[tujuan - 1];
}


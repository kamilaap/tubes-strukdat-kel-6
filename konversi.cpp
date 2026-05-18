#include "konversi.h"
double keMeter(double nilai, int asal)
{
    switch(asal)
    {
        case 1: return nilai * 1000; // KM
        case 2: return nilai * 100;  // HM
        case 3: return nilai * 10;   // DAM
        case 4: return nilai;        // M
        case 5: return nilai / 10;   // DM
        case 6: return nilai / 100;  // CM
        case 7: return nilai / 1000; // MM
        default: return 0;
    }
}

double dariMeter(double meter, int tujuan)
{
    switch(tujuan)
    {
        case 1: return meter / 1000; // KM
        case 2: return meter / 100;  // HM
        case 3: return meter / 10;   // DAM
        case 4: return meter;        // M
        case 5: return meter * 10;   // DM
        case 6: return meter * 100;  // CM
        case 7: return meter * 1000; // MM
        default: return 0;
    }
}



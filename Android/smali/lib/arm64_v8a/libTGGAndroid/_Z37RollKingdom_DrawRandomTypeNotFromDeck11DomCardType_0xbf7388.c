// 函数: _Z37RollKingdom_DrawRandomTypeNotFromDeck11DomCardType
// 地址: 0xbf7388
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1
void* x21 = *(gPregameContext + 0x18)
int32_t x20 = *gPregameContext
void* var_68
int32_t x0_1 = DomGetExpansions(&var_68)
int32_t var_cf4
int32_t var_cf0[0x320]
void* var_70

if (x0_1 s<= 0)
    var_cf4 = 0
else
    int64_t i = 0
    uint64_t x24_1 = 0
    
    do
        int32_t j_4 = DomExpGet(zx.q(*(var_68 + i * 0x28)), &var_70)
        
        if (j_4 s>= 1)
            uint64_t j_2 = zx.q(j_4)
            int64_t* x9_3 = var_70 + 0xc8
            uint64_t j
            
            do
                int64_t x10_1 = *x9_3
                
                if ((x10_1 & 0x10000) == 0 && *(x9_3 - 0xc4) s<= x20 && (x10_1 & x19) != 0
                        && x9_3[-0x18].d s> x20)
                    var_cf0[sx.q(x24_1.d)] = x9_3[-1].d
                    x24_1 = zx.q(x24_1.d + 1)
                
                j = j_2
                j_2 -= 1
                x9_3 = &x9_3[0xf0]
            while (j != 1)
        
        i += 1
    while (i != zx.q(x0_1))
    
    var_cf4 = x24_1.d
    
    if (x24_1.d s>= 1)
        DomKingdom* x20_1 = *(gPregameContext + 0x20)
        int32_t x25_1 = 0
        int32_t x27_1 = x24_1.d
        
        do
            if ((IsInKingdom(x20_1, zx.q(var_cf0[sx.q(x25_1)])) & 1) != 0)
                x24_1 = sx.q(x27_1) - 1
                int64_t x9_4 = sx.q(x25_1)
                x25_1 -= 1
                x27_1 = x24_1.d
                var_cf0[x9_4] = var_cf0[x24_1]
            
            x25_1 += 1
        while (x25_1 s< x27_1)
        
        var_cf4 = x24_1.d

FilterDisallowedCards(zx.q(*gPregameContext), *(gPregameContext + 0x28), &var_cf0, &var_cf4)
uint64_t x8_4 = zx.q(var_cf4)

if (x8_4.d s>= 1)
    int32_t x9_5 = 0
    int32_t x11_3 = x8_4.d
    int32_t* x10_5 = *(gPregameContext + 0x28) + 0xc04
    
    do
        int64_t i_1 = 0
        int64_t x12_1 = sx.q(x9_5)
        
        do
            int32_t x15_1 = *(x10_5 + i_1)
            
            if (x15_1 == 0)
                break
            
            if (x15_1 == var_cf0[sx.q(x9_5)])
                x8_4 = sx.q(x11_3) - 1
                x9_5 -= 1
                var_cf0[x12_1] = var_cf0[x8_4]
                x11_3 = x8_4.d
                break
            
            i_1 += 4
        while (i_1 != 0xaf0)
        
        x9_5 += 1
    while (x9_5 s< x11_3)

uint64_t x20_2 = zx.q(x8_4.d)

if (x8_4.d == 0)
    int32_t x24_2 = *gPregameContext
    int32_t x0_10 = DomGetExpansions(&var_68)
    
    if (x0_10 s<= 0)
        x20_2 = 0
        var_cf4 = 0
    else
        int64_t i_2 = 0
        x20_2 = 0
        
        do
            int32_t j_5 = DomExpGet(zx.q(*(var_68 + i_2 * 0x28)), &var_70)
            
            if (j_5 s>= 1)
                uint64_t j_3 = zx.q(j_5)
                void* x9_10 = var_70 + 0xc8
                uint64_t j_1
                
                do
                    int64_t x10_7 = *x9_10
                    
                    if ((x10_7 & 0x10000) == 0 && *(x9_10 - 0xc4) s<= x24_2 && (x10_7 & x19) != 0
                            && *(x9_10 - 0xc0) s> x24_2)
                        var_cf0[sx.q(x20_2.d)] = *(x9_10 - 8)
                        x20_2 = zx.q(x20_2.d + 1)
                    
                    j_1 = j_3
                    j_3 -= 1
                    x9_10 += 0x780
                while (j_1 != 1)
            
            i_2 += 1
        while (i_2 != zx.q(x0_10))
        
        if (x20_2.d s>= 1)
            DomKingdom* x19_1 = *(gPregameContext + 0x20)
            int32_t x23_1 = 0
            int32_t x25_2 = x20_2.d
            
            do
                if ((IsInKingdom(x19_1, zx.q(var_cf0[sx.q(x23_1)])) & 1) != 0)
                    x20_2 = sx.q(x25_2) - 1
                    int64_t x9_18 = sx.q(x23_1)
                    x23_1 -= 1
                    x25_2 = x20_2.d
                    var_cf0[x9_18] = var_cf0[x20_2]
                
                x23_1 += 1
            while (x23_1 s< x25_2)
            
            var_cf4 = x20_2.d

int32_t i_7 = var_cf0[sx.q(RandomInt(*(gPregameContext + 0x10), x20_2.d))]
int32_t i_5 = GetSplitPileSource(zx.q(i_7))
uint64_t x9_6 = zx.q(*(x21 + 0xc80))
int32_t i_3

i_3 = i_5 == 0 ? i_7 : i_5

uint64_t x9_7

if (x9_6.d s>= 1)
    uint64_t x11_5 = x9_6
    void* x10_6 = x21
    
    while (*x10_6 != i_3)
        uint64_t temp2_1 = x11_5
        x11_5 -= 1
        x10_6 += 4
        
        if (temp2_1 == 1)
            goto label_bf75ac
    
    *(x21 + 0xc80) = x9_6.d - 1
    *x10_6 = *(x21 + ((sx.q(x9_6.d) - 1) << 2))
    x9_7 = zx.q(*(x21 + 0x1904))
    
    if (x9_7.d s< 1)
        goto label_bf76a8
    
    goto label_bf7688

label_bf75ac:
x9_7 = zx.q(*(x21 + 0x1904))
uint64_t i_8

if (x9_7.d s>= 1)
label_bf7688:
    void* x10_10 = x21 + 0xc84
    uint64_t x11_8 = x9_7
    
    while (*x10_10 != i_3)
        uint64_t temp3_1 = x11_8
        x11_8 -= 1
        x10_10 += 4
        
        if (temp3_1 == 1)
            goto label_bf76a8
    
    *(x21 + 0x1904) = x9_7.d - 1
    *x10_10 = *(x21 + ((sx.q(x9_7.d) - 1) << 2) + 0xc84)
    i_8 = zx.q(*(x21 + 0x2588))
    
    if (i_8.d s>= 1)
        goto label_bf76e0
else
label_bf76a8:
    i_8 = zx.q(*(x21 + 0x2588))
    
    if (i_8.d s>= 1)
    label_bf76e0:
        void* x10_11 = x21 + 0x1908
        uint64_t i_6 = i_8
        uint64_t i_4
        
        do
            if (*x10_11 == i_3)
                *(x21 + 0x2588) = i_8.d - 1
                *x10_11 = *(x21 + ((sx.q(i_8.d) - 1) << 2) + 0x1908)
                break
            
            i_4 = i_6
            i_6 -= 1
            x10_11 += 4
        while (i_4 != 1)
return zx.q(i_7)

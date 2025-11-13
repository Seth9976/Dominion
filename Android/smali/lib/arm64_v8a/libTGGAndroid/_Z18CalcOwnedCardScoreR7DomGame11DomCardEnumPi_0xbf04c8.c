// 函数: _Z18CalcOwnedCardScoreR7DomGame11DomCardEnumPi
// 地址: 0xbf04c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(arg1 + 0xd50)
int32_t x8_4 = (arg2 + (x22 << 0x10)) s% 0x3e5
int32_t* x9 = *(&data_1838a20 + (sx.q(x8_4) << 3))
int32_t x19 = arg2
DomGame& x20 = arg1
uint64_t x8_6
DomGame& x22_1

if (x9 != 0)
    while (*x9 != x19 || x9[1] != x22)
        x9 = *(x9 + 0x10)
        
        if (x9 == 0)
            goto label_bf0530
    
    x22_1 = *(x9 + 8)
    x8_6 = zx.q(*(x20 + 0xd40))
    
    if (x8_6.d s>= 1)
        goto label_bf05a8
else
label_bf0530:
    DomDefGetSlow(zx.q(x19), zx.q(x22))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_5 = sx.q(x8_4) << 3
    int64_t x9_1 = *(&data_1838a20 + x8_5)
    *x0_1 = x19
    x0_1[1] = x22
    *(&data_1838a20 + x8_5) = x0_1
    *(x0_1 + 0x10) = x9_1
    arg1 = DomDefGetSlow(zx.q(x19), zx.q(x22))
    x22_1 = arg1
    *(x0_1 + 8) = arg1
    x8_6 = zx.q(*(x20 + 0xd40))
    
    if (x8_6.d s>= 1)
    label_bf05a8:
        int64_t x23_2 = 0
        
        do
            arg3[x23_2] = 0
            arg1 = CountOngoing(x20, zx.q(x23_2.d), 0x22, PileSource(x20, zx.q(*(x22_1 + 0xc0))), 0)
            
            if (arg1.d s>= 1)
                arg3[x23_2] += 1
            
            x8_6 = sx.q(*(x20 + 0xd40))
            x23_2 += 1
        while (x23_2 s< x8_6)

if (*(x22_1 + 0xd8) != 0 && x8_6.d s>= 1)
    int64_t i = 0
    
    do
        int64_t var_48 = 0
        DomPushContext(x20, zx.q(i.d), &var_48)
        int32_t x0_7 = (*(x22_1 + 0xd8))()
        arg3[i] += x0_7
        void* __offset(DomGame, 0x13000) x8_10 =
            __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
        i += 1
        *x8_10 -= 1
    while (i s< sx.q(*(x20 + 0xd40)))

int64_t x22_2 = 0

while (zx.d(*(x20 + 0x1284)) != 0)
    int32_t x25_2 = *(x20 + (x22_2 << 3) + 0x1074)
    
    if (x25_2 == 0)
        break
    
    if (x25_2 != x19)
        arg1 = PileSource(x20, zx.q(x19))
    
    if ((x25_2 == x19 || arg1.d == x25_2) && *(x20 + 0xd40) s>= 1)
        int64_t i_1 = 0
        
        do
            i_1 += 1
            arg3[i_1] += *(x20 + (x22_2 << 3) + 0x1078)
        while (i_1 s< sx.q(*(x20 + 0xd40)))
    
    x22_2 += 1
    
    if (x22_2 == 0x21)
        break

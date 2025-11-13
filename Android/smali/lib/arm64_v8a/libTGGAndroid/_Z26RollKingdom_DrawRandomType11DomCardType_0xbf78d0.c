// 函数: _Z26RollKingdom_DrawRandomType11DomCardType
// 地址: 0xbf78d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1

if (arg1 s> 0x3ffffffffff)
    if (x19 == 0x80000000000 || x19 == 0x40000000000)
        return RollKingdom_DrawRandomTypeNotFromDeck(x19) __tailcall
else if (x19 == 0x80000000 || x19 == 0x4000000000)
    return RollKingdom_DrawRandomTypeNotFromDeck(x19) __tailcall

RandomizerDeck* x20 = *(gPregameContext + 0x18)
int32_t x1_1 = *(x20 + 0xc80)
int32_t x8_1 = *(x20 + 0x1904)
uint64_t x21_1

while ((x8_1 | x1_1) != 0)
    RandomPCG* x0_2 = *(gPregameContext + 0x10)
    int64_t fp_1
    void* x8_2
    
    if (x1_1 != 0)
        x8_2 = x20 + (sx.q(RandomInt(x0_2, x1_1)) << 2)
        x21_1 = zx.q(*x8_2)
        fp_1 = 1
        int64_t x9_3 = sx.q(*(x20 + 0xc80)) - 1
        *(x20 + 0xc80) = x9_3.d
        *x8_2 = *(x20 + (x9_3 << 2))
    else if (x8_1 == 0)
        fp_1 = 0
        x21_1 = 0
    else
        x8_2 = x20 + 0xc84 + (sx.q(RandomInt(x0_2, x8_1)) << 2)
        x21_1 = zx.q(*x8_2)
        int64_t x9_6 = sx.q(*(x20 + 0x1904)) - 1
        *(x20 + 0x1904) = x9_6.d
        fp_1 = 2
        *x8_2 = *(x20 + 0xc84 + (x9_6 << 2))
    int32_t i = *gPregameContext
    int32_t x8_4 = (x21_1.d + (i << 0x10)) s% 0x3e5
    int32_t* x9_12 = *(&data_1838a20 + (sx.q(x8_4) << 3))
    
    if (x9_12 != 0)
        while (*x9_12 != x21_1.d || x9_12[1] != i)
            x9_12 = *(x9_12 + 0x10)
            
            if (x9_12 == 0)
                goto label_bf7a10
        
        if ((*(*(x9_12 + 8) + 0xc8) & x19) != 0)
            goto label_bf7acc
    else
    label_bf7a10:
        DomDefGetSlow(zx.q(x21_1.d), zx.q(i))
        int32_t* x0_6 = malloc(0x18)
        int64_t x8_5 = sx.q(x8_4) << 3
        int64_t x9_13 = *(&data_1838a20 + x8_5)
        *x0_6 = x21_1.d
        x0_6[1] = i
        *(&data_1838a20 + x8_5) = x0_6
        *(x0_6 + 0x10) = x9_13
        void* x0_8 = DomDefGetSlow(zx.q(x21_1.d), zx.q(i))
        *(x0_6 + 8) = x0_8
        
        if ((*(x0_8 + 0xc8) & x19) != 0)
            goto label_bf7acc
    
    int64_t x8_8 = sx.q(*(x20 + 0x3e8c))
    *(x20 + 0x3e8c) = x8_8.d + 1
    *(x20 + (x8_8 << 3) + 0x258c) = x21_1 << 0x20 | fp_1
    x1_1 = *(x20 + 0xc80)
    x8_1 = *(x20 + 0x1904)

x21_1 = 0
label_bf7acc:
RandomizerDeck_ReturnRejects(x20)
return zx.q(x21_1.d)

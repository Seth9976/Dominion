// 函数: _Z31RollKingdom_AddForcedLandscapes11DomCardTypeRK5Vec2Ii
// 地址: 0xbf66f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1
void* x9 = *(gPregameContext + 0x28)
int32_t x8 = *(x9 + 0xa0)

if (x8 != 0)
    if (x8 != 1)
        x8 = 0
    
    int32_t x10_1 = *(x9 + 0xe8)
    
    if (x10_1 != 0)
        if (x10_1 == 1)
            x8 += 1
        
        int32_t x10_2 = *(x9 + 0x130)
        
        if (x10_2 != 0)
            if (x10_2 == 1)
                x8 += 1
            
            if (*(x9 + 0x178) == 1)
                x8 += 1

int32_t x8_1 = x8 + arg3
int32_t x22

x22 = x8_1 s< 4 ? x8_1 : 4

int32_t x8_3
int32_t x9_2

if (x19 == 0)
    x9_2 = *(gPregameContext + 8)
    x8_3 = *arg2 - x9_2
else
    int32_t x0_1 = PregameCountExistingLandscapes(x19)
    arg1 = PregameCountForcedLandscapes(x19)
    x9_2 = *(gPregameContext + 8)
    x8_3 = arg1.d - x0_1 + *arg2

int32_t x8_5 = x8_3 & not.d(x8_3 s>> 0x1f)
int32_t x9_3 = x22 - x9_2
int32_t x25

x25 = x8_5 s< x9_3 ? x8_5 : x9_3

if (x25 s< 1)
    return 

void* x20_1

if (x19 == 0x80000000000 || x19 == 0x4000000000)
    x20_1 = &data_18c3468
    data_18c40e8 = 0
    data_18c4d6c = 0
    data_18c59f0 = 0
    data_18c72f4 = 0
    MakeSpecificLandscapeDeck(&data_18c3468, x19)
else
    x20_1 = *(gPregameContext + 0x18)

while (true)
    int32_t x8_9 = *(x20_1 + 0x2588)
    uint64_t x21_2
    int64_t fp_1
    RandomPCG* x0_3
    int32_t x1_1
    void* x8_10
    
    if (x8_9 == 0)
        x1_1 = *(x20_1 + 0xc80)
        int32_t x8_11 = *(x20_1 + 0x1904)
        
        if ((x8_11 | x1_1) == 0)
            break
        
        x0_3 = *(gPregameContext + 0x10)
        
        if (x1_1 != 0)
            goto label_bf68cc
        
        if (x8_11 == 0)
            fp_1 = 0
            x21_2 = 0
        else
            x8_10 = x20_1 + 0xc84 + (sx.q(RandomInt(x0_3, x8_11)) << 2)
            x21_2 = zx.q(*x8_10)
            int64_t x9_26 = sx.q(*(x20_1 + 0x1904)) - 1
            *(x20_1 + 0x1904) = x9_26.d
            fp_1 = 2
            *x8_10 = *(x20_1 + 0xc84 + (x9_26 << 2))
    else
        x1_1 = *(x20_1 + 0xc80)
        x0_3 = *(gPregameContext + 0x10)
        
        if (x1_1 != 0)
        label_bf68cc:
            x8_10 = x20_1 + (sx.q(RandomInt(x0_3, x1_1)) << 2)
            x21_2 = zx.q(*x8_10)
            fp_1 = 1
            int64_t x9_11 = sx.q(*(x20_1 + 0xc80)) - 1
            *(x20_1 + 0xc80) = x9_11.d
            *x8_10 = *(x20_1 + (x9_11 << 2))
        else
            fp_1 = 3
            x8_10 = x20_1 + 0x1908 + (sx.q(RandomInt(x0_3, x8_9)) << 2)
            x21_2 = zx.q(*x8_10)
            int64_t x9_7 = sx.q(*(x20_1 + 0x2588)) - 1
            *(x20_1 + 0x2588) = x9_7.d
            *x8_10 = *(x20_1 + 0x1908 + (x9_7 << 2))
    int32_t i = *gPregameContext
    int32_t x8_13 = (x21_2.d + (i << 0x10)) s% 0x3e5
    int32_t* x9_17 = *(&data_1838a20 + (sx.q(x8_13) << 3))
    void* x0_9
    
    if (x9_17 != 0)
        while (*x9_17 != x21_2.d || x9_17[1] != i)
            x9_17 = *(x9_17 + 0x10)
            
            if (x9_17 == 0)
                goto label_bf6928
        
        x0_9 = *(x9_17 + 8)
    else
    label_bf6928:
        DomDefGetSlow(zx.q(x21_2.d), zx.q(i))
        int32_t* x0_7 = malloc(0x18)
        int64_t x8_14 = sx.q(x8_13) << 3
        int64_t x9_18 = *(&data_1838a20 + x8_14)
        *x0_7 = x21_2.d
        x0_7[1] = i
        *(&data_1838a20 + x8_14) = x0_7
        *(x0_7 + 0x10) = x9_18
        x0_9 = DomDefGetSlow(zx.q(x21_2.d), zx.q(i))
        *(x0_7 + 8) = x0_9
    
    if ((*(x0_9 + 0xc8) & 0x9407f000400) != 0)
        if (x19 == 0)
        label_bf6a58:
            RollKingdom_AddLandscape(zx.q(x21_2.d), 0)
            x25 -= 1
            
            if (x25 == 0)
                break
            
            continue
        else
            int32_t i_1 = *gPregameContext
            int32_t x8_17 = (x21_2.d + (i_1 << 0x10)) s% 0x3e5
            int32_t* x9_23 = *(&data_1838a20 + (sx.q(x8_17) << 3))
            
            if (x9_23 != 0)
                while (*x9_23 != x21_2.d || x9_23[1] != i_1)
                    x9_23 = *(x9_23 + 0x10)
                    
                    if (x9_23 == 0)
                        goto label_bf69dc
                
                if ((*(*(x9_23 + 8) + 0xc8) & x19) != 0)
                    goto label_bf6a58
            else
            label_bf69dc:
                DomDefGetSlow(zx.q(x21_2.d), zx.q(i_1))
                int32_t* x0_11 = malloc(0x18)
                int64_t x8_18 = sx.q(x8_17) << 3
                int64_t x9_24 = *(&data_1838a20 + x8_18)
                *x0_11 = x21_2.d
                x0_11[1] = i_1
                *(&data_1838a20 + x8_18) = x0_11
                *(x0_11 + 0x10) = x9_24
                void* x0_13 = DomDefGetSlow(zx.q(x21_2.d), zx.q(i_1))
                *(x0_11 + 8) = x0_13
                
                if ((*(x0_13 + 0xc8) & x19) != 0)
                    goto label_bf6a58
    
    int64_t x8_7 = sx.q(*(x20_1 + 0x3e8c))
    *(x20_1 + 0x3e8c) = x8_7.d + 1
    *(x20_1 + (x8_7 << 3) + 0x258c) = x21_2 << 0x20 | fp_1
    
    if (x25 == 0)
        break

return RandomizerDeck_ReturnRejects(x20_1) __tailcall

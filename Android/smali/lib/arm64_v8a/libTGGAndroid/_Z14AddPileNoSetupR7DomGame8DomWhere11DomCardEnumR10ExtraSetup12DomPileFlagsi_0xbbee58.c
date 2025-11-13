// 函数: _Z14AddPileNoSetupR7DomGame8DomWhere11DomCardEnumR10ExtraSetup12DomPileFlagsi
// 地址: 0xbbee58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 == 0)
    return 

int32_t x21_1 = arg3
int32_t x19_1 = arg2
DomGame& x20_1 = arg1

if (arg2 != 2)
    AllocBoardPile(x20_1, zx.q(x19_1), zx.q(x21_1), zx.q(arg5))

int32_t var_4ac = 0
int64_t var_68
int32_t x0_2
int64_t x4
x0_2, x4 = HasPileSetupFn(x20_1, zx.q(x21_1), &var_68)

if ((x0_2 & 1) != 0)
    DomPushSetupContext(x20_1, zx.q(x21_1), arg4, 0xffffffff, x4)
    var_68(zx.q(x19_1))
    void* __offset(DomGame, 0x13000) x8_2 =
        __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
    *x8_2 -= 1
    return 

SimplePileSetup var_4a8
int128_t v0_1
arg1, v0_1 = HasPileSetup(x20_1, zx.q(x21_1), &var_4a8, &var_4ac)

if ((arg1.d & 1) == 0)
    int32_t x22_2 = *(x20_1 + 0xd50)
    int32_t x8_15 = (x21_1 + (x22_2 << 0x10)) s% 0x3e5
    int32_t* x9_6 = *(&data_1838a20 + (sx.q(x8_15) << 3))
    
    if (x9_6 != 0)
        while (*x9_6 != x21_1 || x9_6[1] != x22_2)
            x9_6 = *(x9_6 + 0x10)
            
            if (x9_6 == 0)
                goto label_bbf0d8
        
        arg1 = *(x9_6 + 8)
    else
    label_bbf0d8:
        DomDefGetSlow(zx.q(x21_1), zx.q(x22_2))
        int32_t* x0_10 = malloc(0x18)
        int64_t x8_16 = sx.q(x8_15) << 3
        int64_t x9_7 = *(&data_1838a20 + x8_16)
        *x0_10 = x21_1
        x0_10[1] = x22_2
        *(&data_1838a20 + x8_16) = x0_10
        *(x0_10 + 0x10) = x9_7
        arg1 = DomDefGetSlow(zx.q(x21_1), zx.q(x22_2))
        *(x0_10 + 8) = arg1
    
    int32_t i_18
    
    if (*(x20_1 + 0xd40) == 2)
        i_18 = 8
    else
        i_18 = 0xc
    
    int32_t i_15
    
    if ((zx.d(*(arg1 + 0xc8)) & 8) == 0)
        i_15 = 0xa
    else
        i_15 = i_18
    
    int32_t i_12
    
    i_12 = arg6 == 0 ? i_15 : arg6
    
    if (i_12 s>= 1)
        int32_t i
        
        do
            CardCreate(x20_1, zx.q(x21_1), zx.q(x19_1), 0xffffffff, 0)
            i = i_12
            i_12 -= 1
        while (i != 1)
    
    return 

uint64_t x8_3 = zx.q(var_4ac)

if (x8_3.d s< 1)
    return 

int32_t var_112c[0x4]
void var_111c

if (x21_1 != 0x104)
    int64_t x24_3 = 0
    
    do
        uint64_t x8_20 = zx.q(*(&var_4a8 + x24_3 * 0x88 + 0x80))
        int64_t x22_3
        
        if (x8_20.d s< 1)
            x22_3 = 0
        else
            int64_t x9_8 = 0
            x22_3 = 0
            
            do
                int32_t x11_4 = *(&var_4a8 + x24_3 * 0x88 + (x9_8 << 3) + 4)
                uint64_t x12_3 = zx.q(x11_4 - 1)
                
                if (x11_4 s>= 1)
                    int32_t x10_12 = (&var_4a8 + x24_3 * 0x88)[x9_8 * 2]
                    int64_t x14_3 = sx.q(x22_3.d)
                    int64_t i_17
                    
                    if (x12_3.d u>= 7)
                        i_17 = (x12_3 + 1) & 0x1fffffff8
                        v0_1.d = x10_12
                        v0_1:4.d = x10_12
                        v0_1:8.d = x10_12
                        v0_1:0xc.d = x10_12
                        x22_3 = i_17 + x14_3
                        void* x14_4 = &var_111c + (x14_3 << 2)
                        int64_t i_10 = i_17
                        int64_t i_1
                        
                        do
                            *(x14_4 - 0x10) = v0_1
                            *x14_4 = v0_1
                            i_1 = i_10
                            i_10 -= 8
                            x14_4 += 0x20
                        while (i_1 != 8)
                        
                        if (x12_3 + 1 != i_17)
                            goto label_bbf264
                    else
                        i_17 = 0
                        x22_3 = x14_3
                    label_bbf264:
                        int32_t i_8 = x11_4 - i_17.d
                        int64_t x12_4 = x22_3
                        int32_t i_2
                        
                        do
                            x22_3 = x12_4 + 1
                            i_2 = i_8
                            i_8 -= 1
                            var_112c[x12_4] = x10_12
                            x12_4 = x22_3
                        while (i_2 != 1)
                
                x9_8 += 1
            while (x9_8 != x8_20)
        
        if (zx.d(*(&var_4a8 + x24_3 * 0x88 + 0x84)) != 0)
            arg1, v0_1 = ShuffleIntsN(x20_1, &var_112c, x22_3.d, x22_3.d)
        
        if (x21_1 != 0x106)
            if (x21_1 != 0x105 || *(x20_1 + 0xd40) s>= 5)
                goto label_bbf2e0
            
            x22_3 = 0x28
            goto label_bbf2e8
        
        if (*(x20_1 + 0xd40) s>= 5)
        label_bbf2e0:
            
            if (x22_3.d s>= 1)
                goto label_bbf2e8
        else
            x22_3 = 0x1e
        label_bbf2e8:
            uint64_t i_13 = zx.q(x22_3.d)
            int32_t (* x23_3)[0x4] = &var_112c
            uint64_t i_3
            
            do
                int32_t x8_25 = *x23_3
                x23_3 = &(*x23_3)[1]
                uint64_t x1_10
                
                if (x8_25 == 0)
                    x1_10 = zx.q(x21_1)
                else
                    x1_10 = zx.q(x8_25)
                
                arg1, v0_1 = CardCreate(x20_1, x1_10, zx.q(x19_1), 0xffffffff, 0)
                i_3 = i_13
                i_13 -= 1
            while (i_3 != 1)
        
        x24_3 += 1
    while (x24_3 != x8_3)
else
    int64_t x24_1 = 0
    
    do
        uint64_t x8_6 = zx.q(*(&var_4a8 + x24_1 * 0x88 + 0x80))
        int64_t x21_2
        
        if (x8_6.d s<= 0)
            x21_2 = 0
        else
            int64_t x9_3 = 0
            x21_2 = 0
            
            do
                int32_t x11_1 = *(&var_4a8 + x24_1 * 0x88 + (x9_3 << 3) + 4)
                uint64_t x12_1 = zx.q(x11_1 - 1)
                
                if (x11_1 s>= 1)
                    int32_t x10_4 = (&var_4a8 + x24_1 * 0x88)[x9_3 * 2]
                    int64_t x14_1 = sx.q(x21_2.d)
                    int64_t i_16
                    
                    if (x12_1.d u>= 7)
                        i_16 = (x12_1 + 1) & 0x1fffffff8
                        v0_1.d = x10_4
                        v0_1:4.d = x10_4
                        v0_1:8.d = x10_4
                        v0_1:0xc.d = x10_4
                        x21_2 = i_16 + x14_1
                        void* x14_2 = &var_111c + (x14_1 << 2)
                        int64_t i_9 = i_16
                        int64_t i_4
                        
                        do
                            *(x14_2 - 0x10) = v0_1
                            *x14_2 = v0_1
                            i_4 = i_9
                            i_9 -= 8
                            x14_2 += 0x20
                        while (i_4 != 8)
                        
                        if (x12_1 + 1 != i_16)
                            goto label_bbeff4
                    else
                        i_16 = 0
                        x21_2 = x14_1
                    label_bbeff4:
                        int32_t i_7 = x11_1 - i_16.d
                        int64_t x12_2 = x21_2
                        int32_t i_5
                        
                        do
                            x21_2 = x12_2 + 1
                            i_5 = i_7
                            i_7 -= 1
                            var_112c[x12_2] = x10_4
                            x12_2 = x21_2
                        while (i_5 != 1)
                
                x9_3 += 1
            while (x9_3 != x8_6)
        
        if (zx.d(*(&var_4a8 + x24_1 * 0x88 + 0x84)) != 0)
            arg1, v0_1 = ShuffleIntsN(x20_1, &var_112c, x21_2.d, x21_2.d)
        
        int32_t x8_9 = *(x20_1 + 0xd40)
        int32_t x10_5
        
        x10_5 = x8_9 s< 5 ? 0x3c : x21_2.d
        
        int32_t i_14 = x10_5 + (*(arg4 + 0x48) - 7) * x8_9
        
        if (i_14 s>= 1)
            uint64_t i_11 = zx.q(i_14)
            int32_t (* x23_2)[0x4] = &var_112c
            uint64_t i_6
            
            do
                int32_t x8_10 = *x23_2
                x23_2 = &(*x23_2)[1]
                uint64_t x1_5
                
                if (x8_10 == 0)
                    x1_5 = 0x104
                else
                    x1_5 = zx.q(x8_10)
                
                arg1, v0_1 = CardCreate(x20_1, x1_5, zx.q(x19_1), 0xffffffff, 0)
                i_6 = i_11
                i_11 -= 1
            while (i_6 != 1)
        
        x24_1 += 1
    while (x24_1 != x8_3)

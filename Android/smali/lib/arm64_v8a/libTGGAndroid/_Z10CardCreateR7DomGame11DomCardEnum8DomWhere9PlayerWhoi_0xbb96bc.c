// 函数: _Z10CardCreateR7DomGame11DomCardEnum8DomWhere9PlayerWhoi
// 地址: 0xbb96bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x1528)
int32_t x23 = arg4
int32_t x24 = arg3
int32_t x25 = arg2

if (x8 s>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x8 = *(arg1 + 0x1528)

int32_t x26 = *(arg1 + 0xd50)
*(arg1 + 0x1528) = x8 + 1
int32_t x9_5 = (x25 + (x26 << 0x10)) s% 0x3e5
int32_t* x10_4 = *(&data_1838a20 + (sx.q(x9_5) << 3))
int64_t x21 = sx.q(x8)
int64_t x0_5

if (x10_4 != 0)
    while (*x10_4 != x25 || x10_4[1] != x26)
        x10_4 = *(x10_4 + 0x10)
        
        if (x10_4 == 0)
            goto label_bb97b0
    
    x0_5 = *(x10_4 + 8)
else
label_bb97b0:
    DomDefGetSlow(zx.q(x25), zx.q(x26))
    int32_t* x0_3 = malloc(0x18)
    int64_t x8_5 = sx.q(x9_5) << 3
    int64_t x9_6 = *(&data_1838a20 + x8_5)
    *x0_3 = x25
    x0_3[1] = x26
    *(&data_1838a20 + x8_5) = x0_3
    *(x0_3 + 0x10) = x9_6
    x0_5 = DomDefGetSlow(zx.q(x25), zx.q(x26))
    *(x0_3 + 8) = x0_5

void* x8_8 = arg1 + x21 * 0x68
*(arg1 + muls.dp.d(x8, 0x68) + 0x1a68) = x0_5
*(x8_8 + 0x1a70) = x25
*(x8_8 + 0x1a94) = x23
*(x8_8 + 0x1a9c) = x23
*(x8_8 + 0x1a98) = 0xffffffff
*(x8_8 + 0x1a90) = 0
*(x8_8 + 0x1ac8) = 0
*(x8_8 + 0x1a78) = 1
int32_t x8_9
int32_t x9_7

if (arg5 != 0)
    if (arg5 != 0xffffffff)
        CardAddAt(arg1, zx.q(x21.d), zx.q(x24), 0xffffffff, arg5)
        x8_9 = *(arg1 + 0x150c)
        x9_7 = x8_9 - 3
        
        if (x24 != 5)
            goto label_bb9894
        
        goto label_bb98f0
    
    CardAddTail(arg1, zx.q(x21.d), zx.q(x24), zx.q(x23))
    x8_9 = *(arg1 + 0x150c)
    x9_7 = x8_9 - 3
    
    if (x24 != 5)
        goto label_bb9894
    
    goto label_bb98f0

CardAddHead(arg1, zx.q(x21.d), zx.q(x24), zx.q(x23))
x8_9 = *(arg1 + 0x150c)
x9_7 = x8_9 - 3

if (x24 == 5)
label_bb98f0:
    
    if (x9_7 u>= 4)
        int64_t var_68_2 = 0
        int32_t var_70_2 = 0
        int32_t var_78_2 = 0
        int32_t var_80_2 = 0
        DomNotifyEffect(zx.q(x8_9 == 2 ? 1 : 0), 0, zx.q(x23), zx.q(x21.d), 5, zx.q(arg5), 0, 0)
else
label_bb9894:
    
    if (x9_7 u>= 4)
        int64_t var_68_1 = 0
        int32_t var_70_1 = 0
        int32_t var_78_1 = 0
        int32_t var_80_1 = 0
        DomNotifyEffect(zx.q(x8_9 == 2 ? 1 : 0), 0, zx.q(x23), zx.q(x21.d), zx.q(x24), zx.q(arg5), 
            0, 0)

int32_t x8_10 = *(arg1 + 0xd40)

if (x8_10 s>= 1)
    uint64_t x9_8 = zx.q(x21.d) & 0xffff
    
    if (x9_8.d u>= 0x320)
        int64_t i = 0
        
        do
            void* x0_12 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_15 = x0_12 + sx.q(*(x0_12 + 0x13000)) * 0x98
            *(*(x8_15 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_16 = *(x8_15 - 0x90)
            *(x8_16 + 0x1a2c) = *(x8_16 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
            *(arg1 + x9_8 * 0x68 + 0x1aa8 + (i << 2)) = 2
            int32_t x8_17 = *(arg1 + 0x150c)
            
            if (x8_17 - 3 u>= 4)
                int64_t var_68_4 = 0
                int32_t var_70_4 = 0
                int32_t var_78_4 = 0
                int32_t var_80_4 = 0
                DomNotifyEffect(zx.q(x8_17 == 2 ? 1 : 0), 0x28, zx.q(i.d), zx.q(x21.d), 2, 0, 0, 0)
            
            i += 1
        while (i s< sx.q(*(arg1 + 0xd40)))
    else
        int64_t i_1 = 0
        
        do
            *(arg1 + x9_8 * 0x68 + 0x1aa8 + (i_1 << 2)) = 2
            int32_t x9_10 = *(arg1 + 0x150c)
            
            if (x9_10 - 3 u>= 4)
                int64_t var_68_3 = 0
                int32_t var_70_3 = 0
                int32_t var_78_3 = 0
                int32_t var_80_3 = 0
                DomNotifyEffect(zx.q(x9_10 == 2 ? 1 : 0), 0x28, zx.q(i_1.d), zx.q(x21.d), 2, 0, 0, 
                    0)
                x8_10 = *(arg1 + 0xd40)
            
            i_1 += 1
        while (i_1 s< sx.q(x8_10))

return arg1 + muls.dp.d(x8, 0x68) + 0x1a68

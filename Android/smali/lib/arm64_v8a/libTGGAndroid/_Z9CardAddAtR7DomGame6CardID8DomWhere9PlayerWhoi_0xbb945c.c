// 函数: _Z9CardAddAtR7DomGame6CardID8DomWhere9PlayerWhoi
// 地址: 0xbb945c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg4
int32_t x22 = arg3
int32_t x20 = arg2

if (arg5 == 0)
    return CardAddHead(arg1, zx.q(x20), zx.q(x22), zx.q(x19)) __tailcall

int32_t i_1 = arg5
int32_t var_68
int32_t var_64
void* x27

if (x22 u> 0x48)
    x27 = arg1 + muls.dp.d(x19, 0x5a30) + (sx.q(x22) << 2) + 0x16fc8
    var_68 = x22
    var_64 = x20
    
    if (i_1 s>= 1)
    label_bb9594:
        int32_t i
        
        do
            uint64_t x27_1 = zx.q(*x27)
            
            if (x27_1.d u>= 0x320)
                void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_12 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
                *(*(x8_12 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_13 = *(x8_12 - 0x90)
                *(x8_13 + 0x1a2c) = *(x8_13 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            i = i_1
            i_1 -= 1
            x27 = arg1 + x27_1 * 0x68 + 0x1ac8
        while (i != 1)
else
    if (x22 == 0x48)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x27 = arg1 + (zx.q(x22) << 4) + 0x1534
    var_68 = x22
    var_64 = x20
    
    if (i_1 s>= 1)
        goto label_bb9594

int32_t x20_1 = var_64 & 0xffff

if (x20_1 u>= 0x320)
    void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_16 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
    *(*(x8_16 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_17 = *(x8_16 - 0x90)
    *(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

void* x9_8 = arg1 + mulu.dp.d(x20_1, 0x68)
*(x9_8 + 0x1a74) = var_68
int32_t x10_1 = *(arg1 + 0x19b4)
uint64_t x8_19 = zx.q(x20_1)
*(arg1 + 0x19b4) = x10_1 + 1
*(x9_8 + 0x1a78) = x10_1

if (x19 != 0xffffffff)
    *(arg1 + x8_19 * 0x68 + 0x1a98) = x19

void* x8_20 = arg1 + x8_19 * 0x68
*(x8_20 + 0x1a94) = x19
*(x8_20 + 0x1a9c) = x19
*(x8_20 + 0x1ac8) = *x27
*x27 = var_64

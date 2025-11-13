// 函数: _Z8UnrevealR7DomGameRK7CardIDs8DomWhereS4_
// 地址: 0xbcea00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0xc80)

if (x8 == 0)
    return 

uint64_t x21_1 = zx.q(*arg2)
int32_t x19_1 = arg4
int32_t x22_1 = arg3

if (x21_1.d u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x8 = *(arg2 + 0xc80)

if (x8 s< 1)
    return 

int32_t x21_2 = *(arg1 + x21_1 * 0x68 + 0x1a94)
uint64_t x26_1 = zx.q(x8)

if (x22_1 != 0x3ea)
    do
        uint64_t x23_2 = zx.q(*(arg2 - 4 + (x26_1 << 2)))
        
        if (x23_2.d u>= 0x320)
            void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_17 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
            *(*(x8_17 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_18 = *(x8_17 - 0x90)
            *(x8_18 + 0x1a2c) = *(x8_18 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x8_20 = *(arg1 + x23_2 * 0x68 + 0x1a74)
        int32_t x8_21
        
        if (x8_20 - 0x3ef u< 2)
            x8_21 = x8_20
        else
            x8_21 = 0x3ee
        
        if (x19_1 == 0x3ee)
            x19_1 = x8_21
        
        uint64_t x2_1
        int64_t x5_1
        int64_t x6_1
        
        if (x22_1 == 0x3eb)
            x2_1 = zx.q(*(arg2 - 4 + (x26_1 << 2)))
            int32_t var_68_2 = 0
            int64_t var_70_2 = 0
            int32_t var_78_2 = 0
            int32_t var_80_2 = 0
            int32_t var_88_2 = 0
            x5_1 = 0x3eb
            x6_1 = 4
        else
            if (x22_1 != 0x3ec)
                pthread_kill(pthread_self(), 6)
                DomGame* x0_9
                CardIDs* x1_2
                int64_t x2_2
                int64_t x3_2
                int64_t x4
                int64_t x5_2
                int64_t x6_2
                x0_9, x1_2, x2_2, x3_2, x4, x5_2, x6_2 = XNoReturn()
                return RevealTemp(x0_9, x1_2, x2_2, x3_2, x4, x5_2, x6_2) __tailcall
            
            x2_1 = zx.q(*(arg2 - 4 + (x26_1 << 2)))
            x5_1 = 0x3ec
            x6_1 = 8
            int32_t var_68_3 = 0
            int64_t var_70_3 = 0
            int32_t var_78_3 = 0
            int32_t var_80_3 = 0
            int32_t var_88_3 = 0
        
        int64_t var_90_2 = 0
        MoveCardTo(arg1, zx.q(x21_2), x2_1, zx.q(x19_1), 0xd, x5_1, x6_1, 0)
        x26_1 -= 1
    while (x26_1 + 1 s> 1)
else
    bool cond:1_1
    
    do
        uint64_t x2 = zx.q(*(arg2 - 4 + (x26_1 << 2)))
        int64_t fp_1 = x2 & 0xffff
        
        if (fp_1.d u>= 0x320)
            void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_11 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
            *(*(x8_11 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_12 = *(x8_11 - 0x90)
            *(x8_12 + 0x1a2c) = *(x8_12 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
            x2 = zx.q(*(arg2 - 4 + (x26_1 << 2)))
        
        int32_t x8_6 = *(arg1 + fp_1 * 0x68 + 0x1a74)
        int32_t x8_7
        
        if (x8_6 - 0x3ef u< 2)
            x8_7 = x8_6
        else
            x8_7 = 0x3ee
        
        if (x19_1 == 0x3ee)
            x19_1 = x8_7
        
        int32_t var_68_1 = 0
        int64_t var_70_1 = 0
        int32_t var_78_1 = 0
        int32_t var_80_1 = 0
        int32_t var_88_1 = 0
        int64_t var_90_1 = 0
        MoveCardTo(arg1, zx.q(x21_2), x2, zx.q(x19_1), 0xd, 0x3ea, 3, 0)
        cond:1_1 = x26_1 s<= 1
        x26_1 -= 1
    while (not(cond:1_1))

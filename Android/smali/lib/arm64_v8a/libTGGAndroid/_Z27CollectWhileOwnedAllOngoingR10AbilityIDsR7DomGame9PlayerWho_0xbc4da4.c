// 函数: _Z27CollectWhileOwnedAllOngoingR10AbilityIDsR7DomGame9PlayerWho
// 地址: 0xbc4da4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 == 0xffffffff)
    return 

int32_t x8_1 = *(arg2 + 0x1754)
int32_t x19_1 = arg3
int32_t var_ce8[0x320]

if (x8_1 != 0)
    var_ce8[0] = x8_1
    x8_1 = 1

int32_t x9_1 = *(arg2 + 0x1764)

if (x9_1 != 0)
    uint64_t x10_1 = zx.q(x8_1)
    x8_1 += 1
    *((-5 & &var_ce8) | (1 & x10_1) << 2) = x9_1

int32_t x9_2 = *(arg2 + 0x1774)

if (x9_2 != 0)
    var_ce8[zx.q(x8_1)] = x9_2
    x8_1 += 1

int32_t x9_3 = *(arg2 + 0x1784)

if (x9_3 == 0)
    int32_t var_68_2 = x8_1
    
    if (x8_1 != 0)
        goto label_bc4e3c
    
    return 

var_ce8[zx.q(x8_1)] = x9_3
x8_1 += 1
int32_t var_68_1 = x8_1
label_bc4e3c:
int32_t (* x27_1)[0x320] = &var_ce8
void* x9_4 = &var_ce8[zx.q(x8_1)]
void* var_cf8_1 = x9_4

do
    int32_t x25_1 = *x27_1
    
    if ((zx.d(*(*(arg2 + mulu.dp.d(x25_1, 0x68) + 0x1a68) + 0xcb)) & 8) != 0)
        uint64_t x22_1 = zx.q(x25_1.w)
        
        if (x22_1.d u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_7 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_8 = *(x8_7 - 0x90)
            *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        uint64_t x2 = zx.q(*(arg2 + x22_1 * 0x68 + 0x1a70))
        int32_t i_2
        int32_t x26_1
        
        if (x2.d != 0xe30)
            x26_1 = x19_1
            
            if ((ProjectIsOwned(arg2, zx.q(x19_1), x2, &i_2).d & 1) != 0)
            label_bc4f20:
                int32_t i_1 = i_2
                
                if (i_1 s>= 1)
                    int32_t i
                    
                    do
                        CardHasAllOngoing(arg1, arg2, zx.q(x19_1), zx.q(x26_1), zx.q(x25_1))
                        int32_t x25_2 = x25_1 & 0xffff
                        
                        if (x25_2 u>= 0x320)
                            void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_13 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
                            *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_14 = *(x8_13 - 0x90)
                            *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        x25_1 = *(arg2 + mulu.dp.d(x25_2, 0x68) + 0x1ac8)
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
        else
            x26_1 = *(arg2 + 0x19d4)
            
            if ((ProjectIsOwned(arg2, zx.q(x26_1), x2, &i_2).d & 1) != 0)
                goto label_bc4f20
        x9_4 = var_cf8_1
    
    x27_1 = &(*x27_1)[1]
while (x27_1 != x9_4)

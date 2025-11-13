// 函数: _Z10MovePileToR7DomGame9PlayerWho8DomWhereS1_S2_
// 地址: 0xbba14c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg5
int32_t x20 = arg4
int32_t x22 = arg3
void* x8_6
int64_t x9_3

if (arg3 u> 0x48)
    x8_6 = arg1 + muls.dp.d(arg2, 0x5a30) + (sx.q(x22) << 2)
    x9_3 = 0x16fc8
else
    if (arg3 == 0x48)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x8_6 = arg1 + (zx.q(x22) << 4)
    x9_3 = 0x1534

void* x23 = x8_6 + x9_3
int32_t i = *x23
int32_t* result = GetPileTail(arg1, zx.q(x19), zx.q(x20))
*result = *x23
*x23 = 0
int32_t fp_1

for (; i != 0; i = *(arg1 + zx.q(fp_1) * 0x68 + 0x1ac8))
    fp_1 = i & 0xffff
    
    if (fp_1 u>= 0x320)
        void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_11 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
        *(*(x8_11 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_12 = *(x8_11 - 0x90)
        *(x8_12 + 0x1a2c) = *(x8_12 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        result = XTrace("game thread resume (error)")
    
    void* x8_13 = arg1 + mulu.dp.d(fp_1, 0x68)
    *(x8_13 + 0x1a74) = x19
    *(x8_13 + 0x1a94) = x20
    *(x8_13 + 0x1a9c) = x20
    int32_t x8_14 = *(arg1 + 0x150c)
    
    if (x8_14 - 3 u>= 4)
        int64_t var_68_1 = 0
        int32_t var_70_1 = 0
        int32_t var_78_1 = 0
        int32_t var_80_1 = 0
        result = DomNotifyEffect(zx.q(x8_14 == 2 ? 1 : 0), 9, zx.q(x20), zx.q(i), zx.q(x19), 
            0xffffffff, 0, 0xf)

return result

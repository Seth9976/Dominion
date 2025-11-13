// 函数: _Z9ShiftPileR7DomGame8DomWhereS1_
// 地址: 0xbbfd50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x150c)
int32_t x19 = arg3
DomGame& x20 = arg1
void* x25 = arg1 + (zx.q(arg2) << 4) + 0x152c
int128_t v0

if (x8 - 3 u>= 4)
    int64_t var_68_1 = 0
    int32_t var_70_1 = 0
    int32_t var_78_1 = 0
    int32_t var_80_1 = 0
    arg1, v0 =
        DomNotifyEffect(zx.q(x8 == 2 ? 1 : 0), 0x2b, 0xffffffff, 0, zx.q(arg2), zx.q(x19), 0, 0)

int32_t fp_1

for (int32_t i = *(x20 + (zx.q(arg2) << 4) + 0x1534); i != 0; 
        i = *(x20 + zx.q(fp_1) * 0x68 + 0x1ac8))
    fp_1 = i & 0xffff
    
    if (fp_1 u>= 0x320)
        void* x0_2 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_5 = x0_2 + sx.q(*(x0_2 + 0x13000)) * 0x98
        *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_6 = *(x8_5 - 0x90)
        *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        arg1, v0 = XTrace("game thread resume (error)")
    
    *(x20 + mulu.dp.d(fp_1, 0x68) + 0x1a74) = x19
    int32_t x8_8 = *(x20 + 0x150c)
    
    if (x8_8 - 3 u>= 4)
        int64_t var_68_2 = 0
        int32_t var_70_2 = 0
        int32_t var_78_2 = 0
        int32_t var_80_2 = 0
        arg1, v0 =
            DomNotifyEffect(zx.q(x8_8 == 2 ? 1 : 0), 0x2a, 0xffffffff, zx.q(i), zx.q(x19), 0, 0, 0)

*(x20 + (zx.q(x19) << 4) + 0x152c) = *x25
*x25 = 0
*(x25 + 8) = 0

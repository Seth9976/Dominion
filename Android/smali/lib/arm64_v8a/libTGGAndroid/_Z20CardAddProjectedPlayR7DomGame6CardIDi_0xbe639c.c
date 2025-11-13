// 函数: _Z20CardAddProjectedPlayR7DomGame6CardIDi
// 地址: 0xbe639c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
void* x9_5
int32_t x22_1

if (arg3 == 2)
    x22_1 = x20 & 0xffff
    
    if (x22_1 u>= 0x320)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x9_5 = arg1 + mulu.dp.d(x22_1, 0x68)
    *(x9_5 + 0x1a90) = (*(x9_5 + 0x1a90) & 0xfffffff3) | 4
else if (arg3 s>= 3)
    x22_1 = x20 & 0xffff
    
    if (x22_1 u>= 0x320)
        void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_7 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
        *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_8 = *(x8_7 - 0x90)
        *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x9_5 = arg1 + mulu.dp.d(x22_1, 0x68)
    *(x9_5 + 0x1a90) = (*(x9_5 + 0x1a90) & 0xfffffff3) | 8
int32_t x8_11 = *(arg1 + 0x150c)

if (x8_11 - 3 u< 4)
    return 

int64_t var_38_1 = 0
int32_t var_40_1 = 0
int32_t var_48_1 = 0
int32_t var_50_1 = 0
DomNotifyEffect(zx.q(x8_11 == 2 ? 1 : 0), 0x17, 0xffffffff, zx.q(x20), 0, 0, zx.q(arg3), 0)

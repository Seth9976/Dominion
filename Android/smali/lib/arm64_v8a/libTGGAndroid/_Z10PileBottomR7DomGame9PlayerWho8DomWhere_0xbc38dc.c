// 函数: _Z10PileBottomR7DomGame9PlayerWho8DomWhere
// 地址: 0xbc38dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3
void* x8_6
int64_t x9_3

if (arg3 u> 0x48)
    x8_6 = arg1 + muls.dp.d(arg2, 0x5a30) + (sx.q(x20) << 2)
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
    
    x8_6 = arg1 + (zx.q(x20) << 4)
    x9_3 = 0x1534

int32_t i = *(x8_6 + x9_3)
int32_t i_1

do
    i_1 = i
    
    if (i == 0)
        break
    
    int32_t x27_1 = i_1 & 0xffff
    
    if (x27_1 u>= 0x320)
        void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_11 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
        *(*(x8_11 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_12 = *(x8_11 - 0x90)
        *(x8_12 + 0x1a2c) = *(x8_12 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    i = *(arg1 + mulu.dp.d(x27_1, 0x68) + 0x1ac8)
while (i != 0)

return zx.q(i_1)

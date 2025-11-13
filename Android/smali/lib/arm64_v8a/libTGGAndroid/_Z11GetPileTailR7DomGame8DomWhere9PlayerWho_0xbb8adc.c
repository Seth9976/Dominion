// 函数: _Z11GetPileTailR7DomGame8DomWhere9PlayerWho
// 地址: 0xbb8adc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int32_t i
void* result

if (arg2 u> 0x48)
    result = arg1 + muls.dp.d(arg3, 0x5a30) + (sx.q(x20) << 2) + 0x16fc8
    i = *result
    
    if (i == 0)
        return result
else
    if (arg2 == 0x48)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    result = arg1 + (zx.q(x20) << 4) + 0x1534
    i = *result
    
    if (i == 0)
        return result
void* x9_3

do
    int32_t x27_1 = i & 0xffff
    
    if (x27_1 u>= 0x320)
        void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_10 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
        *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_11 = *(x8_10 - 0x90)
        *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x9_3 = arg1 + mulu.dp.d(x27_1, 0x68)
    i = *(x9_3 + 0x1ac8)
while (i != 0)

return x9_3 + 0x1ac8

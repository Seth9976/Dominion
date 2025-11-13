// 函数: _Z13FindLandscapeR7DomGame11DomCardEnum
// 地址: 0xbf0e58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_2 = *(arg1 + 0x1754)
int32_t var_70[0x4]

if (i_2 != 0)
    var_70[0] = i_2
    i_2 = 1

int32_t x9 = *(arg1 + 0x1764)

if (x9 != 0)
    var_70[zx.q(i_2)] = x9
    i_2 += 1

int32_t x9_1 = *(arg1 + 0x1774)

if (x9_1 != 0)
    var_70[zx.q(i_2)] = x9_1
    i_2 += 1

int32_t x9_2 = *(arg1 + 0x1784)

if (x9_2 != 0)
    var_70[zx.q(i_2)] = x9_2
    i_2 += 1
label_bf0ee8:
    uint64_t i_1 = zx.q(i_2)
    int32_t (* x26_1)[0x4] = &var_70
    uint64_t i
    
    do
        int32_t x24_1 = *x26_1
        uint64_t x21_1 = zx.q(x24_1.w)
        
        if (x21_1.d u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_2 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_2 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_3 = *(x8_2 - 0x90)
            *(x8_3 + 0x1a2c) = *(x8_3 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(arg1 + x21_1 * 0x68 + 0x1a70) == arg2)
            return zx.q(x24_1)
        
        i = i_1
        i_1 -= 1
        x26_1 = &(*x26_1)[1]
    while (i != 1)
else if (i_2 s>= 1)
    goto label_bf0ee8

return 0

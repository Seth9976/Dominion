// 函数: _Z17AchivementDataGetR7DomGame9PlayerWho11DomCardEnum
// 地址: 0xbd9434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*(arg1 + 0x60808))

if (x10.d s>= 1)
    int64_t x8_1 = 0
    void* __offset(DomGame, 0x47a08) x11_1 = arg1 + 0x47a08
    
    do
        int32_t x12_1 = *x11_1
        
        if (x12_1 == 0)
            break
        
        if (x12_1 == arg3)
            return arg1 + x8_1 * 0x31c + muls.dp.d(arg2, 0x84) + 0x47a0c
        
        x8_1 += 1
        x11_1 += 0x31c
    while (x10 != x8_1)

*(arg1 + 0x60808) = x10.d + 1
*(arg1 + muls.dp.d(x10.d, 0x31c) + 0x47a08) = arg3
return arg1 + sx.q(x10.d) * 0x31c + muls.dp.d(arg2, 0x84) + 0x47a0c

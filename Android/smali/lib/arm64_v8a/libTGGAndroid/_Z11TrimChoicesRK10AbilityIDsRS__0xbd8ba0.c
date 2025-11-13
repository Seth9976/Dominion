// 函数: _Z11TrimChoicesRK10AbilityIDsRS_
// 地址: 0xbd8ba0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_3 = *(arg2 + 0x400)

if (x8_3 s< 1)
    return 

int32_t x9_1 = 0

do
    uint64_t x11_1 = zx.q(*(arg1 + 0x400))
    int64_t x10_1 = sx.q(x9_1)
    
    if (x11_1.d s< 1)
    label_bd8bbc:
        *(arg2 + 0x400) = x8_3 - 1
        x9_1 -= 1
        *(arg2 + (x10_1 << 2)) = *(arg2 + ((sx.q(x8_3) - 1) << 2))
        x8_3 = *(arg2 + 0x400)
    else
        AbilityIDs const& x13_1 = arg1
        
        while (*(arg2 + (x10_1 << 2)) != *x13_1)
            uint64_t temp0_1 = x11_1
            x11_1 -= 1
            x13_1 += 4
            
            if (temp0_1 == 1)
                goto label_bd8bbc
    
    x9_1 += 1
while (x9_1 s< x8_3)

// 函数: _Z12IsPlayEffectRK8DomYieldb
// 地址: 0xb223b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *(arg1 + 4)

if (x8_1 == 1)
    int32_t x9_1 = *(arg1 + 0x10)
    
    if (x9_1 s<= 0xa3)
        uint64_t x10_1 = zx.q(x9_1 - 1)
        
        if (x10_1.d u<= 0x21)
            switch (x10_1)
                case 0, 0x1e, 0x21
                    return zx.q(x8_1) & 1
                case 1
                    return (zx.q(arg2.d) ^ 1) & 1
        else
            uint64_t x10_2 = zx.q(x9_1 - 0x43)
            
            if (x10_2.d u> 0x31)
                if (x9_1 == 0x8f)
                    return zx.q(x8_1) & 1
            else if ((1 << x10_2 & 0x2000000080201) != 0 || x9_1 == 0x8f)
                return zx.q(x8_1) & 1
    else
        uint64_t x9_2 = zx.q(x9_1 - 0xa4)
        
        if (x9_2.d u<= 0x71)
            switch (x9_2)
                case 0, 2, 0xa, 0x2b, 0x32, 0x33, 0x47, 0x5b, 0x5c, 0x5e, 0x6b, 0x71
                    return zx.q(x8_1) & 1

return 0

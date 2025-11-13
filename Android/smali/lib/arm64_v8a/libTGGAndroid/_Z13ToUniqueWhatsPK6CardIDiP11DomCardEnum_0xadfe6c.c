// 函数: _Z13ToUniqueWhatsPK6CardIDiP11DomCardEnum
// 地址: 0xadfe6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20

if (arg2 s< 1)
    x20 = 0
else
    int64_t i = 0
    x20 = 0
    
    do
        int32_t j = CardWhat(*(DomGetContext() + 8), zx.q(*(arg1 + (i << 2))))
        uint64_t x8_1
        
        if (x20 s<= 0)
            x8_1 = sx.q(x20)
        label_adfea0:
            x20 += 1
            *(arg3 + (x8_1 << 2)) = j
        else
            x8_1 = zx.q(x20)
            DomCardEnum* x9_1 = arg3
            uint64_t x10_1 = x8_1
            
            while (*x9_1 != j)
                uint64_t temp0_1 = x10_1
                x10_1 -= 1
                x9_1 += 4
                
                if (temp0_1 == 1)
                    goto label_adfea0
        i += 1
    while (i != zx.q(arg2))

return zx.q(x20)

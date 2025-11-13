// 函数: _ZmIR7CardIDsRKS_
// 地址: 0xadd034
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_3 = *(arg2 + 0xc80)

if (x8_3 s< 1)
    return 

int64_t i = 0

do
    uint64_t j_2 = zx.q(*(arg1 + 0xc80))
    
    if (j_2.d s>= 1)
        uint64_t j_1 = j_2
        CardIDs& x11_1 = arg1
        uint64_t j
        
        do
            if (*x11_1 == *(arg2 + (i << 2)))
                *(arg1 + 0xc80) = j_2.d - 1
                *x11_1 = *(arg1 + ((sx.q(j_2.d) - 1) << 2))
                x8_3 = *(arg2 + 0xc80)
                break
            
            j = j_1
            j_1 -= 1
            x11_1 += 4
        while (j != 1)
    
    i += 1
while (i s< sx.q(x8_3))

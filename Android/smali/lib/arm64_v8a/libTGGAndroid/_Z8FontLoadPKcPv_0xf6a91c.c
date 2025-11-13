// 函数: _Z8FontLoadPKcPv
// 地址: 0xf6a91c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(arg2 + 0x48, 0xff, 0x200)
*(arg2 + 0x38) = 0
*(arg2 + 0x40) = 0
int32_t* result = XPooledCalloc(0x800)
int32_t x8 = *(arg2 + 0x1c)
*(arg2 + 0x38) = result
*(arg2 + 0x40) = 0xff

if (x8 != 0)
    void* x21_1 = *(arg2 + 0x20)
    
    if (*(x21_1 + 0x18) s>= 1)
        int64_t i = 0
        
        do
            int32_t j = (*(x21_1 + 0x20))[i * 9]
            
            if (j == 0)
                j = *(x21_1 + 0x14) + i.d
                
                if (j s<= 0x7f)
                    *(arg2 + 0x48 + (sx.q(j) << 2)) = i.d
                else
                label_f6aa00:
                    uint64_t j_1 = zx.q(j)
                    uint64_t x25_1 = zx.q(*(arg2 + 0x40)) & (j_1 | j_1 u>> 4)
                    int32_t* x8_6 = *(*(arg2 + 0x38) + (x25_1 << 3))
                    
                    if (x8_6 == 0)
                    label_f6aa2c:
                        result = XPooledMalloc(0x10)
                        *result = j
                        result[1] = i.d
                        uint64_t x9_4 = x25_1 << 3
                        *(result + 8) = *(*(arg2 + 0x38) + x9_4)
                        *(*(arg2 + 0x38) + x9_4) = result
                        *(arg2 + 0x44) += 1
                    else
                        while (j != *x8_6)
                            x8_6 = *(x8_6 + 8)
                            
                            if (x8_6 == 0)
                                goto label_f6aa2c
                        
                        x8_6[1] = i.d
            else
                if (j s> 0x7f)
                    goto label_f6aa00
                
                *(arg2 + 0x48 + (sx.q(j) << 2)) = i.d
            
            i += 1
        while (i s< sx.q(*(x21_1 + 0x18)))

return result

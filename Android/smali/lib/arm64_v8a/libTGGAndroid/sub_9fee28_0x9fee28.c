// 函数: sub_9fee28
// 地址: 0x9fee28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_40 = v9
int128_t result
result.d = fconvert.s(1f)

if (zx.d(*(arg1 + 0xe4)) == 0)
    if (zx.d(*(arg1 + 0xe5)) == 0)
        int32_t x9_1 = *(arg1 + 0xd8)
        *(arg1 + 0xe5) = 1
        *(arg1 + 0xac) = 0
        
        if (x9_1 s< 1)
            result.d = 0f
        else
            int64_t* x8_2 = *(arg1 + 0xd0)
            int64_t i = 0
            result.d = 0f
            
            do
                if (*(x8_2 + i * 0x70 + 0x64) != 0)
                    if (*(x8_2 + i * 0x70 + 0xc) s< 1)
                        v9.d = 0f
                    else
                        int64_t j = 0
                        v9.d = 0f
                        
                        do
                            float v0 = sub_9fee28(*(x8_2[i * 0xe] + (j << 3)))
                            x8_2 = *(arg1 + 0xd0)
                            j += 1
                            
                            if (v0 f> v9.d)
                                v9.d = v0
                            else
                                v9.d = v9.d
                        while (j s< sx.q(*(&x8_2[i * 0xe] + 0xc)))
                        
                        x9_1 = *(arg1 + 0xd8)
                    
                    result.d = result.d f+ v9.d f* *(x8_2 + i * 0x70 + 0x60)
                    *(arg1 + 0xac) = result.d
                
                i += 1
            while (i s< sx.q(x9_1))
    else
        result.d = *(arg1 + 0xac)

return result

// 函数: _Z20AnimationCrossedTimeP9Structuref
// 地址: 0xc7a664
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_5 = *(arg1 + 0x38)

if (x8_5 != 0)
    int64_t* i = *(x8_5 + 8)
    
    if (i != 0)
        do
            int32_t* x8 = *i
            i = i[1]
            
            if (not(x8[8] f< 0f))
                int32_t x10_1 = x8[0xa]
                
                if (x10_1 != 4 && x10_1 != 2)
                    float v1 = *x8
                    v1 - 0f
                    float v2
                    
                    if (not(v1 <= 0f))
                        v1 = x8[1]
                        v2 = x8[2]
                        v2 - v1
                        
                        if (not(v2 >= v1))
                            return zx.q(v2 < arg2 ? 1 : 0) & zx.q(v1 >= arg2 ? 1 : 0)
                        
                        if (not(v2 <= v1))
                            return zx.q(v2 < arg2 ? 1 : 0) | zx.q(v1 >= arg2 ? 1 : 0)
                    else if (not(v1 >= 0f))
                        v2 = x8[1]
                        v1 = x8[2]
                        
                        if (v1 <= v2)
                            return zx.q(v1 > arg2 ? 1 : 0) | zx.q(v2 <= arg2 ? 1 : 0)
                        
                        return zx.q(v1 > arg2 ? 1 : 0) & zx.q(v2 <= arg2 ? 1 : 0)
                    break
        while (i != 0)

return 0

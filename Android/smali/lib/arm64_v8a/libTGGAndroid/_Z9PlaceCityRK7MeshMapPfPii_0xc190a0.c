// 函数: _Z9PlaceCityRK7MeshMapPfPii
// 地址: 0xc190a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = data_18c7568.d
float v1 = data_18c7568:4.d
int32_t var_10010[0x4000]
float v2
float v3
float v5
float v6

if (arg4 s<= 0)
    int64_t i = 0
    void* x9_1 = arg1 + 8
    
    do
        if (*x9_1 <= 0f)
            *(&var_10010 + i) = 0xc97423f0
        else
            v2 = *(x9_1 - 8)
            
            if (v2 < float.s(0x3ccccccd) || v2 > float.s(0x3ffccccd))
                *(&var_10010 + i) = 0xc97423f0
            else
                v3 = *(x9_1 - 4)
                
                if (v3 < float.s(0x3ccccccd) || v3 > float.s(0x3f79999a))
                    *(&var_10010 + i) = 0xc97423f0
                else
                    v5 = float.s(0x3727c5ac)
                    v6 = float.s(0x3d4ccccd)
                    v2 = v6 / (fabs(v2 - v0) + v5 - v0)
                    *(&var_10010 + i) = sqrt(*(arg2 + i)) + v2 + v2 + v6 / (fabs(v3 - v1) + v5 - v1)
        
        i += 4
        x9_1 += 0xc
    while (i != 0x10000)
else
    int64_t x8 = 0
    
    while (true)
        if (not(*(arg1 + x8 * 0xc + 8) <= 0f))
            v2 = *(arg1 + x8 * 0xc)
            
            if (not(v2 < float.s(0x3ccccccd)) && not(v2 > float.s(0x3ffccccd)))
                v3 = *(arg1 + x8 * 0xc + 4)
                
                if (not(v3 < float.s(0x3ccccccd)) && not(v3 > float.s(0x3f79999a)))
                    v5 = float.s(0x3727c5ac)
                    v6 = float.s(0x3d4ccccd)
                    float v4 = v6 / (fabs(v2 - v0) + v5 - v0)
                    v4 = sqrt(arg2[x8]) + v4 + v4 + v6 / (fabs(v3 - v1) + v5 - v1)
                    var_10010[x8] = v4
                    uint64_t i_3 = zx.q(arg4)
                    int32_t* x5_1 = arg3
                    uint64_t i_1
                    
                    do
                        int64_t x6_1 = sx.q(*x5_1)
                        x5_1 = &x5_1[1]
                        i_1 = i_3
                        i_3 -= 1
                        float* x6_2 = arg1 + x6_1 * 0xc
                        v5 = v2 - *x6_2
                        v6 = v3 - x6_2[1]
                        v4 = v4
                            + float.s(0xbdcccccd) / (sqrt(v5 * v5 + v6 * v6) + float.s(0x3727c5ac))
                    while (i_1 != 1)
                    var_10010[x8] = v4
                    x8 += 1
                    
                    if (x8 == 0x4000)
                        break
                    
                    continue
        
        var_10010[x8] = 0xc97423f0
        x8 += 1
        
        if (x8 == 0x4000)
            break
uint64_t result = 0

for (int64_t i_2 = 1; i_2 != 0x4000; i_2 += 1)
    if (var_10010[i_2] f> var_10010[sx.q(result.d)])
        result = zx.q(i_2.d)
    else
        result = zx.q(result.d)

return result

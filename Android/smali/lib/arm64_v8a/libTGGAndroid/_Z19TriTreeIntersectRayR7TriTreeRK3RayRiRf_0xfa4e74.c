// 函数: _Z19TriTreeIntersectRayR7TriTreeRK3RayRiRf
// 地址: 0xfa4e74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg4 = 10000f
*arg3 = 0xffffffff
int64_t x8 = *arg1

if (x8 != 0)
    int32_t i_3 = 0
    int32_t i = 1
    int64_t var_2060 = x8
    void var_3064
    float var_2064
    
    do
        BBox* x23_1 = (&var_2060)[sx.q(i) - 1]
        
        if ((IntersectRayBBox(arg2, x23_1, &var_2064) & 1) == 0)
            i -= 1
            
            if (i_3 s> 0x3ff)
                break
        else if (*(x23_1 + 0x20) == 0)
            i -= 1
            *(&var_3064 + (sx.q(i_3) << 2)) = *(x23_1 + 0x24)
            i_3 += 1
            
            if (i_3 s> 0x3ff)
                break
        else
            (&var_2060)[sx.q(i) - 1] = *(x23_1 + 0x20)
            (&var_2060)[zx.q(i)] = *(x23_1 + 0x28)
            i += 1
            
            if (i_3 s> 0x3ff)
                break
    while (i s> 0)
    
    if (i_3 s>= 1)
        uint64_t i_2 = zx.q(i_3)
        int32_t* x27_1 = &var_3064
        uint64_t i_1
        
        do
            int32_t x28_2 = *x27_1
            int64_t x9_3 = *(arg1 + 0x10)
            int64_t x8_6 = *(arg1 + 0x18)
            int64_t x10_1 = sx.q(*(arg1 + 0x20))
            int32_t x11_1 = x28_2 * 3
            int64_t* x12_2 = x9_3 + x10_1 * sx.q(*(x8_6 + (sx.q(x11_1) << 1)))
            int64_t x8_7 = sx.q(*(x8_6 + (sx.q(x11_1 + 2) << 1)))
            int64_t* x11_3 = x9_3 + x10_1 * sx.q(*(x8_6 + (sx.q(x11_1 + 1) << 1)))
            int32_t var_2058_1 = x12_2[1].d
            var_2060 = *x12_2
            int64_t* x8_8 = x9_3 + x10_1 * x8_7
            int32_t var_204c_1 = x11_3[1].d
            int64_t var_2054_1 = *x11_3
            int32_t var_2040_1 = x8_8[1].d
            int64_t var_2048_1 = *x8_8
            
            if ((IntersectRayTri(arg2, &var_2060, &var_2064) & 1) != 0)
                float v0_1 = var_2064
                
                if (*arg3 == 0xffffffff || not(v0_1 >= *arg4))
                    *arg3 = x28_2
                    *arg4 = v0_1
            
            i_1 = i_2
            i_2 -= 1
            x27_1 = &x27_1[1]
        while (i_1 != 1)

return zx.q(*arg3 != 0xffffffff ? 1 : 0)

// 函数: _Z21RTreeIntersectFrustumR5RTreeRK13FrustumPlanesPii
// 地址: 0xfa4b00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1
int64_t var_2050[0x400]

if (x8 != 0)
    var_2050[0] = x8

int32_t x20

if (x8 == 0 || arg4 s< 1)
    x20 = 0
else
    x20 = 0
    
    for (int32_t i = 1; i s> 0; )
        BBox* x23_1 = var_2050[sx.q(i) - 1]
        
        if ((FrustumIntersectBox(arg2, x23_1) & 1) == 0)
            i -= 1
            
            if (x20 s>= arg4)
                break
        else if (*(x23_1 + 0x20) == 0)
            i -= 1
            arg3[sx.q(x20)] = *(x23_1 + 0x24)
            x20 += 1
            
            if (x20 s>= arg4)
                break
        else
            var_2050[sx.q(i) - 1] = *(x23_1 + 0x20)
            var_2050[zx.q(i)] = *(x23_1 + 0x28)
            i += 1
            
            if (x20 s>= arg4)
                break

return zx.q(x20)

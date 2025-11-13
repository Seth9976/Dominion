// 函数: _Z18RTreeIntersectRectR5RTreeRK4BBoxPii
// 地址: 0xfa48fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1

if (x8 == 0)
    return 0

uint64_t result = 0
int64_t var_2010[0x400]
var_2010[0] = x8

if (arg4 s>= 1)
    for (int32_t i = 1; i s> 0; )
        int32_t* x11_1 = var_2010[sx.q(i) - 1]
        
        if (x11_1[3] f< *arg2 || *x11_1 f> *(arg2 + 0xc) || x11_1[4] f< *(arg2 + 4)
                || x11_1[1] f> *(arg2 + 0x10) || x11_1[5] f< *(arg2 + 8)
                || not(x11_1[2] f<= *(arg2 + 0x14)))
            i -= 1
            
            if (result.d s>= arg4)
                break
        else if (x11_1[8] == 0)
            arg3[sx.q(result.d)] = x11_1[9]
            result = zx.q(result.d + 1)
            i -= 1
            
            if (result.d s>= arg4)
                break
        else
            var_2010[sx.q(i) - 1] = *(x11_1 + 0x20)
            var_2010[zx.q(i)] = *(x11_1 + 0x28)
            i += 1
            
            if (result.d s>= arg4)
                break

return result

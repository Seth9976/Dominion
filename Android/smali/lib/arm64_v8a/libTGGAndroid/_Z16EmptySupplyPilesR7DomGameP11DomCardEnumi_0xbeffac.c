// 函数: _Z16EmptySupplyPilesR7DomGameP11DomCardEnumi
// 地址: 0xbeffac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = 0
int64_t i_1 = -0x1a0
int64_t i

do
    void* x11_1 = arg1 + i_1
    int32_t x10_1 = *(x11_1 + 0x173c)
    
    if (x10_1 != 0 && *(x11_1 + 0x1744) == 0)
        bool cond:0_1 = result.d + 1 != arg3
        *(arg2 + (sx.q(result.d) << 2)) = x10_1
        result = zx.q(result.d + 1)
        
        if (not(cond:0_1))
            return zx.q(arg3)
    
    i = i_1
    i_1 += 0x10
while (i != -0x10)
return result

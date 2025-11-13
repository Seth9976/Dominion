// 函数: _Z11Choose5CostP11DomCardEnumi
// 地址: 0xa378f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s>= 1)
    int32_t x20_1 = 0
    uint64_t i_1 = zx.q(arg2)
    DomCardEnum* x25_1 = arg1
    int32_t var_cd0[0x320]
    uint64_t i
    
    do
        int32_t x8_2 = *(DomDefGet(zx.q(*x25_1), zx.q(*(*(DomGetContext() + 8) + 0xd50))) + 0xc4)
        int32_t var_cd8 = 5
        int32_t var_48 = x8_2
        
        if ((operator==(&var_48, &var_cd8) & 1) != 0)
            var_cd0[sx.q(x20_1)] = *x25_1
            x20_1 += 1
        
        i = i_1
        i_1 -= 1
        x25_1 += 4
    while (i != 1)
    
    if (x20_1 != 0)
        return zx.q(*(arg1 + (zx.q(var_cd0[sx.q(RandomInt(gRNG, x20_1))]) << 2)))

return 0

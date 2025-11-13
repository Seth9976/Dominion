// 函数: _Z15AIRandomSelectNP6CardIDR5DomAIS0_ii
// 地址: 0x9f3a2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_cd0[0x320]

if (arg4 s>= 1)
    memcpy(&var_cd0, arg3, zx.q(arg4) << 2)

if (arg5 s>= 1)
    int64_t i = 0
    
    do
        int64_t x9_1 = zx.q(RandomIntRange(gRNG, i.d, arg4 - 1)) << 0x20 s>> 0x1e
        int32_t x11_1 = var_cd0[i]
        i += 1
        var_cd0[i] = *(&var_cd0 + x9_1)
        *(&var_cd0 + x9_1) = x11_1
    while (zx.q(arg5) != i)

return memcpy(arg1, &var_cd0, zx.q(arg5) << 0x20 s>> 0x1e)

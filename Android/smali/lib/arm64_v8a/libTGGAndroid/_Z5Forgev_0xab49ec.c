// 函数: _Z5Forgev
// 地址: 0xab49ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

TrashUpTo(CountWhere(0x3ea), 0x4b, 0, nullptr)
int32_t var_38
uint64_t x0_3

if (var_38 s< 1)
    x0_3 = 0
else
    int64_t i = 0
    int32_t x20_1 = 0
    
    do
        int32_t var_cb8[0x320]
        int32_t x0_2 = CostOnlyCoin(zx.q(var_cb8[i]))
        i += 1
        x20_1 += x0_2
    while (i s< sx.q(var_38))
    
    x0_3 = zx.q(x20_1)

return GainExactly(x0_3, 1)

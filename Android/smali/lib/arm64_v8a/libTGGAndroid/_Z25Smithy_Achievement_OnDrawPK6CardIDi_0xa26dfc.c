// 函数: _Z25Smithy_Achievement_OnDrawPK6CardIDi
// 地址: 0xa26dfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19_1

if (arg2 s< 1)
    x19_1 = 0
else
    CardID const* x19 = arg1
    int32_t x20_1 = 0
    uint64_t i_1 = zx.q(arg2)
    uint64_t i
    
    do
        uint64_t x0 = zx.q(*x19)
        x19 += 4
        i = i_1
        i_1 -= 1
        x20_1 += CardIs(x0, 4) & 1
    while (i != 1)
    x19_1 = x20_1 u> 2 ? 1 : 0

return zx.q(x19_1) & zx.q(NumActions() == 0 ? 1 : 0)

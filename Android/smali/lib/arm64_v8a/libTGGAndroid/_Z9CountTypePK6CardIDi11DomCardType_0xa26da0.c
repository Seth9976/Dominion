// 函数: _Z9CountTypePK6CardIDi11DomCardType
// 地址: 0xa26da0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20

if (arg2 s< 1)
    x20 = 0
else
    CardID const* x21_1 = arg1
    x20 = 0
    uint64_t i_1 = zx.q(arg2)
    uint64_t i
    
    do
        uint64_t x0 = zx.q(*x21_1)
        x21_1 += 4
        i = i_1
        i_1 -= 1
        x20 += CardIs(x0, arg3) & 1
    while (i != 1)

return zx.q(x20)

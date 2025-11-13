// 函数: _Z16DlcFilterVisiblePK6DlcDefiPS1_
// 地址: 0x9c4e5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 0

DlcDef const* x8_1 = arg1
uint64_t result = 0
uint64_t i_1 = zx.q(arg2)
uint64_t i

do
    if ((*(x8_1 + 4) | 4) != 7)
        arg3[sx.q(result.d)] = x8_1
        result = zx.q(result.d + 1)
    
    i = i_1
    i_1 -= 1
    x8_1 += 0x80
while (i != 1)
return result

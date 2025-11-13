// 函数: _Z33DomExpansionsBitsetFromExpansionsP12DomExpansioni
// 地址: 0x9ec808
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 0

DomExpansion* x8 = arg1
uint64_t result = 0
uint64_t i_1 = zx.q(arg2)
uint64_t i

do
    int32_t x11_2 = *x8 - 2
    
    if (x11_2 u< 0x12)
        result = zx.q(*(&data_7ac038 + (sx.q(x11_2) << 2))) | zx.q(result.d)
    
    i = i_1
    i_1 -= 1
    x8 += 4
while (i != 1)
return result

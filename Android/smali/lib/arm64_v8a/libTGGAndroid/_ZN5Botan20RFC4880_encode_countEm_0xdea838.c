// 函数: _ZN5Botan20RFC4880_encode_countEm
// 地址: 0xdea838
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 u< 0x401)
    return 0

if (arg1 u>> 0x15 u> 0x1e)
    return 0xff

uint64_t i = 0x100
void* const x9 = &data_83a5b4

do
    uint64_t i_1 = i u>> 1
    void* x12_1 = x9 + (i_1 << 2)
    uint64_t x13_1 = zx.q(*x12_1)
    
    if (x13_1 u< arg1)
        i += not.q(i_1)
    else
        i = i_1
    
    if (x13_1 u< arg1)
        x9 = x12_1 + 4
while (i != 0)

return (x9 - &data_83a5b4) u>> 2

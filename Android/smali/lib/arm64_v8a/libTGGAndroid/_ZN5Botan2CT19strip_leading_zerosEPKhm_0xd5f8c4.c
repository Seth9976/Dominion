// 函数: _ZN5Botan2CT19strip_leading_zerosEPKhm
// 地址: 0xd5f8c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x3 = 0

if (arg2 != 0)
    int32_t x9_1 = 0xff
    uint8_t const* x10_1 = arg1
    uint64_t i_1 = arg2
    uint64_t i
    
    do
        uint32_t x12_1 = zx.d(*x10_1)
        x10_1 = &x10_1[1]
        i = i_1
        i_1 -= 1
        x9_1 &= sx.d((x12_1.b - 1) & (not.d(x12_1)).b) s>> 7
        x3 += zx.q(x9_1) & 1
    while (i != 1)

return Botan::CT::copy_output(0, arg1, arg2, x3) __tailcall

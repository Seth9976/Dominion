// 函数: _ZNK5Botan7EME_Raw5unpadERhPKhm
// 地址: 0xd5f870
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_i
uint64_t i_2 = entry_i
*arg2 = 0xff

if (entry_i != 0)
    entry_i = 0
    int32_t x10_1 = 0xff
    uint64_t x11_1 = arg3
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        uint32_t x13_1 = zx.d(*x11_1)
        x11_1 += 1
        i = i_1
        i_1 -= 1
        x10_1 &= sx.d((x13_1.b - 1) & (not.d(x13_1)).b) s>> 7
        entry_i += zx.q(x10_1) & 1
    while (i != 1)

return Botan::CT::copy_output(0, arg3, i_2, entry_i) __tailcall

// 函数: sub_f01cc0
// 地址: 0xf01cc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(arg2, 0, 0x18)
uint8_t* x0 = Botan::allocate_memory(0x40, 1)
arg2[1] = &x0[0x40]
arg2[2] = &x0[0x40]
__builtin_memset(x0, 0, 0x40)
*arg2 = x0
uint8_t* x1 = *(arg1 + 8)
int64_t result =
    Botan::ed25519_sign(x0, x1, *(arg1 + 0x10) - x1, *(*(arg1 + 0x20) + 0x20), nullptr, 0)
*(arg1 + 0x10) = *(arg1 + 8)
return result

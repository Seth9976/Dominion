// 函数: sub_ef558c
// 地址: 0xef558c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *(arg1 + 0x10)
sub_d0a5c4(arg3)
__builtin_memset(arg4, 0, 0x18)
uint8_t* x0_1 = Botan::allocate_memory(0x20, 1)
arg4[1] = &x0_1[0x20]
arg4[2] = &x0_1[0x20]
__builtin_memset(x0_1, 0, 0x20)
*arg4 = x0_1
return Botan::curve25519_donna(x0_1, *(x22 + 0x20), arg2)

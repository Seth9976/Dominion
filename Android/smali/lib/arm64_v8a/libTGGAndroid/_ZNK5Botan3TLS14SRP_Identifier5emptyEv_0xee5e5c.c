// 函数: _ZNK5Botan3TLS14SRP_Identifier5emptyEv
// 地址: 0xee5e5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
uint64_t x8_2 = zx.q(*(entry_x0 + 8))

if ((x8_2.d & 1) != 0)
    return zx.q(*(entry_x0 + 0x10) == 0 ? 1 : 0)

return zx.q(x8_2 u>> 1 == 0 ? 1 : 0)

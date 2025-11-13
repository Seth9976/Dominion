// 函数: sub_d88d08
// 地址: 0xd88d08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_4 = *arg3

if (x8_4 != 0)
    int64_t x9_1 = arg2[0xc]
    arg2[0xb] = x8_4
    Botan::deallocate_memory(x8_4, (x9_1 - x8_4) s>> 2, 4)

void* x0_1 = *arg4

if (x0_1 != 0)
    int64_t x8 = arg2[9]
    arg2[8] = x0_1
    Botan::deallocate_memory(x0_1, (x8 - x0_1) s>> 2, 4)

void* x0_2 = arg2[3]
*arg2 = _vtable_for_Botan::MDx_HashFunction + 0x10

if (x0_2 != 0)
    int64_t x8_3 = arg2[5]
    arg2[4] = x0_2
    Botan::deallocate_memory(x0_2, x8_3 - x0_2, 1)

sub_1101e04(arg1)
noreturn

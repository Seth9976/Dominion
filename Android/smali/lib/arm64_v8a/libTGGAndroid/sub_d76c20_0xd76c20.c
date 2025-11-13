// 函数: sub_d76c20
// 地址: 0xd76c20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = arg2[0xa]
arg2[0xa] = 0
*arg2 = _vtable_for_Botan::MAC_Filter + 0x10

if (x0 != 0)
    (*(*x0 + 0x10))()

void* x0_1 = arg2[4]
*arg2 = _vtable_for_Botan::Filter + 0x10

if (x0_1 != 0)
    arg2[5] = x0_1
    operator delete(x0_1)

void* x0_2 = arg2[1]

if (x0_2 != 0)
    int64_t x8_4 = arg2[3]
    arg2[2] = x0_2
    Botan::deallocate_memory(x0_2, x8_4 - x0_2, 1)

sub_1101e04(arg1)
noreturn

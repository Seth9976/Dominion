// 函数: sub_d763fc
// 地址: 0xd763fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = arg2[0xd]
arg2[0xd] = 0
*arg2 = _vtable_for_Botan::StreamCipher_Filter + 0x10

if (x0 != 0)
    (*(*x0 + 8))()

void* x0_1 = arg2[0xa]

if (x0_1 != 0)
    int64_t x8_3 = arg2[0xc]
    arg2[0xb] = x0_1
    Botan::deallocate_memory(x0_1, x8_3 - x0_1, 1)

void* x0_2 = arg2[4]
*arg2 = _vtable_for_Botan::Filter + 0x10

if (x0_2 != 0)
    arg2[5] = x0_2
    operator delete(x0_2)

void* x0_3 = arg2[1]

if (x0_3 != 0)
    int64_t x8_5 = arg2[3]
    arg2[2] = x0_3
    Botan::deallocate_memory(x0_3, x8_5 - x0_3, 1)

sub_1101e04(arg1)
noreturn

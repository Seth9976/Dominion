// 函数: sub_d7f9f0
// 地址: 0xd7f9f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = *arg1
*arg1 = arg2

if (x19 == 0)
    return 

void* x0 = *(x19 + 0x28)

if (x0 != 0)
    int64_t x8_1 = *(x19 + 0x38)
    *(x19 + 0x30) = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

void* x0_1 = *x19

if (x0_1 != 0)
    int64_t x8_3 = *(x19 + 0x10)
    *(x19 + 8) = x0_1
    Botan::deallocate_memory(x0_1, (x8_3 - x0_1) s>> 2, 4)

return operator delete(x19) __tailcall

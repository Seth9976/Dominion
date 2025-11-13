// 函数: sub_f031a8
// 地址: 0xf031a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = arg1[4]
*arg1 = _vtable_for_Botan::Filter + 0x10

if (x0 != 0)
    arg1[5] = x0
    operator delete(x0)

void* x0_1 = arg1[1]

if (x0_1 != 0)
    int64_t x8_1 = arg1[3]
    arg1[2] = x0_1
    Botan::deallocate_memory(x0_1, x8_1 - x0_1, 1)

return operator delete(arg1) __tailcall

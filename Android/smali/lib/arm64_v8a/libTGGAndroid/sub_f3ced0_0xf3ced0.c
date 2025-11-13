// 函数: sub_f3ced0
// 地址: 0xf3ced0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *(arg1 + 0x10)

if (x0 != 0)
    int64_t x8_1 = *(arg1 + 0x20)
    *(arg1 + 0x18) = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

return operator delete(arg1) __tailcall

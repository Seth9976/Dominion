// 函数: _ZThn8_N5Botan8Poly1305D0Ev
// 地址: 0xee29c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg1[-1] = _vtable_for_Botan::Poly1305 + 0x10
void* x0 = arg1[4]
*arg1 = _vtable_for_Botan::Poly1305 + 0x98

if (x0 != 0)
    int64_t x8_1 = arg1[6]
    arg1[5] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x0_1 = arg1[1]

if (x0_1 != 0)
    int64_t x8_2 = arg1[3]
    arg1[2] = x0_1
    Botan::deallocate_memory(x0_1, (x8_2 - x0_1) s>> 3, 8)

return operator delete(&arg1[-1]) __tailcall

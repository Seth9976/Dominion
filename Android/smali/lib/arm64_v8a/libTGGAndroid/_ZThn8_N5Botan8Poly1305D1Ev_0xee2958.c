// 函数: _ZThn8_N5Botan8Poly1305D1Ev
// 地址: 0xee2958
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = arg1[4]
arg1[-1] = _vtable_for_Botan::Poly1305 + 0x10
*arg1 = _vtable_for_Botan::Poly1305 + 0x98

if (x0 != 0)
    int64_t x8_1 = arg1[6]
    arg1[5] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* result = arg1[1]

if (result == 0)
    return result

int64_t x8_2 = arg1[3]
arg1[2] = result
return Botan::deallocate_memory(result, (x8_2 - result) s>> 3, 8)

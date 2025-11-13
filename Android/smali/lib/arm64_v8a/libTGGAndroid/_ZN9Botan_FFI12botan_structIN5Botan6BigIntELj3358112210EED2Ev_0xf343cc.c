// 函数: _ZN9Botan_FFI12botan_structIN5Botan6BigIntELj3358112210EED2Ev
// 地址: 0xf343cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x20 = entry_x0[2]
entry_x0[1].d = 0
*entry_x0 = _vtable_for_Botan_FFI::botan_struct<Botan::BigInt, 3358112210u> + 0x10
entry_x0[2] = 0

if (x20 == 0)
    entry_x0[2] = 0
    return 

void* x0 = *x20

if (x0 != 0)
    int64_t x8_1 = x20[2]
    x20[1] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

operator delete(x20)
int64_t* x20_1 = entry_x0[2]
entry_x0[2] = 0

if (x20_1 == 0)
    return 

void* x0_2 = *x20_1

if (x0_2 != 0)
    int64_t x8_3 = x20_1[2]
    x20_1[1] = x0_2
    Botan::deallocate_memory(x0_2, (x8_3 - x0_2) s>> 2, 4)

return operator delete(x20_1) __tailcall

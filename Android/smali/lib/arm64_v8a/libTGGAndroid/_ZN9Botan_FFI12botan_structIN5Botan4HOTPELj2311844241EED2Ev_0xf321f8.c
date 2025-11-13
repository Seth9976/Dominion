// 函数: _ZN9Botan_FFI12botan_structIN5Botan4HOTPELj2311844241EED2Ev
// 地址: 0xf321f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x20 = entry_x0[2]
entry_x0[1].d = 0
*entry_x0 = _vtable_for_Botan_FFI::botan_struct<Botan::HOTP, 2311844241u> + 0x10
entry_x0[2] = 0

if (x20 == 0)
    entry_x0[2] = 0
    return 

int64_t* x0 = *x20
*x20 = 0

if (x0 != 0)
    (*(*x0 + 0x10))()

operator delete(x20)
int64_t* x20_1 = entry_x0[2]
entry_x0[2] = 0

if (x20_1 == 0)
    return 

int64_t* x0_2 = *x20_1
*x20_1 = 0

if (x0_2 != 0)
    (*(*x0_2 + 0x10))()

return operator delete(x20_1) __tailcall

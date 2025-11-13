// 函数: _ZN9Botan_FFI12botan_structIN5Botan7FPE_FE1ELj3567237152EED2Ev
// 地址: 0xf310a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x20 = entry_x0[2]
entry_x0[1].d = 0
*entry_x0 = _vtable_for_Botan_FFI::botan_struct<Botan::FPE_FE1, 3567237152u> + 0x10
entry_x0[2] = 0

if (x20 == 0)
    entry_x0[2] = 0
    return 

Botan::FPE_FE1::~FPE_FE1()
operator delete(x20)
void* x20_1 = entry_x0[2]
entry_x0[2] = 0

if (x20_1 != 0)
    Botan::FPE_FE1::~FPE_FE1()
    return operator delete(x20_1) __tailcall

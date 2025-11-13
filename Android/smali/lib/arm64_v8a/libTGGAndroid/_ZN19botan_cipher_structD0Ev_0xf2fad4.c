// 函数: _ZN19botan_cipher_structD0Ev
// 地址: 0xf2fad4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[3]
*entry_x0 = _vtable_for_botan_cipher_struct + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[5]
    entry_x0[4] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

int64_t* x0_1 = entry_x0[2]
entry_x0[1].d = 0
entry_x0[2] = 0
*entry_x0 = _vtable_for_Botan_FFI::botan_struct<Botan::Cipher_Mode, 3030564764u> + 0x10

if (x0_1 != 0)
    (*(*x0_1 + 8))()
    int64_t* x0_2 = entry_x0[2]
    entry_x0[2] = 0
    
    if (x0_2 != 0)
        (*(*x0_2 + 8))()

return operator delete(entry_x0) __tailcall

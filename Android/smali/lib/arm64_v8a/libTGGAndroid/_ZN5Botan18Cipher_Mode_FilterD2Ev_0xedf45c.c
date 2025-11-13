// 函数: _ZN5Botan18Cipher_Mode_FilterD2Ev
// 地址: 0xedf45c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0x15]
*entry_x0 = _vtable_for_Botan::Cipher_Mode_Filter + 0x10
entry_x0[0xa] = _vtable_for_Botan::Cipher_Mode_Filter + 0x90

if (x0 != 0)
    int64_t x8_1 = entry_x0[0x17]
    entry_x0[0x16] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x0_1 = entry_x0[0x12]

if (x0_1 != 0)
    entry_x0[0x13] = x0_1
    operator delete(x0_1)

int64_t* x0_2 = entry_x0[0x11]
entry_x0[0x11] = 0

if (x0_2 != 0)
    (*(*x0_2 + 8))()

void* x0_3 = entry_x0[0xd]
entry_x0[0xa] = _vtable_for_Botan::Buffered_Filter + 0x10

if (x0_3 != 0)
    int64_t x8_5 = entry_x0[0xf]
    entry_x0[0xe] = x0_3
    Botan::deallocate_memory(x0_3, x8_5 - x0_3, 1)

void* x0_4 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::Filter + 0x10

if (x0_4 != 0)
    entry_x0[5] = x0_4
    operator delete(x0_4)

void* result = entry_x0[1]

if (result == 0)
    return result

int64_t x8_7 = entry_x0[3]
entry_x0[2] = result
return Botan::deallocate_memory(result, x8_7 - result, 1)

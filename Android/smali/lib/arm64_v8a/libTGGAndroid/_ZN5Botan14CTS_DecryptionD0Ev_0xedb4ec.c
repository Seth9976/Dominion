// 函数: _ZN5Botan14CTS_DecryptionD0Ev
// 地址: 0xedb4ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[7]
*entry_x0 = _vtable_for_Botan::CBC_Decryption + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[9]
    entry_x0[8] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x0_1 = entry_x0[3]
*entry_x0 = _vtable_for_Botan::CBC_Mode + 0x10

if (x0_1 != 0)
    int64_t x8_3 = entry_x0[5]
    entry_x0[4] = x0_1
    Botan::deallocate_memory(x0_1, x8_3 - x0_1, 1)

int64_t* x0_2 = entry_x0[2]
entry_x0[2] = 0

if (x0_2 != 0)
    (*(*x0_2 + 0x28))()

int64_t* x0_3 = entry_x0[1]
entry_x0[1] = 0

if (x0_3 != 0)
    (*(*x0_3 + 8))()

return operator delete(entry_x0) __tailcall

// 函数: _ZN5Botan3TLS22TLS_CBC_HMAC_AEAD_ModeD2Ev
// 地址: 0xee866c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0x15]
*entry_x0 = _vtable_for_Botan::TLS::TLS_CBC_HMAC_AEAD_Mode + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[0x17]
    entry_x0[0x16] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x0_1 = entry_x0[0x12]

if (x0_1 != 0)
    entry_x0[0x13] = x0_1
    operator delete(x0_1)

void* x0_2 = entry_x0[0xf]

if (x0_2 != 0)
    int64_t x8_2 = entry_x0[0x11]
    entry_x0[0x10] = x0_2
    Botan::deallocate_memory(x0_2, x8_2 - x0_2, 1)

int64_t* x0_3 = entry_x0[0xe]
entry_x0[0xe] = 0

if (x0_3 != 0)
    (*(*x0_3 + 0x10))()

int64_t* result = entry_x0[0xd]
entry_x0[0xd] = 0

if (result != 0)
    result = (*(*result + 8))()

if ((zx.d(entry_x0[4].b) & 1) != 0)
    result = operator delete(entry_x0[6])

if ((zx.d(entry_x0[1].b) & 1) != 0)
    return operator delete(entry_x0[3]) __tailcall

return result

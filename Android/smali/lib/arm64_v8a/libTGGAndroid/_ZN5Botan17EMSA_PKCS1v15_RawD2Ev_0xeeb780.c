// 函数: _ZN5Botan17EMSA_PKCS1v15_RawD2Ev
// 地址: 0xeeb780
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[8]
*entry_x0 = _vtable_for_Botan::EMSA_PKCS1v15_Raw + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[0xa]
    entry_x0[9] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* result = entry_x0[5]

if (result != 0)
    entry_x0[6] = result
    result = operator delete(result)

if ((zx.d(entry_x0[2].b) & 1) != 0)
    return operator delete(entry_x0[4]) __tailcall

return result

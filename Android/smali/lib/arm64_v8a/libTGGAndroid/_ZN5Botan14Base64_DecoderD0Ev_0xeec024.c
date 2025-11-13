// 函数: _ZN5Botan14Base64_DecoderD0Ev
// 地址: 0xeec024
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0xd]
*entry_x0 = _vtable_for_Botan::Base64_Decoder + 0x10

if (x0 != 0)
    entry_x0[0xe] = x0
    operator delete(x0)

void* x0_1 = entry_x0[0xa]

if (x0_1 != 0)
    entry_x0[0xb] = x0_1
    operator delete(x0_1)

void* x0_2 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::Filter + 0x10

if (x0_2 != 0)
    entry_x0[5] = x0_2
    operator delete(x0_2)

void* x0_3 = entry_x0[1]

if (x0_3 != 0)
    int64_t x8_2 = entry_x0[3]
    entry_x0[2] = x0_3
    Botan::deallocate_memory(x0_3, x8_2 - x0_3, 1)

return operator delete(entry_x0) __tailcall

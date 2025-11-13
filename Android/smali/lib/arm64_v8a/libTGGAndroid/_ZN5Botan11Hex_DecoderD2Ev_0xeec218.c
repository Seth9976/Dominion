// 函数: _ZN5Botan11Hex_DecoderD2Ev
// 地址: 0xeec218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0xd]
*entry_x0 = _vtable_for_Botan::Hex_Decoder + 0x10

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

void* result = entry_x0[1]

if (result == 0)
    return result

int64_t x8_2 = entry_x0[3]
entry_x0[2] = result
return Botan::deallocate_memory(result, x8_2 - result, 1)

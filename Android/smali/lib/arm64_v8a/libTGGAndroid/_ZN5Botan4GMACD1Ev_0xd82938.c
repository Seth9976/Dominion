// 函数: _ZN5Botan4GMACD1Ev
// 地址: 0xd82938
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::GMAC + 0x10
entry_x0[1] = _vtable_for_Botan::GMAC + 0x98

if (x0 != 0)
    int64_t x8_1 = entry_x0[6]
    entry_x0[5] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x20 = entry_x0[3]
entry_x0[3] = 0

if (x20 != 0)
    Botan::GHASH::~GHASH()
    operator delete(x20)

int64_t* result = entry_x0[2]
entry_x0[2] = 0

if (result == 0)
    return result

jump(*(*result + 8))

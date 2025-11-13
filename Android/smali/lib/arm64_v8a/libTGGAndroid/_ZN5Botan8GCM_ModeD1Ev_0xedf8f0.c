// 函数: _ZN5Botan8GCM_ModeD1Ev
// 地址: 0xedf8f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[7]
*entry_x0 = _vtable_for_Botan::GCM_Mode + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[9]
    entry_x0[8] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x20 = entry_x0[6]
entry_x0[6] = 0

if (x20 != 0)
    Botan::GHASH::~GHASH()
    operator delete(x20)

int64_t* result = entry_x0[5]
entry_x0[5] = 0

if (result != 0)
    result = (*(*result + 8))()

if ((zx.d(entry_x0[2].b) & 1) != 0)
    return operator delete(entry_x0[4]) __tailcall

return result

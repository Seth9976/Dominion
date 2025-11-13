// 函数: _ZN5Botan25ProcWalking_EntropySourceD2Ev
// 地址: 0xee8584
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0xa]
*entry_x0 = _vtable_for_Botan::ProcWalking_EntropySource + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[0xc]
    entry_x0[0xb] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

int64_t* x0_1 = entry_x0[9]
entry_x0[9] = 0

if (x0_1 != 0)
    (*(*x0_1 + 0x10))()

int64_t result = std::__ndk1::mutex::~mutex()

if ((zx.d(entry_x0[1].b) & 1) != 0)
    return operator delete(entry_x0[3]) __tailcall

return result

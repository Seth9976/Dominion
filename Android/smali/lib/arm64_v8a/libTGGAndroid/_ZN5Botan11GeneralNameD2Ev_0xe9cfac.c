// 函数: _ZN5Botan11GeneralNameD2Ev
// 地址: 0xe9cfac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
uint32_t x8 = zx.d(entry_x0[4].b)
*entry_x0 = _vtable_for_Botan::GeneralName + 0x10

if ((x8 & 1) != 0)
    operator delete(entry_x0[6])

if ((zx.d(entry_x0[1].b) & 1) != 0)
    return operator delete(entry_x0[3]) __tailcall

// 函数: _ZN5Botan14GeneralSubtreeD0Ev
// 地址: 0xedbbbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
uint32_t x9 = zx.d(entry_x0[5].b)
*entry_x0 = _vtable_for_Botan::GeneralSubtree + 0x10
entry_x0[1] = _vtable_for_Botan::GeneralName + 0x10

if ((x9 & 1) != 0)
    operator delete(entry_x0[7])
    
    if ((zx.d(entry_x0[2].b) & 1) != 0)
        operator delete(entry_x0[4])
        return operator delete(entry_x0) __tailcall
else if ((zx.d(entry_x0[2].b) & 1) != 0)
    operator delete(entry_x0[4])
    return operator delete(entry_x0) __tailcall

return operator delete(entry_x0) __tailcall

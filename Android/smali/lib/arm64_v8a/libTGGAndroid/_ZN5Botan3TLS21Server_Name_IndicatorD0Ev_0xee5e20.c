// 函数: _ZN5Botan3TLS21Server_Name_IndicatorD0Ev
// 地址: 0xee5e20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
uint32_t x8 = zx.d(entry_x0[1].b)
*entry_x0 = _vtable_for_Botan::TLS::Server_Name_Indicator + 0x10

if ((x8 & 1) != 0)
    operator delete(entry_x0[3])

return operator delete(entry_x0) __tailcall

// 函数: _ZN9Botan_FFI12botan_structIN5Botan25MessageAuthenticationCodeELj2691600321EED2Ev
// 地址: 0xf33bdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* result = entry_x0[2]
entry_x0[1].d = 0
*entry_x0 =
    _vtable_for_Botan_FFI::botan_struct<Botan::MessageAuthenticationCode, 2691600321u> + 0x10
entry_x0[2] = 0

if (result == 0)
    entry_x0[2] = 0
else
    (*(*result + 0x10))()
    result = entry_x0[2]
    entry_x0[2] = 0
    
    if (result != 0)
        jump(*(*result + 0x10))

return result

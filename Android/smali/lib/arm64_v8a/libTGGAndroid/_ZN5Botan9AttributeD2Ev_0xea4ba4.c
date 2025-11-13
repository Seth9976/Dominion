// 函数: _ZN5Botan9AttributeD2Ev
// 地址: 0xea4ba4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[5]
*entry_x0 = _vtable_for_Botan::Attribute + 0x10

if (x0 != 0)
    entry_x0[6] = x0
    operator delete(x0)

void* result = entry_x0[2]
entry_x0[1] = _vtable_for_Botan::OID + 0x10

if (result == 0)
    return result

entry_x0[3] = result
return operator delete(result) __tailcall

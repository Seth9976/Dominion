// 函数: _ZN5Botan14Cert_Extension17Unknown_ExtensionD0Ev
// 地址: 0xee80d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[6]
*entry_x0 = _vtable_for_Botan::Cert_Extension::Unknown_Extension + 0x10

if (x0 != 0)
    entry_x0[7] = x0
    operator delete(x0)

void* x0_1 = entry_x0[2]
entry_x0[1] = _vtable_for_Botan::OID + 0x10

if (x0_1 != 0)
    entry_x0[3] = x0_1
    operator delete(x0_1)

return operator delete(entry_x0) __tailcall

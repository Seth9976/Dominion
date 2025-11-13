// 函数: _ZN5Botan11X509_ObjectD2Ev
// 地址: 0xee9938
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0xc]
*entry_x0 = _vtable_for_Botan::X509_Object + 0x10

if (x0 != 0)
    entry_x0[0xd] = x0
    operator delete(x0)

void* x0_1 = entry_x0[9]

if (x0_1 != 0)
    entry_x0[0xa] = x0_1
    operator delete(x0_1)

void* x0_2 = entry_x0[6]
entry_x0[1] = _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (x0_2 != 0)
    entry_x0[7] = x0_2
    operator delete(x0_2)

void* result = entry_x0[3]
entry_x0[2] = _vtable_for_Botan::OID + 0x10

if (result == 0)
    return result

entry_x0[4] = result
return operator delete(result) __tailcall

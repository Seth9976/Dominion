// 函数: _ZN5Botan4OCSP6CertIDD2Ev
// 地址: 0xe9d82c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0xf]
*entry_x0 = _vtable_for_Botan::OCSP::CertID + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[0x11]
    entry_x0[0x10] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

void* x0_1 = entry_x0[0xc]

if (x0_1 != 0)
    entry_x0[0xd] = x0_1
    operator delete(x0_1)

void* x0_2 = entry_x0[9]

if (x0_2 != 0)
    entry_x0[0xa] = x0_2
    operator delete(x0_2)

void* x0_3 = entry_x0[6]
entry_x0[1] = _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (x0_3 != 0)
    entry_x0[7] = x0_3
    operator delete(x0_3)

void* result = entry_x0[3]
entry_x0[2] = _vtable_for_Botan::OID + 0x10

if (result == 0)
    return result

entry_x0[4] = result
return operator delete(result) __tailcall

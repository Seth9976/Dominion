// 函数: _ZN5Botan14DSA_PrivateKeyD1Ev
// 地址: 0xeea994
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (** entry_x0)()
void* x0 = entry_x0[0xa]
*entry_x0 = construction_vtable_for_Botan::DL_Scheme_PrivateKey-in-Botan::DSA_PrivateKey + 0x310
entry_x0[1] = construction_vtable_for_Botan::DL_Scheme_PrivateKey-in-Botan::DSA_PrivateKey + 0x210
entry_x0[9] = construction_vtable_for_Botan::DL_Scheme_PrivateKey-in-Botan::DSA_PrivateKey + 0xd0

if (x0 != 0)
    int64_t x8_1 = entry_x0[0xc]
    entry_x0[0xb] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

int64_t* x20 = entry_x0[8]
*entry_x0 = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::DSA_PrivateKey + 0x190
entry_x0[1] = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::DSA_PrivateKey + 0x90
int64_t x9_2

if (x20 != 0)
    int32_t i
    
    do
        x9_2 = __ldaxr(&x20[1])
        i = __stlxr(x9_2 - 1, &x20[1])
    while (i != 0)

void* result

if (x20 != 0 && x9_2 == 0)
    (*(*x20 + 0x10))(x20)
    std::__ndk1::__shared_weak_count::__release_weak()
    result = entry_x0[2]
    
    if (result != 0)
        goto label_eeaa18
else
    result = entry_x0[2]
    
    if (result != 0)
    label_eeaa18:
        int64_t x8_5 = entry_x0[4]
        entry_x0[3] = result
        return Botan::deallocate_memory(result, (x8_5 - result) s>> 2, 4)

return result

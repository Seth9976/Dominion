// 函数: _ZN5Botan12DH_PublicKeyD1Ev
// 地址: 0xe59580
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (** entry_x0)()
int64_t* x20 = entry_x0[8]
*entry_x0 = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::DH_PublicKey + 0x190
entry_x0[1] = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::DH_PublicKey + 0x90
int64_t x9_1

if (x20 != 0)
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20[1])
        i = __stlxr(x9_1 - 1, &x20[1])
    while (i != 0)

void* result

if (x20 != 0 && x9_1 == 0)
    (*(*x20 + 0x10))(x20)
    std::__ndk1::__shared_weak_count::__release_weak()
    result = entry_x0[2]
    
    if (result != 0)
        goto label_e595c8
else
    result = entry_x0[2]
    
    if (result != 0)
    label_e595c8:
        int64_t x8_2 = entry_x0[4]
        entry_x0[3] = result
        return Botan::deallocate_memory(result, (x8_2 - result) s>> 2, 4)

return result

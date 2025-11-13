// 函数: _ZN5Botan11BER_Decoder11decode_listINS_14GeneralSubtreeEEERS0_RNSt6__ndk16vectorIT_NS4_9allocatorIS6_EEEENS_8ASN1_TagESB_
// 地址: 0xeb301c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::GeneralSubtree* x20 = arg2
Botan::BER_Decoder::start_cons(arg1, zx.q(arg3))
int32_t var_90
int64_t* var_70

while (((*(*var_70 + 0x18))() & (var_90 == 0xff00 ? 1 : 0) & 1) == 0)
    void* __offset(vtable_for_Botan::GeneralSubtree, 0x10) var_e8 =
        _vtable_for_Botan::GeneralSubtree + 0x10
    void* __offset(vtable_for_Botan::GeneralName, 0x10) var_e0_1 =
        _vtable_for_Botan::GeneralName + 0x10
    int128_t var_b8
    __builtin_memset(&var_b8, 0, 0x18)
    int128_t var_d8
    __builtin_memset(&var_d8, 0, 0x18)
    int64_t var_a0_1 = -1
    Botan::GeneralSubtree::decode_from(&var_e8)
    void** x8_6 = *(x20 + 8)
    void* var_c8
    char var_c0
    
    if (x8_6 u>= *(x20 + 0x10))
        std::__ndk1::vector<Botan::GeneralSubtree, std::__ndk1::allocator<Botan::GeneralSubtree> >::__push_back_slow_path<Botan::GeneralSubtree>(
            x20)
        var_e8 = _vtable_for_Botan::GeneralSubtree + 0x10
        void* __offset(vtable_for_Botan::GeneralName, 0x10) var_e0_3 =
            _vtable_for_Botan::GeneralName + 0x10
        
        if ((zx.d(var_c0) & 1) != 0)
            operator delete(var_b8:8.q)
    else
        *x8_6 = _vtable_for_Botan::GeneralSubtree + 0x10
        x8_6[1] = _vtable_for_Botan::GeneralName + 0x10
        int128_t v0_1 = var_d8
        x8_6[4] = var_c8
        *(x8_6 + 0x10) = v0_1
        __builtin_memset(&var_d8, 0, 0x30)
        x8_6[7] = var_b8:8.q
        *(x8_6 + 0x28) = var_c0.o
        int64_t var_a8
        *(x8_6 + 0x40) = var_a8.o
        *(x20 + 8) = &x8_6[0xa]
        var_e8 = _vtable_for_Botan::GeneralSubtree + 0x10
        void* __offset(vtable_for_Botan::GeneralName, 0x10) var_e0_2 =
            _vtable_for_Botan::GeneralName + 0x10
    
    if ((zx.d(var_d8.b) & 1) != 0)
        operator delete(var_c8)

Botan::BER_Decoder::end_cons()
int64_t var_68_1 = 0
int64_t* var_68

if (var_68 != 0)
    (*(*var_68 + 0x38))()

void* var_88

if (var_88 != 0)
    void* var_80_1 = var_88
    int64_t var_78
    Botan::deallocate_memory(var_88, var_78 - var_88, 1)

return arg1

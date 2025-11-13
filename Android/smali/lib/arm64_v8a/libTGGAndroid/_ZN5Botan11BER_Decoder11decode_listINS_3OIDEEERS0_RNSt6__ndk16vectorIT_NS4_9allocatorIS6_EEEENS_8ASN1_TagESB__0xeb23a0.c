// 函数: _ZN5Botan11BER_Decoder11decode_listINS_3OIDEEERS0_RNSt6__ndk16vectorIT_NS4_9allocatorIS6_EEEENS_8ASN1_TagESB_
// 地址: 0xeb23a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::OID* x20 = arg2
Botan::BER_Decoder::start_cons(arg1, zx.q(arg3))
int32_t var_70
int64_t* var_50

while (((*(*var_50 + 0x18))() & (var_70 == 0xff00 ? 1 : 0) & 1) == 0)
    void* __offset(vtable_for_Botan::OID, 0x10) var_98 = _vtable_for_Botan::OID + 0x10
    void* var_90
    __builtin_memset(&var_90, 0, 0x18)
    Botan::OID::decode_from(&var_98)
    void** x8_6 = *(x20 + 8)
    
    if (x8_6 u< *(x20 + 0x10))
        x8_6[2] = 0
        x8_6[3] = 0
        *x8_6 = _vtable_for_Botan::OID + 0x10
        x8_6[1] = 0
        x8_6[1] = var_90
        int64_t var_88_1
        x8_6[2] = var_88_1
        int64_t var_80
        x8_6[3] = var_80
        *(x20 + 8) = &x8_6[4]
    else
        std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> >::__push_back_slow_path<Botan::OID>(
            x20)
        void* x0_4 = var_90
        var_98 = _vtable_for_Botan::OID + 0x10
        
        if (x0_4 != 0)
            void* var_88_2 = x0_4
            operator delete(x0_4)

Botan::BER_Decoder::end_cons()
int64_t* var_48

if (var_48 != 0)
    (*(*var_48 + 0x38))()

void* var_68
int64_t var_58

if (var_68 != 0)
    Botan::deallocate_memory(var_68, var_58 - var_68, 1)
return arg1

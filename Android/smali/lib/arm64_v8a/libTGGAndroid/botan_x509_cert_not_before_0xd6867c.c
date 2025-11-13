// 函数: botan_x509_cert_not_before
// 地址: 0xd6867c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
int64_t var_68 = arg2
int32_t x19

if (arg1 == 0)
    x19 = -0x1f
    
    if (*(x20 + 0x28) != x8)
        __stack_chk_fail()
        noreturn
else if (*(arg1 + 8) != 0x8f628937)
    x19 = -0x32
    
    if (*(x20 + 0x28) != x8)
        __stack_chk_fail()
        noreturn
else
    int64_t x8_2 = *(arg1 + 0x10)
    int64_t var_70 = x8_2
    
    if (x8_2 == 0)
        x19 = -0x32
    label_d68748:
        
        if (*(x20 + 0x28) != x8)
            __stack_chk_fail()
            noreturn
    else
        struct std::__ndk1::__function::__base<int32_t ()>::NSt6__ndk110__function6__funcIZN9Botan_FFI8apply_fnIN5Botan16X509_CertificateELj2405599543EZ26botan_x509_cert_not_beforeE4$_26EEiPNS2_12botan_structIT_XT0_EEEPKcT1_EUlvE_NS_9allocatorISE_EEFivEEE::VTable
            * const var_60 = &_vtable_for_NSt6__ndk110__function6__funcIZN9Botan_FFI8apply_fnIN5Botan16X509_CertificateELj2405599543EZ26botan_x509_cert_not_beforeE4$_26EEiPNS2_12botan_structIT_XT0_EEEPKcT1_EUlvE_NS_9allocatorISE_EEFivEEE{for `std::__ndk1::__function::__base<int32_t ()>'}
        int64_t* var_58_1 = &var_68
        int64_t* var_50_1 = &var_70
        struct std::__ndk1::__function::__base<int32_t ()>::NSt6__ndk110__function6__funcIZN9Botan_FFI8apply_fnIN5Botan16X509_CertificateELj2405599543EZ26botan_x509_cert_not_beforeE4$_26EEiPNS2_12botan_structIT_XT0_EEEPKcT1_EUlvE_NS_9allocatorISE_EEFivEEE::VTable
            * const* var_40_1 = &var_60
        x19 = Botan_FFI::ffi_guard_thunk("botan_x509_cert_not_before", &var_60)
        int64_t (* const x8_4)(void* arg1)
        
        if (&var_60 != var_40_1)
            if (var_40_1 == 0)
                goto label_d68748
            
            x8_4 = (*var_40_1)->j_operator delete
            goto label_d6876c
        
        x8_4 = (*var_40_1)->vFunc_4
    label_d6876c:
        x8_4()
        
        if (*(x20 + 0x28) != x8)
            __stack_chk_fail()
            noreturn

return zx.q(x19)

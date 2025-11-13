// 函数: botan_pubkey_get_field
// 地址: 0xd729e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int32_t x19_1

if (arg3 == 0)
    x19_1 = -0x1f
    
    if (*(x25 + 0x28) != x8)
        __stack_chk_fail()
        noreturn
else
    size_t x0_1 = strlen(arg3)
    char var_b8
    void* var_a8
    int64_t var_a0
    void* var_90
    
    if (x0_1 u>= -0x10)
        int64_t* x0_11 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
        int64_t* var_60
        int64_t x9_5
        
        if (arg1 == var_60)
            x9_5 = *(*var_60 + 0x20)
        label_d72c10:
            x9_5(var_60)
            
            if ((zx.d(var_b8) & 1) == 0)
                goto label_d72bf8
            
            goto label_d72c20
        
        if (var_60 != 0)
            x9_5 = *(*var_60 + 0x28)
            goto label_d72c10
        
        if ((zx.d(var_b8) & 1) != 0)
        label_d72c20:
            operator delete(var_a8)
            
            if ((zx.d(var_a0.b) & 1) != 0)
            label_d72c40:
                operator delete(var_90)
                sub_1101e04(x0_11)
                noreturn
        else
        label_d72bf8:
            
            if ((zx.d(var_a0.b) & 1) != 0)
                goto label_d72c40
        
        sub_1101e04(x0_11)
        noreturn
    
    void* x23_1
    
    if (x0_1 u>= 0x17)
        uint64_t x24_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
        void* x0_3 = operator new(x24_1)
        x23_1 = x0_3
        size_t var_98_1 = x0_1
        var_90 = x0_3
        var_a0 = x24_1 | 1
        memcpy(x23_1, arg3, x0_1)
    else
        x23_1 = &var_a0 | 1
        var_a0.b = (x0_1.d << 1).b
        
        if (x0_1 != 0)
            memcpy(x23_1, arg3, x0_1)
    
    *(x23_1 + x0_1) = 0
    int64_t var_c0 = arg1
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_b8)
    
    if (arg2 == 0)
        x19_1 = -0x1f
        
        if ((zx.d(var_b8) & 1) != 0)
        label_d72b9c:
            operator delete(var_a8)
            
            if ((zx.d(var_a0.b) & 1) == 0)
                goto label_d72b60
            
            goto label_d72bac
    else
        if (*(arg2 + 8) != 0x2c286519)
            x19_1 = -0x32
            
            if ((zx.d(var_b8) & 1) == 0)
                goto label_d72b54
            
            goto label_d72b9c
        
        int64_t x8_6 = *(arg2 + 0x10)
        int64_t var_88 = x8_6
        
        if (x8_6 == 0)
            x19_1 = -0x32
        label_d72b4c:
            
            if ((zx.d(var_b8) & 1) != 0)
                goto label_d72b9c
        else
            struct std::__ndk1::__function::__base<int32_t ()>::NSt6__ndk110__function6__funcIZN9Botan_FFI8apply_fnIN5Botan10Public_KeyELj740844825EZ22botan_pubkey_get_fieldE5$_155EEiPNS2_12botan_structIT_XT0_EEEPKcT1_EUlvE_NS_9allocatorISE_EEFivEEE::VTable
                * const var_80 = &_vtable_for_NSt6__ndk110__function6__funcIZN9Botan_FFI8apply_fnIN5Botan10Public_KeyELj740844825EZ22botan_pubkey_get_fieldE5$_155EEiPNS2_12botan_structIT_XT0_EEEPKcT1_EUlvE_NS_9allocatorISE_EEFivEEE{for `std::__ndk1::__function::__base<int32_t ()>'}
            int64_t* var_78_1 = &var_c0
            int64_t* var_70_1 = &var_88
            struct std::__ndk1::__function::__base<int32_t ()>::NSt6__ndk110__function6__funcIZN9Botan_FFI8apply_fnIN5Botan10Public_KeyELj740844825EZ22botan_pubkey_get_fieldE5$_155EEiPNS2_12botan_structIT_XT0_EEEPKcT1_EUlvE_NS_9allocatorISE_EEFivEEE::VTable
                * const* var_60_1 = &var_80
            x19_1 = Botan_FFI::ffi_guard_thunk("botan_pubkey_get_field", &var_80)
            
            if (&var_80 == var_60_1)
                (*var_60_1)->vFunc_4()
                
                if ((zx.d(var_b8) & 1) != 0)
                    goto label_d72b9c
            else
                if (var_60_1 == 0)
                    goto label_d72b4c
                
                (*var_60_1)->j_operator delete()
                
                if ((zx.d(var_b8) & 1) != 0)
                    goto label_d72b9c
    
label_d72b54:
    
    if ((zx.d(var_a0.b) & 1) != 0)
    label_d72bac:
        operator delete(var_90)
        
        if (*(x25 + 0x28) != x8)
            __stack_chk_fail()
            noreturn
    else
    label_d72b60:
        
        if (*(x25 + 0x28) != x8)
            __stack_chk_fail()
            noreturn

return zx.q(x19_1)

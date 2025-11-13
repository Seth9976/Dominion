// 函数: botan_block_cipher_encrypt_blocks
// 地址: 0xd67658
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
int32_t x19 = -0x1f

if (arg2 == 0 || arg3 == 0)
    goto label_d6771c

int64_t var_80 = arg2
int64_t var_78_1 = arg3
int64_t x3
int64_t var_70_1 = x3

if (arg1 == 0)
    x19 = -0x1f
label_d6771c:
    
    if (*(x20 + 0x28) == x8)
        return zx.q(x19)
else
    int64_t var_68
    int64_t x8_2
    
    if (*(arg1 + 8) == 0x64c29716)
        x8_2 = *(arg1 + 0x10)
        var_68 = x8_2
    
    if (*(arg1 + 8) != 0x64c29716 || x8_2 == 0)
        if (*(x20 + 0x28) == x8)
            return -0x32
    else
        struct std::__ndk1::__function::__base<int32_t ()>::NSt6__ndk110__function6__funcIZN9Botan_FFI8apply_fnIN5Botan11BlockCipherELj1690474262EZ33botan_block_cipher_encrypt_blocksE4$_12EEiPNS2_12botan_structIT_XT0_EEEPKcT1_EUlvE_NS_9allocatorISE_EEFivEEE::VTable
            * const var_60 = &_vtable_for_NSt6__ndk110__function6__funcIZN9Botan_FFI8apply_fnIN5Botan11BlockCipherELj1690474262EZ33botan_block_cipher_encrypt_blocksE4$_12EEiPNS2_12botan_structIT_XT0_EEEPKcT1_EUlvE_NS_9allocatorISE_EEFivEEE{for `std::__ndk1::__function::__base<int32_t ()>'}
        int64_t* var_58_1 = &var_80
        int64_t* var_50_1 = &var_68
        struct std::__ndk1::__function::__base<int32_t ()>::NSt6__ndk110__function6__funcIZN9Botan_FFI8apply_fnIN5Botan11BlockCipherELj1690474262EZ33botan_block_cipher_encrypt_blocksE4$_12EEiPNS2_12botan_structIT_XT0_EEEPKcT1_EUlvE_NS_9allocatorISE_EEFivEEE::VTable
            * const* var_40_1 = &var_60
        x19 = Botan_FFI::ffi_guard_thunk("botan_block_cipher_encrypt_blocks", &var_60)
        int64_t (* const x8_4)(void* arg1)
        
        if (&var_60 != var_40_1)
            if (var_40_1 == 0)
                goto label_d6771c
            
            x8_4 = (*var_40_1)->j_operator delete
            goto label_d67740
        
        x8_4 = (*var_40_1)->vFunc_4
    label_d67740:
        x8_4()
        
        if (*(x20 + 0x28) == x8)
            return zx.q(x19)

__stack_chk_fail()
noreturn

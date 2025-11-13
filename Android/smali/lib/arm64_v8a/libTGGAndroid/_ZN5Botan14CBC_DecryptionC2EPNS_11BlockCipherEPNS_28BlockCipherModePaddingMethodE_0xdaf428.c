// 函数: _ZN5Botan14CBC_DecryptionC2EPNS_11BlockCipherEPNS_28BlockCipherModePaddingMethodE
// 地址: 0xdaf428
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::CBC_Mode::CBC_Mode(arg1, arg2)
int64_t* x20 = *(arg1 + 8)
*arg1 = _vtable_for_Botan::CBC_Decryption + 0x10
int64_t x0_1 = (*(*x20 + 0x38))(x20)
int64_t result = (*(*x20 + 0x30))(x20)
int64_t x21_1 = (x0_1 * result) << 2
__builtin_memset(arg1 + 0x38, 0, 0x18)

if (x21_1 != 0)
    if ((x21_1 & 0xffffffff80000000) != 0)
        int64_t* x0_6 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_6 = *(arg1 + 0x38)
        
        if (x8_6 != 0)
            int64_t x9_1 = *(arg1 + 0x48)
            *(arg1 + 0x40) = x8_6
            Botan::deallocate_memory(x8_6, x9_1 - x8_6, 1)
        
        void* x0_8 = *(arg1 + 0x18)
        *arg1 = _vtable_for_Botan::CBC_Mode + 0x10
        
        if (x0_8 != 0)
            int64_t x8_8 = *(arg1 + 0x28)
            *(arg1 + 0x20) = x0_8
            Botan::deallocate_memory(x0_8, x8_8 - x0_8, 1)
        
        int64_t* x0_9 = *(arg1 + 0x10)
        *(arg1 + 0x10) = 0
        int64_t* x0_10
        
        if (x0_9 != 0)
            (*(*x0_9 + 0x28))()
            x0_10 = *(arg1 + 8)
            *(arg1 + 8) = 0
            
            if (x0_10 != 0)
            label_daf564:
                (*(*x0_10 + 8))()
                sub_1101e04(x0_6)
                noreturn
        else
            x0_10 = *(arg1 + 8)
            *(arg1 + 8) = 0
            
            if (x0_10 != 0)
                goto label_daf564
        sub_1101e04(x0_6)
        noreturn
    
    int64_t x0_4 = Botan::allocate_memory(x21_1, 1)
    int64_t x20_3 = x0_4 + x21_1
    *(arg1 + 0x38) = x0_4
    *(arg1 + 0x48) = x20_3
    result = memset(x0_4, 0, x21_1)
    *(arg1 + 0x40) = x20_3

return result

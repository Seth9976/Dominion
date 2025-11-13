// 函数: _ZN5Botan3TLS28TLS_CBC_HMAC_AEAD_Encryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xe85ee4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t entry_x23
size_t var_28 = entry_x23
int64_t x22
int64_t var_20 = x22
int64_t x8 = *arg2
int64_t x9_1 = *(arg2 + 8) - x8
uint64_t entry_x2

if (x9_1 u< entry_x2)
    Botan::assertion_failure("buffer.size() >= offset", "Offset ok", "update", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9)
else
    int64_t x0 = (*(*arg1 + 0x38))(arg1, x8 + entry_x2, x9_1 - entry_x2)
    int64_t x8_1 = *arg2
    int64_t x9_4 = x0 + entry_x2
    int64_t x10_2 = *(arg2 + 8) - x8_1
    
    if (x9_4 u> x10_2)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
    else if (x9_4 u< x10_2)
        *(arg2 + 8) = x8_1 + x9_4
    
    int64_t x8_4
    int64_t x9_5
    
    if (zx.d(*(arg1 + 0x60)) != 0)
        x8_4 = 0
        x9_5 = *(arg1 + 0x58)
        
        if (x9_5 == 0)
            goto label_e86134
        
        goto label_e85f78
    
    x8_4 = *(arg1 + 0x50)
    x9_5 = *(arg1 + 0x58)
    
    if (x9_5 != 0)
    label_e85f78:
        int64_t x24_1 = *arg2
        entry_x23 = *(arg1 + 0xb0) - *(arg1 + 0xa8)
        int64_t x27_1 = entry_x23 + 1 + x8_4
        int64_t x10_6 = x27_1 u% x9_5
        int64_t x28_1
        
        if (x10_6 == 0)
            x28_1 = 0
        else
            x28_1 = x9_5 - x10_6
        
        uint64_t fp_1 = entry_x23 + entry_x2
        uint64_t x26_1 = *(arg1 + 0x50) + fp_1 + (x28_1 & 0xff) + 1
        
        if (*(arg2 + 0x10) - x24_1 u< x26_1)
            int64_t x22_1 = *(arg2 + 8) - x24_1
            int64_t x0_3 = Botan::allocate_memory(x26_1, 1)
            void* x25_1 = *arg2
            int64_t x22_2 = x0_3 + x22_1
            size_t x2_1 = *(arg2 + 8) - x25_1
            x24_1 = x22_2 - x2_1
            
            if (x2_1 s>= 1)
                memcpy(x24_1, x25_1, x2_1)
            
            int64_t x8_9 = *(arg2 + 0x10)
            *arg2 = x24_1
            *(arg2 + 8) = x22_2
            *(arg2 + 0x10) = x0_3 + x26_1
            
            if (x25_1 != 0)
                Botan::deallocate_memory(x25_1, x8_9 - x25_1, 1)
                x24_1 = *arg2
        
        int64_t x8_11 = *(arg2 + 8) - x24_1
        
        if (fp_1 u> x8_11)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
            x24_1 = *arg2
        else if (fp_1 u< x8_11)
            *(arg2 + 8) = x24_1 + fp_1
        
        if (entry_x23 == 0)
            goto label_e86074
        
        if (x24_1 != 0)
            int64_t x1_5 = *(arg1 + 0xa8)
            
            if (x1_5 != 0)
                memmove(x24_1 + entry_x2, x1_5, entry_x23)
            label_e86074:
                int64_t* x0_8 = *(arg1 + 0x70)
                
                if (x0_8 == 0)
                    Botan::assertion_failure("m_mac is not null", &data_793a18, "mac", 
                        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1665)
                    Botan::assertion_failure("buffer.size() >= offset", "Offset ok", "update", 
                        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9)
                else
                    int64_t x1_6 = *(arg1 + 0x90)
                    (*(*x0_8 + 0x18))(x0_8, x1_6, *(arg1 + 0x98) - x1_6)
                    
                    if (zx.d(*(arg1 + 0x60)) == 0)
                        goto label_e86138
                    
                    if (*(arg1 + 0x48) == 0)
                        goto label_e860cc
                    
                    int64_t* x0_9 = *(arg1 + 0x70)
                    
                    if (x0_9 != 0)
                        int64_t x1_7 = *(arg1 + 0x78)
                        (*(*x0_9 + 0x18))(x0_9, x1_7, *(arg1 + 0x80) - x1_7)
                    label_e860cc:
                        Botan::TLS::TLS_CBC_HMAC_AEAD_Encryption::cbc_encrypt_record(arg1, arg2, 
                            entry_x2)
                        int64_t* x0_11 = *(arg1 + 0x70)
                        
                        if (x0_11 != 0)
                            (*(*x0_11 + 0x18))(x0_11, *arg2 + entry_x2, x28_1 + x27_1)
                            int64_t x8_21 = *arg2
                            int64_t x10_7 = *(arg2 + 8) - x8_21
                            int64_t x9_12 = x10_7 + *(arg1 + 0x50)
                            
                            if (x10_7 u< x9_12)
                                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                                    arg2)
                            else if (x10_7 u> x9_12)
                                *(arg2 + 8) = x8_21 + x9_12
                            
                            int64_t* x0_15 = *(arg1 + 0x70)
                            
                            if (x0_15 != 0)
                                *(arg2 + 8)
                                *(arg1 + 0x50)
                                jump(*(*x0_15 + 0x20))
                    
                    Botan::assertion_failure("m_mac is not null", &data_793a18, "mac", 
                        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1665)
                    Botan::assertion_failure("buffer.size() >= offset", "Offset ok", "update", 
                        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9)
    else
    label_e86134:
        Botan::throw_invalid_argument("align_to must not be 0", "round_up", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    label_e86138:
        int64_t* x0_13 = *(arg1 + 0x70)
        
        if (x0_13 != 0)
            (*(*x0_13 + 0x18))(x0_13, *arg2 + entry_x2, entry_x23)
            int64_t x8_24 = *arg2
            int64_t x10_8 = *(arg2 + 8) - x8_24
            int64_t x9_15 = x10_8 + *(arg1 + 0x50)
            
            if (x10_8 u< x9_15)
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
            else if (x10_8 u> x9_15)
                *(arg2 + 8) = x8_24 + x9_15
            
            int64_t* x0_16 = *(arg1 + 0x70)
            
            if (x0_16 != 0)
                (*(*x0_16 + 0x20))(x0_16, *(arg2 + 8) - *(arg1 + 0x50))
                return Botan::TLS::TLS_CBC_HMAC_AEAD_Encryption::cbc_encrypt_record(arg1, arg2, 
                    entry_x2) __tailcall
        
        Botan::assertion_failure("m_mac is not null", &data_793a18, "mac", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1665)
        Botan::assertion_failure("buffer.size() >= offset", "Offset ok", "update", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9)

sub_c776cc(Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
noreturn

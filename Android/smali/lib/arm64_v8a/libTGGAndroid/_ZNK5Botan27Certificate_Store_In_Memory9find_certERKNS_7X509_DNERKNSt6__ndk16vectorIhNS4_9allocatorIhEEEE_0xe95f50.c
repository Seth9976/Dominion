// 函数: _ZNK5Botan27Certificate_Store_In_Memory9find_certERKNS_7X509_DNERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEE
// 地址: 0xe95f50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i = *(arg1 + 8)
int64_t* entry_x8

for (int64_t x26 = *(arg1 + 0x10); i != x26; i = &i[2])
    int64_t* entry_x2
    
    if (entry_x2[1] == *entry_x2)
    label_e95f84:
        *i
        
        if ((Botan::operator==(Botan::X509_Certificate::data() + 0x90, arg2).d & 1) != 0)
            int64_t x8_5 = i[1]
            *entry_x8 = *i
            entry_x8[1] = x8_5
            
            if (x8_5 != 0)
                int32_t j
                
                do
                    j = __stxr(__ldxr(x8_5 + 8) + 1, x8_5 + 8)
                while (j != 0)
            
            return 
    else
        *i
        arg1 = Botan::X509_Certificate::data()
        int64_t var_60_1 = 0
        int64_t var_58_1 = 0
        int64_t x8_1 = *(arg1 + 0x288)
        int64_t x9_2 = *(arg1 + 0x280)
        uint64_t x24_1 = x8_1 - x9_2
        int32_t x23_3
        int32_t x24_2
        Botan::X509_DN const& x22_1
        
        if (x8_1 == x9_2)
            x22_1 = nullptr
        label_e96088:
            x24_2 = 0
            x23_3 = 1
            
            if (x22_1 != 0)
            label_e960a8:
                operator delete(x22_1)
        else
            if ((x24_1 & 0xffffffff80000000) != 0)
                sub_1101e04(std::__ndk1::__vector_base_common<true>::__throw_length_error())
                noreturn
            
            Botan::X509_DN const& x23_1 = arg1
            arg1 = operator new(x24_1)
            Botan::X509_DN const& var_68_1 = arg1
            void* var_58_2 = arg1 + x24_1
            int64_t x1_1 = *(x23_1 + 0x280)
            x22_1 = arg1
            size_t x23_2 = *(x23_1 + 0x288) - x1_1
            Botan::X509_DN const& x8_4 = arg1
            
            if (x23_2 s>= 1)
                memcpy(x22_1, x1_1, x23_2)
                x8_4 = x22_1 + x23_2
            
            Botan::X509_DN const& var_60_2 = x8_4
            
            if (x8_4 == x22_1)
                goto label_e96088
            
            char* x9_3 = *entry_x2
            
            if (x8_4 - x22_1 != entry_x2[1] - x9_3)
                x23_3 = 0
                x24_2 = 3
                
                if (x22_1 != 0)
                label_e960a8_1:
                    operator delete(x22_1)
            else
                if (x22_1 == x8_4)
                    goto label_e96088
                
                Botan::X509_DN const& x10_2 = x22_1
                
                do
                    uint32_t x11_3 = zx.d(*x10_2)
                    uint32_t x12_1 = zx.d(*x9_3)
                    x23_3 = x11_3 == x12_1 ? 1 : 0
                    
                    if (x11_3 != x12_1)
                        x24_2 = 3
                        
                        if (x22_1 != 0)
                            goto label_e960a8_2
                        
                        goto label_e960ac
                    
                    x10_2 += 1
                    x9_3 = &x9_3[1]
                while (x8_4 != x10_2)
                
                x24_2 = 0
                
                if (x22_1 != 0)
                label_e960a8_2:
                    operator delete(x22_1)
    label_e960ac:
        
        if (x23_3 != 0)
            goto label_e95f84
        
        if (x24_2 != 3 && x24_2 != 0)
            return 

*entry_x8 = 0
entry_x8[1] = 0

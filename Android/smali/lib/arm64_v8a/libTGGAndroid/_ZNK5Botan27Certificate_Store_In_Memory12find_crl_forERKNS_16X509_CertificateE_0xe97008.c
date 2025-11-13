// 函数: _ZNK5Botan27Certificate_Store_In_Memory12find_crl_forERKNS_16X509_CertificateE
// 地址: 0xe97008
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = Botan::X509_Certificate::data()
int64_t* x25 = *(arg1 + 0x20)
int64_t x26 = *(arg1 + 0x28)
int64_t* entry_x8

if (x25 != x26)
    void* result_3 = result
    
    do
        if (*(result_3 + 0x270) == *(result_3 + 0x268))
        label_e97048:
            *x25
            result =
                Botan::operator==(Botan::X509_CRL::data(), Botan::X509_Certificate::data() + 0x58)
            
            if ((result.d & 1) != 0)
                int64_t x8_4 = x25[1]
                *entry_x8 = *x25
                entry_x8[1] = x8_4
                
                if (x8_4 != 0)
                    int32_t i
                    
                    do
                        i = __stxr(__ldxr(x8_4 + 8) + 1, x8_4 + 8)
                    while (i != 0)
                
                return result
        else
            *x25
            result = Botan::X509_CRL::data()
            int64_t var_60_1 = 0
            int64_t var_58_1 = 0
            int64_t x9_2 = *(result + 0xe0)
            int64_t x8_1 = *(result + 0xe8)
            uint64_t x24_1 = x8_1 - x9_2
            int32_t x23_2
            int32_t x24_2
            void* result_4
            
            if (x8_1 == x9_2)
                result_4 = nullptr
            label_e97158:
                x24_2 = 0
                x23_2 = 1
                
                if (result_4 != 0)
                label_e97178:
                    result = operator delete(result_4)
            else
                if ((x24_1 & 0xffffffff80000000) != 0)
                    sub_1101e04(std::__ndk1::__vector_base_common<true>::__throw_length_error())
                    noreturn
                
                void* result_5 = result
                result = operator new(x24_1)
                void* result_1 = result
                void* var_58_2 = result + x24_1
                int64_t x1_2 = *(result_5 + 0xe0)
                result_4 = result
                size_t x23_1 = *(result_5 + 0xe8) - x1_2
                void* result_2 = result
                
                if (x23_1 s>= 1)
                    result = memcpy(result_4, x1_2, x23_1)
                    result_2 = result_4 + x23_1
                
                void* result_6 = result_2
                
                if (result_2 == result_4)
                    goto label_e97158
                
                char* x9_3 = *(result_3 + 0x268)
                
                if (result_2 - result_4 != *(result_3 + 0x270) - x9_3)
                    x23_2 = 0
                    x24_2 = 3
                    
                    if (result_4 != 0)
                    label_e97178_1:
                        result = operator delete(result_4)
                else
                    if (result_4 == result_2)
                        goto label_e97158
                    
                    void* result_7 = result_4
                    
                    do
                        uint32_t x11_3 = zx.d(*result_7)
                        uint32_t x12_1 = zx.d(*x9_3)
                        x23_2 = x11_3 == x12_1 ? 1 : 0
                        
                        if (x11_3 != x12_1)
                            x24_2 = 3
                            
                            if (result_4 != 0)
                                goto label_e97178_2
                            
                            goto label_e9717c
                        
                        result_7 += 1
                        x9_3 = &x9_3[1]
                    while (result_2 != result_7)
                    
                    x24_2 = 0
                    
                    if (result_4 != 0)
                    label_e97178_2:
                        result = operator delete(result_4)
        label_e9717c:
            
            if (x23_2 != 0)
                goto label_e97048
            
            if (x24_2 != 3 && x24_2 != 0)
                return result
        
        x25 = &x25[2]
    while (x25 != x26)

*entry_x8 = 0
entry_x8[1] = 0
return result

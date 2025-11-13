// 函数: _ZN5Botan14Base64_Decoder5writeEPKhm
// 地址: 0xd77758
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t entry_x2

if (entry_x2 == 0)
    return 

int64_t x8_1 = *(arg1 + 0x80)
size_t x19_1 = entry_x2
uint64_t x20_1 = arg2
void* var_70_1 = &arg1[0x68]

while (true)
    void* x25_1 = *(arg1 + 0x50)
    int64_t x0_7 = *(arg1 + 0x58)
    size_t x26_1 = x0_7 - x25_1
    size_t x9_2 = x26_1 - x8_1
    size_t x24_1
    
    x24_1 = x9_2 u< x19_1 ? x9_2 : x19_1
    
    if (x24_1 == 0)
        int64_t fp_1 = x26_1 << 1
        
        if (fp_1 u<= x26_1)
            if (fp_1 u< x26_1)
                *(arg1 + 0x58) = x25_1 + fp_1
            
            goto label_d77940
        
        int64_t x8_10 = *(arg1 + 0x60)
        
        if (x8_10 - x0_7 u>= x26_1)
            if (x26_1 != 0)
                memset(x0_7, 0, x26_1)
                x0_7 += x26_1
            
            *(arg1 + 0x58) = x0_7
        label_d77940:
            void* x25_4 = *(arg1 + 0x68)
            int64_t x0_13 = *(arg1 + 0x70)
            size_t x26_2 = x0_13 - x25_4
            int64_t fp_2 = x26_2 << 1
            
            if (fp_2 u<= x26_2)
                if (fp_2 u< x26_2)
                    *(arg1 + 0x70) = x25_4 + fp_2
                
                goto label_d777ec
            
            int64_t x8_14 = *(arg1 + 0x78)
            
            if (x8_14 - x0_13 u>= x26_2)
                if (x26_2 != 0)
                    memset(x0_13, 0, x26_2)
                    x0_13 += x26_2
                
                *(arg1 + 0x70) = x0_13
                goto label_d777ec
            
            if ((fp_2 & 0xffffffff80000000) == 0)
                void* x8_15 = x8_14 - x25_4
                int64_t x9_8 = x8_15 << 1
                int64_t x9_9
                
                x9_9 = x9_8 u< fp_2 ? fp_2 : x9_8
                
                int64_t x27_2
                
                x27_2 = x8_15 u< 0x3fffffffffffffff ? x9_9 : 0x7fffffffffffffff
                
                int64_t x28_2
                
                if (x27_2 == 0)
                    x28_2 = 0
                else
                    x28_2 = operator new(x27_2)
                
                memset(x28_2 + x26_2, 0, x26_2)
                
                if (x26_2 s>= 1)
                    memcpy(x28_2, x25_4, x26_2)
                
                *(arg1 + 0x68) = x28_2
                *(arg1 + 0x70) = x28_2 + fp_2
                *(arg1 + 0x78) = x28_2 + x27_2
                
                if (x25_4 != 0)
                    operator delete(x25_4)
                
                goto label_d777ec
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        else if ((fp_1 & 0xffffffff80000000) == 0)
            void* x8_11 = x8_10 - x25_1
            int64_t x9_4 = x8_11 << 1
            int64_t x9_5
            
            x9_5 = x9_4 u< fp_1 ? fp_1 : x9_4
            
            int64_t x27_1
            
            x27_1 = x8_11 u< 0x3fffffffffffffff ? x9_5 : 0x7fffffffffffffff
            
            int64_t x28_1
            
            if (x27_1 == 0)
                x28_1 = 0
            else
                x28_1 = operator new(x27_1)
            
            memset(x28_1 + x26_1, 0, x26_1)
            
            if (x26_1 s>= 1)
                memcpy(x28_1, x25_1, x26_1)
            
            *(arg1 + 0x50) = x28_1
            *(arg1 + 0x58) = x28_1 + fp_1
            *(arg1 + 0x60) = x28_1 + x27_1
            
            if (x25_1 != 0)
                operator delete(x25_1)
            
            goto label_d77940
    else if (x20_1 == 0 || x25_1 == 0)
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        memmove(x25_1 + x8_1, x20_1, x24_1)
    label_d777ec:
        uint64_t x2_1 = *(arg1 + 0x80) + x24_1
        *(arg1 + 0x80) = x2_1
        uint64_t var_68 = 0
        int64_t x0_2 = Botan::base64_decode(*(arg1 + 0x68), *(arg1 + 0x50), x2_1, &var_68, false, 
            (*(arg1 + 0x4c) != 2 ? 1 : 0).b)
        int64_t x1_2 = *(arg1 + 0x68)
        
        if (*(arg1 + 0x70) - x1_2 u< x0_2)
            Botan::assertion_failure("length <= in.size()", &data_793a18, "send", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x2d93)
        else
            (*(*arg1 + 0x38))(arg1, x1_2, x0_2)
            uint64_t x25_2 = var_68
            int64_t x8_8 = *(arg1 + 0x80)
            
            if (x8_8 == x25_2 || x8_8 == x25_2)
                x8_1 = 0
                size_t temp0_1 = x19_1
                x19_1 -= x24_1
                x20_1 += x24_1
                *(arg1 + 0x80) = 0
                
                if (temp0_1 == x24_1)
                    break
                
                continue
            else
                int64_t x0_4 = *(arg1 + 0x50)
                
                if (x0_4 != 0)
                    memmove(x0_4, x0_4 + x25_2, x8_8 - x25_2)
                    x8_1 = *(arg1 + 0x80) - x25_2
                    size_t temp1_1 = x19_1
                    x19_1 -= x24_1
                    x20_1 += x24_1
                    *(arg1 + 0x80) = x8_1
                    
                    if (temp1_1 == x24_1)
                        break
                    
                    continue
        
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    return Botan::Base64_Decoder::end_msg() __tailcall

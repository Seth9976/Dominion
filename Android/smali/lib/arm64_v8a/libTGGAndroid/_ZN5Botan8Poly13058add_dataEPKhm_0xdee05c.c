// 函数: _ZN5Botan8Poly13058add_dataEPKhm
// 地址: 0xdee05c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22_1 = &arg1[0x10]

if (*(x22_1 + 8) - *x22_1 != 0x40)
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
else
    uint64_t x20_1 = arg2
    int64_t* x1 = *(arg1 + 0x28)
    int64_t x9_1 = *(arg1 + 0x30)
    void* const x8_2 = *(arg1 + 0x40)
    void* entry_x2
    void* x21_1 = entry_x2
    void* x24_1 = x9_1 - x1
    
    if (x8_2 == 0)
        goto label_dee114
    
    void* x10_1 = x24_1 - x8_2
    
    if (x24_1 u< x8_2)
        Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
        Botan::SymmetricAlgorithm::throw_key_not_set_error()
    else
        size_t x2
        
        x2 = x10_1 u< x21_1 ? x10_1 : x21_1
        
        if (x2 == 0)
            goto label_dee0d4
        
        if (x20_1 != 0)
            memmove(x1 + x8_2, x20_1, x2)
            x1 = *(arg1 + 0x28)
            x9_1 = *(arg1 + 0x30)
            x8_2 = *(arg1 + 0x40)
            x24_1 = x9_1 - x1
        label_dee0d4:
            
            if (x8_2 + x21_1 u< x24_1)
                goto label_dee114
            
            sub_dee1e0(x22_1, x1, 1, 0)
            int64_t x10_3 = *(arg1 + 0x28)
            x9_1 = *(arg1 + 0x30)
            void* x11_1 = *(arg1 + 0x40)
            x8_2 = nullptr
            *(arg1 + 0x40) = 0
            x24_1 = x9_1 - x10_3
            x21_1 = x11_1 + x21_1 - x24_1
            x20_1 += x24_1 - x11_1
        label_dee114:
            uint64_t x23_1 = x21_1 u/ x24_1
            
            if (x24_1 u<= x21_1)
                sub_dee1e0(x22_1, x20_1, x23_1, 0)
                x8_2 = *(arg1 + 0x40)
                x9_1 = *(arg1 + 0x30)
            
            void* x10_5 = *(arg1 + 0x28)
            void* x9_2 = x9_1 - x10_5
            size_t x11_3 = x9_2 - x8_2
            
            if (x9_2 u< x8_2)
                Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
                    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
                Botan::SymmetricAlgorithm::throw_key_not_set_error()
            else
                size_t x21_2 = x21_1 u% x24_1
                size_t x2_2
                
                x2_2 = x11_3 u< x21_2 ? x11_3 : x21_2
                
                if (x2_2 == 0)
                    *(arg1 + 0x40) = x8_2 + x21_2
                    return 
                
                if (x20_1 != 0)
                    memmove(x10_5 + x8_2, x20_1 + x9_2 * x23_1, x2_2)
                    *(arg1 + 0x40) += x21_2
                    return 

int64_t* x0_5
int64_t* x1_4
int64_t x2_3
int32_t x3
x0_5, x1_4, x2_3, x3 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return sub_dee1e0(x0_5, x1_4, x2_3, x3) __tailcall

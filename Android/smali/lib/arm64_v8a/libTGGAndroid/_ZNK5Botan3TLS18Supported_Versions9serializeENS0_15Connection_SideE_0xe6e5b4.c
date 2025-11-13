// 函数: _ZNK5Botan3TLS18Supported_Versions9serializeENS0_15Connection_SideE
// 地址: 0xe6e5b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int16_t* x24 = *(arg1 + 8)
int64_t x20 = *(arg1 + 0x10)
void* x21 = x20 - x24
int32_t entry_x1

if (entry_x1 == 2)
    if (x21 == 2)
        uint32_t x21_1 = zx.d(*x24)
        uint8_t* x0 = operator new(1)
        *x0 = (x21_1 u>> 8).b
        *entry_x8 = x0
        entry_x8[1] = &x0[1]
        entry_x8[2] = &x0[1]
        char x21_2 = (*x24).b
        uint8_t* x0_1
        int128_t v0
        int128_t v1
        x0_1, v0, v1 = operator new(2)
        uint8_t x9_2 = *x0
        v0.q = x0_1
        v0:8.q = x0_1
        v1.q = 2
        v1:8.q = 2
        x0_1[1] = x21_2
        *entry_x8 = x0_1
        *x0_1 = x9_2
        *(entry_x8 + 8) = v0 + v1
        return operator delete(x0) __tailcall
    
    Botan::assertion_failure("m_versions.size() == 1", &data_793a18, "serialize", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x146d5)
else if (x21 != 0)
    uint8_t* result = operator new(1)
    char* x8_2 = &result[1]
    *result = x21.b & 0xfe
    *entry_x8 = result
    entry_x8[1] = x8_2
    entry_x8[2] = x8_2
    
    if (x24 == x20)
        return result
    
    char* fp_1 = x8_2
    uint32_t x28_1 = zx.d(*x24)
    void* fp_2
    
    if (fp_1 u>= x8_2)
    label_e6e6b8:
        void* x20_2 = *entry_x8
        size_t x21_3 = fp_1 - x20_2
        
        if (x21_3 + 1 s>= 0)
            void* x8_4 = x8_2 - x20_2
            int64_t x10_2 = x8_4 << 1
            int64_t x9_6
            
            if (x10_2 u< x21_3 + 1)
                x9_6 = x21_3 + 1
            else
                x9_6 = x10_2
            
            int64_t x22_1
            
            x22_1 = x8_4 u< 0x3fffffffffffffff ? x9_6 : 0x7fffffffffffffff
            
            uint8_t* result_1
            
            if (x22_1 == 0)
                result_1 = nullptr
            else
                result = operator new(x22_1)
                result_1 = result
            
            void* fp_3 = &result_1[x21_3]
            *fp_3 = (x28_1 u>> 8).b
            fp_2 = fp_3 + 1
            
            if (x21_3 s>= 1)
                result = memcpy(result_1, x20_2, x21_3)
            
            *entry_x8 = result_1
            entry_x8[1] = fp_2
            entry_x8[2] = &result_1[x22_1]
            
            if (x20_2 == 0)
                goto label_e6e738
            
            result = operator delete(x20_2)
            fp_2 = entry_x8[1]
            goto label_e6e738
    else
        while (true)
            *fp_1 = (x28_1 u>> 8).b
            fp_2 = &fp_1[1]
            entry_x8[1] = fp_2
        label_e6e738:
            int64_t x8_7 = entry_x8[2]
            
            if (fp_2 u>= x8_7)
                void* x20_3 = *entry_x8
                size_t x21_4 = fp_2 - x20_3
                
                if (x21_4 + 1 s< 0)
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    break
                
                void* x8_8 = x8_7 - x20_3
                int64_t x10_3 = x8_8 << 1
                int64_t x9_8
                
                if (x10_3 u< x21_4 + 1)
                    x9_8 = x21_4 + 1
                else
                    x9_8 = x10_3
                
                int64_t x22_2
                
                x22_2 = x8_8 u< 0x3fffffffffffffff ? x9_8 : 0x7fffffffffffffff
                
                uint8_t* result_2
                void* fp_6
                
                if (x22_2 == 0)
                    result_2 = nullptr
                    *x21_4 = x28_1.b
                    fp_6 = x21_4 + 1
                    
                    if (x21_4 s>= 1)
                        result = memcpy(result_2, x20_3, x21_4)
                else
                    result = operator new(x22_2)
                    result_2 = result
                    uint8_t* fp_5 = &result_2[x21_4]
                    *fp_5 = x28_1.b
                    fp_6 = &fp_5[1]
                    
                    if (x21_4 s>= 1)
                        result = memcpy(result_2, x20_3, x21_4)
                
                *entry_x8 = result_2
                entry_x8[1] = fp_6
                entry_x8[2] = &result_2[x22_2]
                
                if (x20_3 != 0)
                    result = operator delete(x20_3)
            else
                *fp_2 = x28_1.b
                entry_x8[1] = fp_2 + 1
            
            if (x20 - 2 == x24)
                return result
            
            fp_1 = entry_x8[1]
            x8_2 = entry_x8[2]
            x24 = &x24[1]
            x28_1 = zx.d(*x24)
            
            if (fp_1 u>= x8_2)
                goto label_e6e6b8
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    Botan::assertion_failure("m_versions.size() == 1", &data_793a18, "serialize", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x146d5)

int64_t* x0_12 = Botan::assertion_failure("m_versions.size() >= 1", &data_793a18, "serialize", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x146db)
uint8_t* x0_13 = *entry_x8

if (x0_13 != 0)
    entry_x8[1] = x0_13
    operator delete(x0_13)

sub_1101e04(x0_12)
noreturn

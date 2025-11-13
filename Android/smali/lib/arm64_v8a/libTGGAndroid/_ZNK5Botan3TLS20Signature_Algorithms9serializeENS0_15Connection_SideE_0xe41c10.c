// 函数: _ZNK5Botan3TLS20Signature_Algorithms9serializeENS0_15Connection_SideE
// 地址: 0xe41c10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t** entry_x19
uint8_t** var_8 = entry_x19
int64_t x22 = *(arg1 + 0x10) - *(arg1 + 8)

if (x22 s>> 1 u< 0x100)
    void* x20_1 = arg1
    uint8_t** entry_x8
    entry_x19 = entry_x8
    __builtin_memset(entry_x8, 0, 0x18)
    uint8_t* x0 = operator new(1)
    char* x21_1 = x0
    *x0 = (x22 u>> 8).b
    *entry_x19 = x0
    entry_x19[1] = &x0[1]
    entry_x19[2] = &x0[1]
    uint8_t* x0_1
    int128_t v0_1
    int128_t v1_1
    x0_1, v0_1, v1_1 = operator new(2)
    uint8_t x10_1 = *x21_1
    v0_1.q = x0_1
    v0_1:8.q = x0_1
    v1_1.q = 2
    v1_1:8.q = 2
    *entry_x19 = x0_1
    x0_1[1] = x22.b & 0xfe
    *x0_1 = x10_1
    *(entry_x19 + 8) = v0_1 + v1_1
    uint8_t* result = operator delete(x21_1)
    int16_t* x24_1 = *(x20_1 + 8)
    int64_t x25_1 = *(x20_1 + 0x10)
    
    if (x24_1 == x25_1)
        return result
    
    while (true)
        uint8_t* fp_2 = entry_x19[1]
        int64_t x8_2 = entry_x19[2]
        uint32_t x28_1 = zx.d(*x24_1)
        void* fp_3
        
        if (fp_2 u>= x8_2)
            void* x20_2 = *entry_x19
            size_t x21_2 = fp_2 - x20_2
            
            if (x21_2 + 1 s< 0)
                break
            
            void* x8_4 = x8_2 - x20_2
            int64_t x10_2 = x8_4 << 1
            int64_t x9_4
            
            if (x10_2 u< x21_2 + 1)
                x9_4 = x21_2 + 1
            else
                x9_4 = x10_2
            
            int64_t x22_1
            
            x22_1 = x8_4 u< 0x3fffffffffffffff ? x9_4 : 0x7fffffffffffffff
            
            uint8_t* result_1
            
            if (x22_1 == 0)
                result_1 = nullptr
            else
                result = operator new(x22_1)
                result_1 = result
            
            char* fp_4 = &result_1[x21_2]
            *fp_4 = (x28_1 u>> 8).b
            fp_3 = &fp_4[1]
            
            if (x21_2 s>= 1)
                result = memcpy(result_1, x20_2, x21_2)
            
            *entry_x19 = result_1
            entry_x19[1] = fp_3
            entry_x19[2] = &result_1[x22_1]
            
            if (x20_2 != 0)
                result = operator delete(x20_2)
                fp_3 = entry_x19[1]
        else
            *fp_2 = (x28_1 u>> 8).b
            fp_3 = &fp_2[1]
            entry_x19[1] = fp_3
        
        int64_t x8_7 = entry_x19[2]
        
        if (fp_3 u< x8_7)
            *fp_3 = x28_1.b
            entry_x19[1] = fp_3 + 1
        else
            uint8_t* x20_3 = *entry_x19
            size_t x21_3 = fp_3 - x20_3
            
            if (x21_3 + 1 s< 0)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                break
            
            void* x8_8 = x8_7 - x20_3
            int64_t x10_3 = x8_8 << 1
            int64_t x9_6
            
            if (x10_3 u< x21_3 + 1)
                x9_6 = x21_3 + 1
            else
                x9_6 = x10_3
            
            int64_t x22_2
            
            x22_2 = x8_8 u< 0x3fffffffffffffff ? x9_6 : 0x7fffffffffffffff
            
            uint8_t* result_2
            void* fp_6
            
            if (x22_2 == 0)
                result_2 = nullptr
                *x21_3 = x28_1.b
                fp_6 = x21_3 + 1
                
                if (x21_3 s>= 1)
                    result = memcpy(result_2, x20_3, x21_3)
            else
                result = operator new(x22_2)
                result_2 = result
                void* fp_5 = &result_2[x21_3]
                *fp_5 = x28_1.b
                fp_6 = fp_5 + 1
                
                if (x21_3 s>= 1)
                    result = memcpy(result_2, x20_3, x21_3)
            
            *entry_x19 = result_2
            entry_x19[1] = fp_6
            entry_x19[2] = &result_2[x22_2]
            
            if (x20_3 != 0)
                result = operator delete(x20_3)
        
        x24_1 = &x24_1[1]
        
        if (x25_1 == x24_1)
            return result
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

int64_t* x0_11 = Botan::assertion_failure("m_schemes.size() < 256", "Too many signature schemes", 
    "serialize", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x14633)
uint8_t* x0_12 = *entry_x19

if (x0_12 != 0)
    entry_x19[1] = x0_12
    operator delete(x0_12)

sub_1101e04(x0_11)
noreturn

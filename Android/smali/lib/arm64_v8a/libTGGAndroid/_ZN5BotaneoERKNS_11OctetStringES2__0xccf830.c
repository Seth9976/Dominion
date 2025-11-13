// 函数: _ZN5BotaneoERKNS_11OctetStringES2_
// 地址: 0xccf830
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x1 = *arg1
void* var_58_1
__builtin_memset(&var_58_1, 0, 0x18)
uint64_t x2 = *(arg1 + 8) - x1
uint64_t x8_1 = *(arg2 + 8) - *arg2
uint64_t x23

x23 = x2 u< x8_1 ? x8_1 : x2

void* var_50_1
void* var_48_1
void* x20_1
void* x24_1
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7

if (x23 == 0)
    x24_1 = nullptr
    x20_1 = nullptr
    
    if (x2 == 0)
        goto label_ccf8cc
    
label_ccf8bc:
    
    if (x20_1 == 0 || x1 == 0)
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    else
        arg1, v0, v1, v2, v3, v4, v5, v6, v7 = memmove(x20_1, x1, x2)
    label_ccf8cc:
        void* x8_3 = *arg2
        int64_t x9_1 = *(arg2 + 8)
        void* x11_1 = x9_1 - x8_3
        void* x10_1 = x11_1 & 0xffffffffffffffe0
        
        if (x10_1 != 0)
            int64_t x12_1 = 0
            
            if (x10_1 == 0x20 || x20_1 + 0x18 + x10_1 - 0x20 u< x20_1 + 0x18
                    || x20_1 + 0x10 + x10_1 - 0x20 u< x20_1 + 0x10
                    || x20_1 + 8 + x10_1 - 0x20 u< x20_1 + 8 || x20_1 + x10_1 - 0x20 u< x20_1)
                goto label_ccf990
            
            if (x20_1 u>= x8_3 + x10_1 || x8_3 u>= x20_1 + x10_1)
                int64_t i_11 = (((x10_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x12_1 = i_11 << 5
                int64_t i_8 = i_11
                void* x16_2 = x8_3
                void* x17_2 = x20_1
                int64_t i
                
                do
                    v0.q = *x17_2
                    v1.q = *(x17_2 + 8)
                    v2.q = *(x17_2 + 0x10)
                    v3.q = *(x17_2 + 0x18)
                    v0:8.q = *(x17_2 + 0x20)
                    v1:8.q = *(x17_2 + 0x28)
                    v2:8.q = *(x17_2 + 0x30)
                    v3:8.q = *(x17_2 + 0x38)
                    v4.q = *x16_2
                    v5.q = *(x16_2 + 8)
                    v6.q = *(x16_2 + 0x10)
                    v7.q = *(x16_2 + 0x18)
                    v4:8.q = *(x16_2 + 0x20)
                    v5:8.q = *(x16_2 + 0x28)
                    v6:8.q = *(x16_2 + 0x30)
                    v7:8.q = *(x16_2 + 0x38)
                    x16_2 += 0x40
                    i = i_8
                    i_8 -= 2
                    int128_t v16_1 = v4 ^ v0
                    int128_t v17_1 = v5 ^ v1
                    int128_t v18_1 = v6 ^ v2
                    int128_t v19_1 = v7 ^ v3
                    *x17_2 = v16_1.q
                    *(x17_2 + 8) = v17_1.q
                    *(x17_2 + 0x10) = v18_1.q
                    *(x17_2 + 0x18) = v19_1.q
                    *(x17_2 + 0x20) = v16_1:8.q
                    *(x17_2 + 0x28) = v17_1:8.q
                    *(x17_2 + 0x30) = v18_1:8.q
                    *(x17_2 + 0x38) = v19_1:8.q
                    x17_2 += 0x40
                while (i != 2)
                
                if (((x10_1 - 0x20) u>> 5) + 1 != i_11)
                    goto label_ccf990
            else
                x12_1 = 0
            label_ccf990:
                void* i_7 = x12_1 - x10_1
                void* x12_5 = x8_3 + x12_1 + 0x10
                void* x14_4 = x20_1 + x12_1 + 0x10
                void* i_1
                
                do
                    v2 = *(x12_5 - 0x10)
                    v3 = *x12_5
                    i_1 = i_7
                    i_7 += 0x20
                    x12_5 += 0x20
                    v1 = v3 ^ *x14_4
                    *(x14_4 - 0x10) ^= v2
                    *x14_4 = v1
                    x14_4 += 0x20
                while (i_1 != -0x20)
        
        if (x10_1 != x11_1)
            void* x12_6 = x11_1 - x10_1
            
            if (x12_6 u< 8 || (x20_1 + x10_1 u< x9_1 && x8_3 + x10_1 u< x20_1 + x11_1))
                goto label_ccfa88
            
            void* i_10
            
            if (x12_6 u>= 0x20)
                i_10 = x12_6 & 0xffffffffffffffe0
                void* x13_5 = x8_3 + x10_1 + 0x10
                void* x14_6 = x20_1 + x10_1 + 0x10
                void* i_9 = i_10
                void* i_2
                
                do
                    v0 = *(x13_5 - 0x10)
                    v1 = *x13_5
                    x13_5 += 0x20
                    i_2 = i_9
                    i_9 -= 0x20
                    v1 ^= *x14_6
                    *(x14_6 - 0x10) ^= v0
                    *x14_6 = v1
                    x14_6 += 0x20
                while (i_2 != 0x20)
                
                if (x12_6 != i_10)
                    if ((x12_6 & 0x18) != 0)
                        goto label_ccfa48
                    
                    x10_1 += i_10
                label_ccfa88:
                    void* x8_4 = x10_1 + x8_3
                    void* i_5 = x8_4 - x9_1
                    char* x10_2 = x20_1 + x10_1
                    void* i_3
                    
                    do
                        char x11_3 = *x8_4
                        x8_4 += 1
                        i_3 = i_5
                        i_5 += 1
                        *x10_2 ^= x11_3
                        x10_2 = &x10_2[1]
                    while (i_3 u< -1)
            else
                i_10 = nullptr
            label_ccfa48:
                void* x13_6 = x12_6 & 0xfffffffffffffff8
                void* x15_3 = i_10 + x10_1
                x10_1 += x13_6
                void* x14_7 = x8_3 + x15_3
                int64_t* x15_4 = x20_1 + x15_3
                void* i_6 = i_10 - x13_6
                void* i_4
                
                do
                    v0.q = *x14_7
                    x14_7 += 8
                    v1.q = *x15_4
                    i_4 = i_6
                    i_6 += 8
                    *x15_4 = (v1 ^ v0).q
                    x15_4 = &x15_4[1]
                while (i_4 != -8)
                
                if (x12_6 != x13_6)
                    goto label_ccfa88
        
        void* x22_2 = x24_1 - x20_1
        Botan::OctetString** entry_x8
        __builtin_memset(entry_x8, 0, 0x18)
        
        if (x24_1 == x20_1)
        label_ccfb04:
            
            if (x20_1 != 0)
                void* var_50_2 = x20_1
                Botan::deallocate_memory(x20_1, var_48_1 - x20_1, 1)
            
            return 
        
        if ((x22_2 & 0xffffffff80000000) == 0)
            arg1 = Botan::allocate_memory(x22_2, 1)
            x20_1 = var_58_1
            Botan::OctetString const& x21_1 = arg1
            *entry_x8 = arg1
            entry_x8[1] = arg1
            void* x22_3 = var_50_1 - x20_1
            entry_x8[2] = arg1 + x22_2
            
            if (x22_3 s>= 1)
                memcpy(x21_1, x20_1, x22_3)
                x21_1 += x22_3
            
            entry_x8[1] = x21_1
            goto label_ccfb04
else
    if ((x23 & 0xffffffff80000000) == 0)
        Botan::OctetString const& x22_1 = arg1
        void* x0_1 = Botan::allocate_memory(x23, 1)
        x24_1 = x0_1 + x23
        x20_1 = x0_1
        var_58_1 = x0_1
        var_48_1 = x24_1
        arg1, v0, v1, v2, v3, v4, v5, v6, v7 = memset(x0_1, 0, x23)
        var_50_1 = x24_1
        x1 = *x22_1
        x2 = *(x22_1 + 8) - x1
        
        if (x2 != 0)
            goto label_ccf8bc
        
        goto label_ccf8cc
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
noreturn

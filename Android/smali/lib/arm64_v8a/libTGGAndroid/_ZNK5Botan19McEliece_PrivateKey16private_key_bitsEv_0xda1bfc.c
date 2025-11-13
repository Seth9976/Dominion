// 函数: _ZNK5Botan19McEliece_PrivateKey16private_key_bitsEv
// 地址: 0xda1bfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int64_t* result_1 = nullptr
int64_t var_a0 = (zx.o(0)).q
int128_t var_90
__builtin_memset(&var_90, 0, 0x20)
void var_d0
Botan::DER_Encoder::start_cons(&var_d0, 0x10)
Botan::DER_Encoder::start_cons(&var_d0, 0x10)
void* entry_x0
*(entry_x0 + 0xa0)
uint64_t x0_3 = Botan::DER_Encoder::encode(&var_d0)
*(entry_x0 + 0x98)
int64_t x0_4 = Botan::DER_Encoder::encode(x0_3)
Botan::DER_Encoder::end_cons()
*(entry_x0 + 0x88)
Botan::DER_Encoder::add_object(x0_4, 4, nullptr, *(entry_x0 + 0x80))
*(entry_x0 + 8)
Botan::polyn_gf2m::encode()
uint64_t var_e8
Botan::DER_Encoder::add_object(x0_4, 4, nullptr, var_e8)
void* x0_8 = var_e8
void* var_e0
int64_t var_d8

if (x0_8 != 0)
    var_e0 = x0_8
    Botan::deallocate_memory(x0_8, var_d8 - x0_8, 1)

Botan::DER_Encoder::start_cons(&var_d0, 0x10)

if (*(entry_x0 + 0x28) != *(entry_x0 + 0x20))
    int64_t x19_1 = 0
    int64_t i = 0
    
    do
        Botan::polyn_gf2m::encode()
        Botan::DER_Encoder::add_object(&var_d0, 4, nullptr, var_e8)
        
        if (var_e8 != 0)
            var_e0 = var_e8
            Botan::deallocate_memory(var_e8, var_d8 - var_e8, 1)
        
        i += 1
        x19_1 += 0x30
    while (i u< ((*(entry_x0 + 0x28) - *(entry_x0 + 0x20)) s>> 4) * -0x5555555555555555)

Botan::DER_Encoder::end_cons()
void* var_e8_1
__builtin_memset(&var_e8_1, 0, 0x18)
int16_t* x26 = *(entry_x0 + 0x38)
int64_t x9_5 = *(entry_x0 + 0x40)
void* var_d8_1
void* x3_3

if (x26 == x9_5)
    x3_3 = nullptr
label_da1f44:
    Botan::DER_Encoder::add_object(&var_d0, 4, nullptr, x3_3)
    void* var_100_1
    __builtin_memset(&var_100_1, 0, 0x18)
    int32_t* x24_5 = *(entry_x0 + 0x50)
    int64_t x9_12 = *(entry_x0 + 0x58)
    void* var_f0_1
    void* x3_4
    
    if (x24_5 == x9_12)
        x3_4 = nullptr
    label_da2288:
        Botan::DER_Encoder::add_object(&var_d0, 4, nullptr, x3_4)
        Botan::DER_Encoder::end_cons()
        Botan::DER_Encoder::get_contents()
        void* x0_39 = var_100_1
        
        if (x0_39 != 0)
            void* var_f8_5 = x0_39
            Botan::deallocate_memory(x0_39, var_f0_1 - x0_39, 1)
        
        void* x0_40 = var_e8_1
        
        if (x0_40 != 0)
            void* var_e0_3 = x0_40
            Botan::deallocate_memory(x0_40, var_d8_1 - x0_40, 1)
        
        void* x21_7 = var_90:8.q
        
        if (x21_7 != 0)
            int128_t var_80
            void* x19_17 = var_80.q
            void* x0_42
            
            if (x19_17 == x21_7)
                x0_42 = x21_7
            else
                do
                    x19_17 -= 0x38
                    sub_f230d4(&var_80:8, x19_17)
                while (x21_7 != x19_17)
                
                x0_42 = var_90:8.q
            
            var_80.q = x21_7
            operator delete(x0_42)
        
        int64_t x0_43 = var_a0
        
        if (x0_43 != 0)
            var_a0 = x0_43
            Botan::deallocate_memory(x0_43, var_90.q - x0_43, 1)
        
        int64_t* result = result_1
        
        if (&var_d0 == result)
            result = (*(*result + 0x20))()
        else if (result != 0)
            result = (*(*result + 0x28))()
        
        if (*(x25 + 0x28) == x8)
            return result
    else
        void* x8_18 = nullptr
        uint8_t* x19_3 = nullptr
        int32_t fp_1 = *x24_5
    label_da1f90:
        void* x20_1 = var_100_1
        void* x19_4 = x19_3 - x20_1
        
        if (x19_4 + 1 s< 0)
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        else
            void* x8_19 = x8_18 - x20_1
            uint64_t x10_3 = x8_19 << 1
            uint64_t x9_14
            
            if (x10_3 u< x19_4 + 1)
                x9_14 = x19_4 + 1
            else
                x9_14 = x10_3
            
            uint64_t x21_3
            
            x21_3 = x8_19 u< 0x3fffffffffffffff ? x9_14 : 0x7fffffffffffffff
            
            void* var_f8_1
            void* x2_5
            void* const x22_3
            
            if (x21_3 == 0)
                x22_3 = nullptr
                x2_5 = x19_4
            else
                void* x0_23 = Botan::allocate_memory(x21_3, 1)
                x20_1 = var_100_1
                x22_3 = x0_23
                x2_5 = var_f8_1 - x20_1
            
            void* x19_5 = x22_3 + x19_4
            void* x23_3 = x19_5 - x2_5
            *x19_5 = (fp_1 u>> 0x18).b
            void* x19_6 = x19_5 + 1
            
            if (x2_5 s>= 1)
                memcpy(x23_3, x20_1, x2_5)
            
            void* x8_22 = var_f0_1
            var_100_1 = x23_3
            void* var_f8_2 = x19_6
            var_f0_1 = x22_3 + x21_3
            
            if (x20_1 != 0)
                Botan::deallocate_memory(x20_1, x8_22 - x20_1, 1)
                x19_6 = var_f8_2
            
            void* x8_25 = var_f0_1
            void* var_f8_3
            void* x19_7
            
            if (x19_6 u< x8_25)
            label_da203c:
                *x19_6 = (fp_1 u>> 0x10).b
                x19_7 = x19_6 + 1
                var_f8_3 = x19_7
                goto label_da2100
            
            while (true)
                void* x20_2 = var_100_1
                void* x19_8 = x19_6 - x20_2
                
                if (x19_8 + 1 s< 0)
                    break
                
                void* x8_26 = x8_25 - x20_2
                int64_t x10_4 = x8_26 << 1
                int64_t x9_17
                
                if (x10_4 u< x19_8 + 1)
                    x9_17 = x19_8 + 1
                else
                    x9_17 = x10_4
                
                int64_t x21_4
                
                x21_4 = x8_26 u< 0x3fffffffffffffff ? x9_17 : 0x7fffffffffffffff
                
                void* x2_6
                void* const x22_4
                
                if (x21_4 == 0)
                    x22_4 = nullptr
                    x2_6 = x19_8
                else
                    void* x0_27 = Botan::allocate_memory(x21_4, 1)
                    x20_2 = var_100_1
                    x22_4 = x0_27
                    x2_6 = var_f8_2 - x20_2
                
                void* x19_9 = x22_4 + x19_8
                void* x23_4 = x19_9 - x2_6
                *x19_9 = (fp_1 u>> 0x10).b
                x19_7 = x19_9 + 1
                
                if (x2_6 s>= 1)
                    memcpy(x23_4, x20_2, x2_6)
                
                void* x8_29 = var_f0_1
                var_100_1 = x23_4
                var_f8_3 = x19_7
                var_f0_1 = x22_4 + x21_4
                
                if (x20_2 != 0)
                    Botan::deallocate_memory(x20_2, x8_29 - x20_2, 1)
                    x19_7 = var_f8_3
                
            label_da2100:
                void* var_f8_4
                void* x19_10
                
                if (x19_7 u>= var_f0_1)
                    void* x20_3 = var_100_1
                    size_t x19_11 = x19_7 - x20_3
                    
                    if (x19_11 + 1 s< 0)
                        goto label_da23ac
                    
                    void* x8_32 = var_f0_1 - x20_3
                    int64_t x10_5 = x8_32 << 1
                    int64_t x9_20
                    
                    if (x10_5 u< x19_11 + 1)
                        x9_20 = x19_11 + 1
                    else
                        x9_20 = x10_5
                    
                    int64_t x21_5
                    
                    x21_5 = x8_32 u< 0x3fffffffffffffff ? x9_20 : 0x7fffffffffffffff
                    
                    size_t x2_7
                    void* const x22_5
                    
                    if (x21_5 == 0)
                        x22_5 = nullptr
                        x2_7 = x19_11
                    else
                        void* x0_31 = Botan::allocate_memory(x21_5, 1)
                        x20_3 = var_100_1
                        x22_5 = x0_31
                        x2_7 = var_f8_3 - x20_3
                    
                    char* x19_12 = x22_5 + x19_11
                    void* x23_5 = x19_12 - x2_7
                    *x19_12 = (fp_1 u>> 8).b
                    x19_10 = &x19_12[1]
                    
                    if (x2_7 s>= 1)
                        memcpy(x23_5, x20_3, x2_7)
                    
                    void* x8_35 = var_f0_1
                    var_100_1 = x23_5
                    var_f8_4 = x19_10
                    var_f0_1 = x22_5 + x21_5
                    
                    if (x20_3 != 0)
                        Botan::deallocate_memory(x20_3, x8_35 - x20_3, 1)
                        x19_10 = var_f8_4
                else
                    *x19_7 = (fp_1 u>> 8).b
                    x19_10 = x19_7 + 1
                    var_f8_4 = x19_10
                
                if (x19_10 u>= var_f0_1)
                    void* x20_4 = var_100_1
                    size_t x19_14 = x19_10 - x20_4
                    
                    if (x19_14 + 1 s< 0)
                        goto label_da23b4
                    
                    void* x8_37 = var_f0_1 - x20_4
                    int64_t x10_6 = x8_37 << 1
                    int64_t x9_23
                    
                    if (x10_6 u< x19_14 + 1)
                        x9_23 = x19_14 + 1
                    else
                        x9_23 = x10_6
                    
                    int64_t x21_6
                    
                    x21_6 = x8_37 u< 0x3fffffffffffffff ? x9_23 : 0x7fffffffffffffff
                    
                    size_t x2_8
                    void* const x22_6
                    
                    if (x21_6 == 0)
                        x22_6 = nullptr
                        x2_8 = x19_14
                    else
                        void* x0_35 = Botan::allocate_memory(x21_6, 1)
                        x20_4 = var_100_1
                        x22_6 = x0_35
                        x2_8 = var_f8_4 - x20_4
                    
                    char* x19_15 = x22_6 + x19_14
                    void* x23_6 = x19_15 - x2_8
                    *x19_15 = fp_1.b
                    
                    if (x2_8 s>= 1)
                        memcpy(x23_6, x20_4, x2_8)
                    
                    void* x8_39 = var_f0_1
                    var_100_1 = x23_6
                    var_f8_1 = &x19_15[1]
                    var_f0_1 = x22_6 + x21_6
                    
                    if (x20_4 != 0)
                        Botan::deallocate_memory(x20_4, x8_39 - x20_4, 1)
                else
                    *x19_10 = fp_1.b
                    var_f8_1 = x19_10 + 1
                
                if (x9_12 - 4 == x24_5)
                    x3_4 = var_100_1
                    goto label_da2288
                
                x19_3 = var_f8_1
                x8_18 = var_f0_1
                x24_5 = &x24_5[1]
                fp_1 = *x24_5
                
                if (x19_3 u>= x8_18)
                    goto label_da1f90
                
                *x19_3 = (fp_1 u>> 0x18).b
                x19_6 = &x19_3[1]
                var_f8_2 = x19_6
                x8_25 = var_f0_1
                
                if (x19_6 u< x8_25)
                    goto label_da203c
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    void* x8_7 = nullptr
    uint8_t* x25_1 = nullptr
    uint32_t x19_2 = zx.d(*x26)
label_da1db8:
    void* x21_1 = var_e8_1
    void* x24_1 = x25_1 - x21_1
    
    if (x24_1 + 1 s>= 0)
        void* x8_8 = x8_7 - x21_1
        int64_t x10_1 = x8_8 << 1
        int64_t x9_7
        
        if (x10_1 u< x24_1 + 1)
            x9_7 = x24_1 + 1
        else
            x9_7 = x10_1
        
        int64_t x22_1
        
        x22_1 = x8_8 u< 0x3fffffffffffffff ? x9_7 : 0x7fffffffffffffff
        
        void* var_e0_1
        void* x2_3
        void* const x23_1
        
        if (x22_1 == 0)
            x23_1 = nullptr
            x2_3 = x24_1
        else
            void* x0_14 = Botan::allocate_memory(x22_1, 1)
            x21_1 = var_e8_1
            x23_1 = x0_14
            x2_3 = var_e0_1 - x21_1
        
        void* x25_2 = x23_1 + x24_1
        void* x24_2 = x25_2 - x2_3
        *x25_2 = (x19_2 u>> 8).b
        void* x25_3 = x25_2 + 1
        
        if (x2_3 s>= 1)
            memcpy(x24_2, x21_1, x2_3)
        
        void* x8_11 = var_d8_1
        var_e8_1 = x24_2
        void* var_e0_2 = x25_3
        var_d8_1 = x23_1 + x22_1
        
        if (x21_1 != 0)
            Botan::deallocate_memory(x21_1, x8_11 - x21_1, 1)
            x25_3 = var_e0_2
        
        void* x8_13 = var_d8_1
        
        if (x25_3 u>= x8_13)
            do
                void* x21_2 = var_e8_1
                size_t x24_3 = x25_3 - x21_2
                
                if (x24_3 + 1 s< 0)
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    goto label_da23a4
                
                int64_t x8_14 = x8_13 - x21_2
                int64_t x10_2 = x8_14 << 1
                int64_t x9_10
                
                if (x10_2 u< x24_3 + 1)
                    x9_10 = x24_3 + 1
                else
                    x9_10 = x10_2
                
                int64_t x22_2
                
                x22_2 = x8_14 u< 0x3fffffffffffffff ? x9_10 : 0x7fffffffffffffff
                
                size_t x2_4
                void* const x23_2
                
                if (x22_2 == 0)
                    x23_2 = nullptr
                    x2_4 = x24_3
                else
                    void* x0_18 = Botan::allocate_memory(x22_2, 1)
                    x21_2 = var_e8_1
                    x23_2 = x0_18
                    x2_4 = var_e0_2 - x21_2
                
                uint8_t* x25_5 = x23_2 + x24_3
                void* x24_4 = x25_5 - x2_4
                *x25_5 = x19_2.b
                
                if (x2_4 s>= 1)
                    memcpy(x24_4, x21_2, x2_4)
                
                void* x8_16 = var_d8_1
                var_e8_1 = x24_4
                var_e0_1 = &x25_5[1]
                var_d8_1 = x23_2 + x22_2
                
                if (x21_2 != 0)
                    Botan::deallocate_memory(x21_2, x8_16 - x21_2, 1)
                
            label_da1f18:
                
                if (x9_5 - 2 == x26)
                    x3_3 = var_e8_1
                    goto label_da1f44
                
                x25_1 = var_e0_1
                x8_7 = var_d8_1
                x26 = &x26[1]
                x19_2 = zx.d(*x26)
                
                if (x25_1 u>= x8_7)
                    goto label_da1db8
                
                *x25_1 = (x19_2 u>> 8).b
                x25_3 = &x25_1[1]
                var_e0_2 = x25_3
                x8_13 = var_d8_1
            while (x25_3 u>= x8_13)
        
        *x25_3 = x19_2.b
        var_e0_1 = x25_3 + 1
        goto label_da1f18
    
label_da23a4:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
label_da23ac:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
label_da23b4:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
__stack_chk_fail()
noreturn

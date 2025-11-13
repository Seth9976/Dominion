// 函数: _ZNK5Botan3TLS7Channel19key_material_exportERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_m
// 地址: 0xe5f914
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *(arg1 + 0x40)
int128_t var_80

if (x22 == 0)
    void** x0_39 = __cxa_allocate_exception(0x20)
    int64_t x0_40
    int128_t v0_3
    x0_40, v0_3 = operator new(0x40)
    v0_3 = data_71ac10
    int64_t var_70_3 = x0_40
    __builtin_strncpy(x0_40, "Channel::key_material_export connection not active", 0x33)
    var_80 = v0_3
    *x0_39 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_39[1])
    *x0_39 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_39, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

if (*(arg1 + 0x48) != 0)
    void** x0_44 = __cxa_allocate_exception(0x20)
    int64_t x0_45
    int128_t v2
    x0_45, v2 = operator new(0x40)
    (*"ng renegotiation")[0].o
    int64_t var_70_4 = x0_45
    v2 = data_71a920
    __builtin_strncpy(x0_45, "Channel::key_material_export cannot export during renegotiation", 
        0x40)
    var_80 = v2
    *x0_44 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_44[1])
    *x0_44 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_44, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

uint64_t x0_1 = Botan::TLS::Handshake_State::protocol_specific_prf()
__builtin_memset(&var_80, 0, 0x18)
void* x25 = *(x22 + 0x100)
int64_t x2 = *(x25 + 0x28)
int64_t x3 = *(x25 + 0x30)
uint64_t x21 = x3 - x2
void* var_70_1
int64_t x1

if (x3 == x2)
    x1 = 0
else
    x1 = operator new(x21)
    var_80.q = x1
    var_80:8.q = x1
    var_70_1 = x1 + x21
    x2 = *(x25 + 0x28)
    *(x25 + 0x30)

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    &var_80, x1, x2)
void* x21_1 = *(x22 + 0x108)
void* x25_1 = var_80.q
int64_t x26 = var_80:8.q
size_t x27 = x26 - x25_1
uint64_t x28 = *(x21_1 + 0x30) - *(x21_1 + 0x28) + x27

if (var_70_1 - x25_1 u< x28)
    int64_t x0_6 = operator new(x28)
    x26 = x0_6 + x27
    
    if (x27 s>= 1)
        memcpy(x0_6, x25_1, x27)
    
    var_80.q = x0_6
    var_80:8.q = x26
    var_70_1 = x0_6 + x28
    
    if (x25_1 != 0)
        operator delete(x25_1)
        x26 = var_80:8.q

*(x21_1 + 0x30)
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    &var_80, x26, *(x21_1 + 0x28))
uint64_t x8_5 = zx.q(*arg3)
uint64_t x9_2

if ((x8_5.d & 1) == 0)
    x9_2 = x8_5 u>> 1
else
    x9_2 = *(arg3 + 8)

int128_t var_a0
void* var_90

if (x9_2 == 0)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg3, 0, -ffffffffffffffff, &data_793a18) != 0)
        x8_5 = zx.q(*arg3)
        
        if ((x8_5.d & 1) == 0)
            goto label_e5fa38
        
        goto label_e5fa68
    
label_e5fcfc:
    uint64_t x8_16 = zx.q(*arg2)
    uint64_t x10_4 = *(arg2 + 8)
    void* x9_11 = *(arg2 + 0x10)
    char* var_b8_1
    __builtin_memset(&var_b8_1, 0, 0x18)
    int32_t temp0_1 = x8_16.d & 1
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) x21_6
    
    if (temp0_1 != 0)
        x21_6 = x9_11
    else
        x21_6 = arg2 + 1
    
    uint64_t x23_1
    
    if (temp0_1 == 0)
        x23_1 = x8_16 u>> 1
    else
        x23_1 = x10_4
    
    char* x6_1
    
    if (x23_1 == 0)
        x6_1 = nullptr
    label_e5fdbc:
        uint64_t x2_7 = *(x22 + 0x70)
        uint64_t x4_2 = var_80.q
        uint8_t* entry_x3
        Botan::KDF::derive_key(x0_1, entry_x3, x2_7, *(x22 + 0x78) - x2_7, x4_2, var_80:8.q - x4_2, 
            x6_1)
        void* x21_7 = var_a0.q
        int64_t x8_19 = var_a0:8.q
        void** entry_x8
        __builtin_memset(entry_x8, 0, 0x18)
        void* x23_2 = x8_19 - x21_7
        
        if (x8_19 == x21_7)
        label_e5fe3c:
            
            if (x21_7 != 0)
                var_a0:8.q = x21_7
                Botan::deallocate_memory(x21_7, var_90 - x21_7, 1)
            
            char* x0_35 = var_b8_1
            
            if (x0_35 != 0)
                char* var_b0_3 = x0_35
                operator delete(x0_35)
            
            void* x0_36 = var_80.q
            
            if (x0_36 != 0)
                var_80:8.q = x0_36
                operator delete(x0_36)
            
            return (*(*x0_1 + 8))(x0_1)
        
        if ((x23_2 & 0xffffffff80000000) == 0)
            void* x0_32 = Botan::allocate_memory(x23_2, 1)
            x21_7 = var_a0.q
            int64_t x8_20 = var_a0:8.q
            void* x22_1 = x0_32
            *entry_x8 = x0_32
            entry_x8[1] = x0_32
            size_t x23_3 = x8_20 - x21_7
            entry_x8[2] = x0_32 + x23_2
            
            if (x23_3 s>= 1)
                memcpy(x22_1, x21_7, x23_3)
                x22_1 += x23_3
            
            entry_x8[1] = x22_1
            goto label_e5fe3c
    else
        if ((x23_1 & 0xffffffff80000000) == 0)
            char* x0_29
            int128_t v0_2
            int128_t v1_2
            x0_29, v0_2, v1_2 = operator new(x23_1)
            x6_1 = x0_29
            void* x8_17 = x21_6 + x23_1
            void* x9_12 = &x0_29[x23_1]
            var_b8_1 = x0_29
            char* var_b0_1 = x0_29
            void* var_a8_1 = x9_12
            char* x9_13
            
            if (x23_1 u>= 0x20)
                if (x6_1 u< x8_17)
                    x9_13 = x6_1
                
                if (x6_1 u< x8_17 && x21_6 u< x9_12)
                    goto label_e5fdb4
                
                int64_t i_5 = x23_1 & 0xffffffffffffffe0
                void* __offset(
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                    0x11) x11_6 = x21_6 + 0x10
                x9_13 = &x6_1[i_5]
                x21_6 += i_5
                void* x12_1 = &x6_1[0x10]
                int64_t i_3 = i_5
                int64_t i
                
                do
                    v0_2 = *(x11_6 - 0x10)
                    v1_2 = *x11_6
                    x11_6 += 0x20
                    i = i_3
                    i_3 -= 0x20
                    *(x12_1 - 0x10) = v0_2
                    *x12_1 = v1_2
                    x12_1 += 0x20
                while (i != 0x20)
                
                if (x23_1 != i_5)
                    goto label_e5fdb4
            else
                x9_13 = x6_1
            label_e5fdb4:
                
                do
                    char x10_5 = *x21_6
                    x21_6 += 1
                    *x9_13 = x10_5
                    x9_13 = &x9_13[1]
                while (x8_17 != x21_6)
            
            char* var_b0_2 = x9_13
            goto label_e5fdbc
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    uint64_t x21_2
    
    if ((x8_5.d & 1) != 0)
    label_e5fa68:
        x21_2 = *(arg3 + 8)
        
        if (x21_2 u< 0x10000)
            goto label_e5fa74
    else
    label_e5fa38:
        x21_2 = zx.q(x8_5.d u>> 1)
    label_e5fa74:
        uint8_t* fp_2 = var_80:8.q
        void* fp_3
        
        if (fp_2 u>= var_70_1)
            void* x25_2 = var_80.q
            size_t x26_1 = fp_2 - x25_2
            
            if (x26_1 + 1 s< 0)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
            label_e60070:
                int64_t* x0_55 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                
                if ((zx.d(var_a0.b) & 1) != 0)
                    operator delete(var_90)
                
                void* x0_58 = var_80.q
                
                if (x0_58 != 0)
                    var_80:8.q = x0_58
                    operator delete(x0_58)
                
                if (x0_1 == 0)
                    sub_1101e04(x0_55)
                    noreturn
                
                (*(*x0_1 + 8))(x0_1)
                sub_1101e04(x0_55)
                noreturn
            
            void* x8_8 = var_70_1 - x25_2
            int64_t x11_1 = x8_8 << 1
            int64_t x9_4
            
            if (x11_1 u< x26_1 + 1)
                x9_4 = x26_1 + 1
            else
                x9_4 = x11_1
            
            int64_t x28_2
            
            x28_2 = x8_8 u< 0x3fffffffffffffff ? x9_4 : 0x7fffffffffffffff
            
            void* const x27_1
            
            if (x28_2 == 0)
                x27_1 = nullptr
            else
                x27_1 = operator new(x28_2)
            
            char* fp_4 = x27_1 + x26_1
            *fp_4 = (x21_2 u>> 8).b
            fp_3 = &fp_4[1]
            
            if (x26_1 s>= 1)
                memcpy(x27_1, x25_2, x26_1)
            
            var_80.q = x27_1
            var_80:8.q = fp_3
            var_70_1 = x27_1 + x28_2
            
            if (x25_2 != 0)
                operator delete(x25_2)
                fp_3 = var_80:8.q
            
            goto label_e5fb1c
        
        *fp_2 = (x21_2 u>> 8).b
        fp_3 = &fp_2[1]
        var_80:8.q = fp_3
    label_e5fb1c:
        
        if (fp_3 u>= var_70_1)
            void* x25_3 = var_80.q
            size_t x26_2 = fp_3 - x25_3
            
            if (x26_2 + 1 s< 0)
                goto label_e60070
            
            void* x8_11 = var_70_1 - x25_3
            int64_t x11_2 = x8_11 << 1
            int64_t x9_6
            
            if (x11_2 u< x26_2 + 1)
                x9_6 = x26_2 + 1
            else
                x9_6 = x11_2
            
            int64_t x28_4
            
            x28_4 = x8_11 u< 0x3fffffffffffffff ? x9_6 : 0x7fffffffffffffff
            
            void* const x27_2
            
            if (x28_4 == 0)
                x27_2 = nullptr
            else
                x27_2 = operator new(x28_4)
            
            char* fp_6 = x27_2 + x26_2
            *fp_6 = (x21_2.d).b
            
            if (x26_2 s>= 1)
                memcpy(x27_2, x25_3, x26_2)
            
            var_80.q = x27_2
            var_80:8.q = &fp_6[1]
            var_70_1 = x27_2 + x28_4
            
            if (x25_3 != 0)
                operator delete(x25_3)
        else
            *fp_3 = (x21_2.d).b
            var_80:8.q = fp_3 + 1
        
        uint64_t x8_12 = zx.q(*arg3)
        uint64_t x10_2 = *(arg3 + 8)
        char* x9_7 = *(arg3 + 0x10)
        __builtin_memset(&var_a0, 0, 0x18)
        int32_t temp1_1 = x8_12.d & 1
        char* x21_3
        
        if (temp1_1 != 0)
            x21_3 = x9_7
        else
            x21_3 = arg3 + 1
        
        uint64_t x26_3
        
        if (temp1_1 == 0)
            x26_3 = x8_12 u>> 1
        else
            x26_3 = x10_2
        
        char* x24_1
        char* x25_4
        
        if (x26_3 == 0)
            x24_1 = nullptr
            x25_4 = nullptr
        label_e5fc70:
            void* x27_3 = var_80.q
            void* x26_4 = var_80:8.q
            void* x28_6 = x26_4 - x27_3
            void* x21_4 = x25_4 - x24_1 + x28_6
            
            if (var_70_1 - x27_3 u< x21_4)
                void* x0_23 = operator new(x21_4)
                x26_4 = x0_23 + x28_6
                
                if (x28_6 s>= 1)
                    memcpy(x0_23, x27_3, x28_6)
                
                var_80.q = x0_23
                var_80:8.q = x26_4
                void* var_70_2 = x0_23 + x21_4
                
                if (x27_3 != 0)
                    operator delete(x27_3)
                    x26_4 = var_80:8.q
                    x24_1 = var_a0.q
            
            std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
                &var_80, x26_4, x24_1)
            void* x0_27 = var_a0.q
            
            if (x0_27 != 0)
                var_a0:8.q = x0_27
                operator delete(x0_27)
            
            goto label_e5fcfc
        
        if ((x26_3 & 0xffffffff80000000) == 0)
            char* x0_21
            int128_t v0_1
            int128_t v1_1
            x0_21, v0_1, v1_1 = operator new(x26_3)
            x24_1 = x0_21
            void* x8_13 = &x21_3[x26_3]
            void* x9_8 = &x0_21[x26_3]
            var_a0.q = x0_21
            var_a0:8.q = x0_21
            var_90 = x9_8
            
            if (x26_3 u>= 0x20)
                if (x24_1 u< x8_13)
                    x25_4 = x24_1
                
                if (x24_1 u< x8_13 && x21_3 u< x9_8)
                    goto label_e5fc68
                
                int64_t i_4 = x26_3 & 0xffffffffffffffe0
                void* x10_3 = &x21_3[0x10]
                x25_4 = &x24_1[i_4]
                x21_3 = &x21_3[i_4]
                void* x11_4 = &x24_1[0x10]
                int64_t i_2 = i_4
                int64_t i_1
                
                do
                    v0_1 = *(x10_3 - 0x10)
                    v1_1 = *x10_3
                    x10_3 += 0x20
                    i_1 = i_2
                    i_2 -= 0x20
                    *(x11_4 - 0x10) = v0_1
                    *x11_4 = v1_1
                    x11_4 += 0x20
                while (i_1 != 0x20)
                
                if (x26_3 != i_4)
                    goto label_e5fc68
            else
                x25_4 = x24_1
            label_e5fc68:
                
                do
                    char x9_9 = *x21_3
                    x21_3 = &x21_3[1]
                    *x25_4 = x9_9
                    x25_4 = &x25_4[1]
                while (x8_13 != x21_3)
            
            var_a0:8.q = x25_4
            goto label_e5fc70
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
void** x0_50 = __cxa_allocate_exception(0x20)
int64_t x0_51
int128_t v0_4
x0_51, v0_4 = operator new(0x30)
v0_4 = data_71c500
int64_t var_90_1 = x0_51
__builtin_strncpy(x0_51, "key_material_export context is too long", 0x28)
int128_t var_a0_1 = v0_4
*x0_50 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_50[1])
*x0_50 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_50, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn

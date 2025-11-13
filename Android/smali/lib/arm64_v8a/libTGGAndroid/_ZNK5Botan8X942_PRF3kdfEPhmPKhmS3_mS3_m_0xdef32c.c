// 函数: _ZNK5Botan8X942_PRF3kdfEPhmPKhmS3_mS3_m
// 地址: 0xdef32c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
char var_100 = 0xe
int32_t var_ff
__builtin_strncpy(&var_ff, "SHA-160", 8)
int16_t var_160 = 0
Botan::HashFunction::create(&var_100, &var_160)
void* var_150

if ((zx.d(var_160.b) & 1) != 0)
    operator delete(var_150)
void* var_f0

if ((zx.d(var_100) & 1) != 0)
    operator delete(var_f0)
void* var_200
__builtin_memset(&var_200, 0, 0x30)
void* arg_0
void* x28 = arg_0 + arg7
void* var_1f0

if (arg_0 != neg.q(arg7))
    void* x0_4 = Botan::allocate_memory(x28, 1)
    void* x26_1 = var_200
    void* var_1f8
    size_t x2 = var_1f8 - x26_1
    void* x23_1 = x0_4 - x2
    
    if (x2 s>= 1)
        memcpy(x23_1, x26_1, x2)
    
    void* x8_5 = var_1f0
    var_200 = x23_1
    var_1f8 = x0_4
    var_1f0 = x0_4 + x28
    
    if (x26_1 != 0)
        Botan::deallocate_memory(x26_1, x8_5 - x26_1, 1)

var_100.q = arg8
char var_f8
var_f8.q = arg_0
Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&var_200, &var_100)
var_100.q = arg6
var_f8.q = arg7
Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&var_200, &var_100)
void* result = nullptr
void* var_1e8
int64_t* var_1d0

if (arg3 == 0)
label_defa6c:
    void* x0_57 = var_200
    
    if (x0_57 != 0)
        void* var_1f8_1 = x0_57
        Botan::deallocate_memory(x0_57, var_1f0 - x0_57, 1)
    
    void* x0_58 = var_1e8
    
    if (x0_58 != 0)
        void* var_1e0_2 = x0_58
        int64_t var_1d8
        Botan::deallocate_memory(x0_58, var_1d8 - x0_58, 1)
    
    int64_t var_1d0_1 = 0
    
    if (var_1d0 != 0)
        (*(*var_1d0 + 0x10))()
    
    if (*(x23 + 0x28) == x8)
        return result
else
    int32_t x25_2 = 1
    int32_t temp0_1 = _byteswap(arg3.d << 3)
    
    while (true)
        (*(*var_1d0 + 0x18))(var_1d0, arg4, arg5)
        int128_t var_130
        __builtin_memset(&var_130, 0, 0x30)
        __builtin_memset(&var_160, 0, 0x28)
        Botan::DER_Encoder::start_cons(&var_160, 0x10)
        Botan::DER_Encoder::start_cons(&var_160, 0x10)
        (**(arg1 + 8))(&arg1[8], &var_160)
        int32_t temp0_2 = _byteswap(x25_2)
        uint64_t var_230
        __builtin_memset(&var_230, 0, 0x18)
        int64_t* var_e0_1 = nullptr
        int128_t var_c0
        __builtin_memset(&var_c0, 0, 0x20)
        int64_t var_d0_1 = (zx.o(0)).q
        struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
            * const var_1c0 = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
        int64_t* var_1b8_1 = &var_230
        int32_t var_a0 = temp0_2
        struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
            * const* var_1a0_1 = &var_1c0
        sub_f2410c(&var_1c0, &var_100)
        
        if (&var_1c0 == var_1a0_1)
            (*var_1a0_1)->vFunc_4()
        else if (var_1a0_1 != 0)
            (*var_1a0_1)->j_operator delete()
        
        Botan::DER_Encoder::add_object(&var_100, 4, nullptr, &var_a0)
        void* x23_2 = var_c0:8.q
        int128_t var_b0
        
        if (x23_2 != 0)
            void* x22_1 = var_b0.q
            void* x0_17
            
            if (x22_1 == x23_2)
                x0_17 = x23_2
            else
                do
                    x22_1 -= 0x38
                    sub_f230d4(&var_b0:8, x22_1)
                while (x23_2 != x22_1)
                
                x0_17 = var_c0:8.q
            
            var_b0.q = x23_2
            operator delete(x0_17)
        
        int64_t x0_18 = var_d0_1
        
        if (x0_18 != 0)
            var_d0_1 = x0_18
            Botan::deallocate_memory(x0_18, var_c0.q - x0_18, 1)
        
        if (&var_100 == var_e0_1)
            (*(*var_e0_1 + 0x20))()
        else if (var_e0_1 != 0)
            (*(*var_e0_1 + 0x28))()
        
        int128_t var_110
        int64_t x9_1 = var_110.q
        uint64_t x1_10 = var_230
        int64_t var_228_1
        struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
            * x2_4 = var_228_1 - x1_10
        int64_t* var_140
        int128_t var_120
        
        if (x9_1 != var_120:8.q)
            Botan::DER_Encoder::DER_Sequence::add_bytes(x9_1 - 0x38, x1_10)
        else if (var_140 == 0)
            var_100.q = x1_10
            var_f8.q = x2_4
            Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&var_130, 
                &var_100)
        else
            var_100.q = x1_10
            var_1c0 = x2_4
            (*(*var_140 + 0x30))(var_140, &var_100, &var_1c0)
        
        Botan::DER_Encoder::end_cons()
        int128_t var_180
        __builtin_memset(&var_180, 0, 0x20)
        __builtin_memset(&var_1c0, 0, 0x38)
        Botan::DER_Encoder::start_cons(&var_1c0, 0)
        Botan::DER_Encoder::add_object(&var_1c0, 4, nullptr, var_200)
        Botan::DER_Encoder::end_cons()
        void* x0_26 = Botan::DER_Encoder::encode_if(&var_160, zx.q(arg7 != 0 ? 1 : 0))
        Botan::DER_Encoder::start_cons(x0_26, 2)
        int32_t var_1c4 = temp0_1
        uint64_t var_248
        __builtin_memset(&var_248, 0, 0x18)
        int64_t* var_e0_2 = nullptr
        int128_t var_c0_1
        __builtin_memset(&var_c0_1, 0, 0x20)
        int64_t var_d0_2 = (zx.o(0)).q
        var_a0.q = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
        int64_t* var_98_1 = &var_248
        int32_t* var_80_1 = &var_a0
        sub_f2410c(&var_a0, &var_100)
        
        if (&var_a0 == var_80_1)
            (*(*var_80_1 + 0x20))()
        else if (var_80_1 != 0)
            (*(*var_80_1 + 0x28))()
        
        Botan::DER_Encoder::add_object(&var_100, 4, nullptr, &var_1c4)
        void* x28_1 = var_c0_1:8.q
        
        if (x28_1 != 0)
            void* x23_3 = var_b0.q
            void* x0_31
            
            if (x23_3 == x28_1)
                x0_31 = x28_1
            else
                do
                    x23_3 -= 0x38
                    sub_f230d4(&var_b0:8, x23_3)
                while (x28_1 != x23_3)
                
                x0_31 = var_c0_1:8.q
            
            var_b0.q = x28_1
            operator delete(x0_31)
        
        int64_t x0_32 = var_d0_2
        
        if (x0_32 != 0)
            var_d0_2 = x0_32
            Botan::deallocate_memory(x0_32, var_c0_1.q - x0_32, 1)
        
        if (&var_100 == var_e0_2)
            (*(*var_e0_2 + 0x20))()
        else if (var_e0_2 != 0)
            (*(*var_e0_2 + 0x28))()
        
        int64_t x9_3 = *(x0_26 + 0x50)
        uint64_t x1_17 = var_248
        int64_t var_240_1
        int64_t x2_8 = var_240_1 - x1_17
        
        if (x9_3 == *(x0_26 + 0x48))
            int64_t* x0_35 = *(x0_26 + 0x20)
            
            if (x0_35 == 0)
                var_100.q = x1_17
                var_f8.q = x2_8
                Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(
                    x0_26 + 0x30, &var_100)
            else
                var_100.q = x1_17
                var_a0.q = x2_8
                (*(*x0_35 + 0x30))(x0_35, &var_100, &var_a0)
        else
            Botan::DER_Encoder::DER_Sequence::add_bytes(x9_3 - 0x38, x1_17)
        
        Botan::DER_Encoder::end_cons()
        Botan::DER_Encoder::end_cons()
        Botan::DER_Encoder::get_contents()
        void* var_218
        void* var_210
        (*(*var_1d0 + 0x18))(var_1d0, var_218, var_210 - var_218)
        
        if (var_218 != 0)
            var_210 = var_218
            int64_t var_208
            Botan::deallocate_memory(var_218, var_208 - var_218, 1)
        
        uint64_t x0_42 = var_248
        
        if (x0_42 != 0)
            uint64_t var_240_2 = x0_42
            operator delete(x0_42)
        
        void* x23_4 = var_180:8.q
        
        if (x23_4 != 0)
            int128_t var_170
            void* x22_4 = var_170.q
            void* x0_44
            
            if (x22_4 == x23_4)
                x0_44 = x23_4
            else
                do
                    x22_4 -= 0x38
                    sub_f230d4(&var_170:8, x22_4)
                while (x23_4 != x22_4)
                
                x0_44 = var_180:8.q
            
            var_170.q = x23_4
            operator delete(x0_44)
        
        void* var_190_1
        void* x0_45 = var_190_1
        
        if (x0_45 != 0)
            var_190_1 = x0_45
            Botan::deallocate_memory(x0_45, var_180.q - x0_45, 1)
        
        if (&var_1c0 == var_1a0_1)
            (*var_1a0_1)->vFunc_4()
        else if (var_1a0_1 != 0)
            (*var_1a0_1)->j_operator delete()
        
        uint64_t x0_47 = var_230
        
        if (x0_47 != 0)
            uint64_t var_228_2 = x0_47
            operator delete(x0_47)
        
        void* x23_5 = var_120:8.q
        
        if (x23_5 != 0)
            void* x22_5 = var_110.q
            void* x0_49
            
            if (x22_5 == x23_5)
                x0_49 = x23_5
            else
                do
                    x22_5 -= 0x38
                    sub_f230d4(&var_110:8, x22_5)
                while (x23_5 != x22_5)
                
                x0_49 = var_120:8.q
            
            var_110.q = x23_5
            operator delete(x0_49)
        
        void* x0_50 = var_130.q
        
        if (x0_50 != 0)
            var_130:8.q = x0_50
            Botan::deallocate_memory(x0_50, var_120.q - x0_50, 1)
        
        if (&var_160 == var_140)
            (*(*var_140 + 0x20))()
        else if (var_140 != 0)
            (*(*var_140 + 0x28))()
        
        int64_t x0_53 = (**var_1d0)(var_1d0)
        void* x1_26 = var_1e8
        void* var_1e0_1
        int64_t x8_54 = var_1e0_1 - x1_26
        
        if (x0_53 u> x8_54)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_1e8)
            x1_26 = var_1e8
        else if (x0_53 u< x8_54)
            var_1e0_1 = x1_26 + x0_53
        
        (*(*var_1d0 + 0x20))(var_1d0, x1_26)
        void* x1_28 = var_1e8
        void* x9_6 = arg3 - result
        void* x8_60 = var_1e0_1 - x1_28
        void* x22_7
        
        x22_7 = x9_6 u< x8_60 ? x9_6 : x8_60
        
        if (x22_7 != 0)
            if (arg2 == 0 || x1_28 == 0)
                Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                    "If n > 0 then args are not null", "copy_mem", 
                    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
                break
            
            memmove(arg2 + result, x1_28, x22_7)
        
        result += x22_7
        
        if (result == arg3)
            goto label_defa6c
        
        x25_2 += 1
        
        if (x25_2 == 0)
            goto label_defa6c
__stack_chk_fail()
noreturn

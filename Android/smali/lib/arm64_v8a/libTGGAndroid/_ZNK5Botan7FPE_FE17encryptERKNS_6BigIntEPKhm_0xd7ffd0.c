// 函数: _ZNK5Botan7FPE_FE17encryptERKNS_6BigIntEPKhm
// 地址: 0xd7ffd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *(arg1 + 8)
int32_t var_b8 = _byteswap(*(arg1 + 0x20) - *(arg1 + 0x18))
(*(*x0 + 0x18))(x0, &var_b8, 4)
int64_t* x0_1 = *(arg1 + 8)
int64_t x1_1 = *(arg1 + 0x18)
(*(*x0_1 + 0x18))(x0_1, x1_1, *(arg1 + 0x20) - x1_1)
int64_t* x0_2 = *(arg1 + 8)
int64_t entry_x3
var_b8 = _byteswap(entry_x3.d)
(*(*x0_2 + 0x18))(x0_2, &var_b8, 4)

if (entry_x3 != 0)
    int64_t* x0_3 = *(arg1 + 8)
    (*(*x0_3 + 0x18))(x0_3, arg3, entry_x3)

*(arg1 + 8)
Botan::Buffered_Computation::final()
Botan::BigInt* entry_x8
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(entry_x8)
*(entry_x8 + 0x18) = *(arg2 + 0x18)
int32_t x9_6 = *(arg2 + 0x20)
int64_t var_a0 = -1
int64_t var_c8 = -1
void* var_90
__builtin_memset(&var_90, 0, 0x18)
__builtin_memset(&var_b8, 0, 0x18)
int32_t var_98 = 1
void* var_e0
__builtin_memset(&var_e0, 0, 0x18)
*(entry_x8 + 0x20) = x9_6
int32_t var_c0 = 1
void* result_1

if (*(arg1 + 0x80) != 0)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* i = nullptr
    void* x27_1 = nullptr
    int64_t x28_1 = 0
    int32_t x26_1 = 1
    int64_t x25_1 = -1
    int64_t x8_12
    uint32_t* x21_1
    
    do
        Botan::ct_divide(entry_x8, arg1 + 0x58, &var_b8, &var_e0)
        Botan::FPE_FE1::F(arg1, &var_e0, i, &result_1)
        uint32_t* var_110
        x21_1 = var_110
        void* var_108
        void* x24_1 = var_108
        int64_t var_100
        x8_12 = var_100
        int64_t var_f8
        int64_t fp_1 = var_f8
        int32_t var_f0
        int32_t x23_1 = var_f0
        var_110 = x27_1
        var_100 = x28_1
        var_f8 = x25_1
        var_f0 = x26_1
        
        if (x27_1 != 0)
            var_108 = x27_1
            Botan::deallocate_memory(x27_1, (x28_1 - x27_1) s>> 2, 4)
        
        Botan::operator*(arg1 + 0x30, &var_e0)
        x25_1 = fp_1
        
        if (fp_1 == -1)
            void* x9_8 = x24_1 - x21_1
            
            if (x24_1 == x21_1)
                x25_1 = 0
            else
                void* x11_1
                
                x11_1 = x9_8 s>= 0 ? x9_8 : -ffffffffffffffff
                
                void* x10_1 = x21_1 - x24_1
                void* x11_2
                
                x11_2 = x11_1 s< 1 ? x11_1 : 1
                
                x25_1 = x9_8 s>> 2
                void* x9_9
                
                x9_9 = x10_1 s> x9_8 ? x10_1 : x9_8
                
                int64_t j_2 = x11_2 * (x9_9 u>> 2)
                uint64_t x10_2 = 1
                int64_t j
                
                do
                    int32_t x11_3 = *(x21_1 - 4 + (j_2 << 2))
                    j = j_2
                    j_2 -= 1
                    x10_2 = zx.q(x10_2.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
                    x25_1 -= x10_2
                while (j != 1)
        
        Botan::BigInt* x27_2 = *(arg1 + 0x10)
        Botan::BigInt::add2(&var_b8, x21_1, x25_1, zx.q(x23_1))
        Botan::Modular_Reducer::reduce(x27_2)
        int64_t var_148
        int64_t x2_5 = var_148
        uint32_t* var_160
        uint32_t* var_158
        
        if (x2_5 == -1)
            void* x9_11 = var_158 - var_160
            
            if (var_158 == var_160)
                x2_5 = 0
            else
                void* x11_5
                
                x11_5 = x9_11 s>= 0 ? x9_11 : -ffffffffffffffff
                
                void* x10_3 = var_160 - var_158
                void* x11_6
                
                x11_6 = x11_5 s< 1 ? x11_5 : 1
                
                x2_5 = x9_11 s>> 2
                void* x9_12
                
                x9_12 = x10_3 s> x9_11 ? x10_3 : x9_11
                
                int64_t j_3 = x11_6 * (x9_12 u>> 2)
                uint64_t x10_4 = 1
                int64_t j_1
                
                do
                    int32_t x11_7 = *(var_160 - 4 + (j_3 << 2))
                    j_1 = j_3
                    j_3 -= 1
                    x10_4 = zx.q(x10_4.d) & zx.q(((x11_7 - 1) & not.d(x11_7)) s>> 0x1f)
                    x2_5 -= x10_4
                while (j_1 != 1)
            
            var_148 = x2_5
        
        int32_t var_140
        void* var_138
        int128_t v0_1
        int128_t v1_1
        v0_1, v1_1 = Botan::BigInt::add2(&var_138, var_160, x2_5, zx.q(var_140))
        uint32_t* x0_13
        
        if (&var_110 == entry_x8)
            x0_13 = var_110
            
            if (x0_13 != 0)
                var_108 = x0_13
                Botan::deallocate_memory(x0_13, (var_100 - x0_13) s>> 2, 4)
        else
            v1_1 = *entry_x8
            v0_1 = var_110.o
            int64_t x10_5 = *(entry_x8 + 0x10)
            int64_t x11_9 = *(entry_x8 + 0x18)
            *(entry_x8 + 0x10) = var_100
            *(entry_x8 + 0x18) = var_f8
            int32_t x9_15 = *(entry_x8 + 0x20)
            x0_13 = v1_1.q
            var_100 = x10_5
            var_f8 = x11_9
            *entry_x8 = v0_1
            var_110.o = v1_1
            *(entry_x8 + 0x20) = var_f0
            var_f0 = x9_15
            
            if (x0_13 != 0)
                var_108 = x0_13
                Botan::deallocate_memory(x0_13, (var_100 - x0_13) s>> 2, 4)
        
        if (var_160 != 0)
            var_158 = var_160
            int64_t var_150
            Botan::deallocate_memory(var_160, (var_150 - var_160) s>> 2, 4)
        
        void* var_188
        
        if (var_188 != 0)
            void* var_180_1 = var_188
            int64_t var_178
            Botan::deallocate_memory(var_188, (var_178 - var_188) s>> 2, 4)
        
        void* x0_16 = var_138
        
        if (x0_16 != 0)
            void* var_130_1 = x0_16
            int64_t var_128
            Botan::deallocate_memory(x0_16, (var_128 - x0_16) s>> 2, 4)
        
        i += 1
        x26_1 = x23_1
        x27_1 = x21_1
        x28_1 = x8_12
    while (i != *(arg1 + 0x80))
    
    if (x21_1 != 0)
        Botan::deallocate_memory(x21_1, (x8_12 - x21_1) s>> 2, 4)

void* x0_18 = var_e0

if (x0_18 != 0)
    void* var_d8_1 = x0_18
    int64_t var_d0
    Botan::deallocate_memory(x0_18, (var_d0 - x0_18) s>> 2, 4)

void* x0_19 = var_b8.q

if (x0_19 != 0)
    void* var_b0_1 = x0_19
    int64_t var_a8
    Botan::deallocate_memory(x0_19, (var_a8 - x0_19) s>> 2, 4)

void* x0_20 = var_90
int64_t var_80

if (x0_20 != 0)
    Botan::deallocate_memory(x0_20, var_80 - x0_20, 1)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_68
return Botan::deallocate_memory(result, var_68 - result, 1)

// 函数: _ZN5Botan17Montgomery_ParamsC1ERKNS_6BigIntE
// 地址: 0xdd1b50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = -1
*(arg1 + 0x20) = 1
*(arg1 + 0x28) = 0
*(arg1 + 0x40) = -1
*(arg1 + 0x48) = 1
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = -1
*(arg1 + 0x70) = 1
*(arg1 + 0x78) = 0
*(arg1 + 0x80) = 0
*(arg1 + 0x88) = 0
*(arg1 + 0x90) = -1
*(arg1 + 0x98) = 1
int128_t var_c0
uint32_t* entry_x1
int64_t entry_x2

if (entry_x1[8] != 0)
    uint32_t* x22_1 = entry_x1
    entry_x1 = *entry_x1
    entry_x2 = entry_x1[2].q
    
    if (entry_x2 != entry_x1 && (zx.d(*entry_x1) & 1) != 0)
        if (arg1 != x22_1)
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
                arg1, entry_x1)
        
        int64_t x10 = *(x22_1 + 0x18)
        int32_t* x8_2 = *arg1
        int64_t x9 = *(arg1 + 8)
        *(arg1 + 0x18) = x10
        *(arg1 + 0x20) = x22_1[8]
        uint32_t x0_1
        
        if (x10 == -1)
            void* x12_1 = x9 - x8_2
            int64_t x10_1
            
            if (x9 == x8_2)
                x10_1 = 0
            else
                void* x14_1
                
                x14_1 = x12_1 s>= 0 ? x12_1 : -ffffffffffffffff
                
                void* x13_1 = x8_2 - x9
                void* x14_2
                
                x14_2 = x14_1 s< 1 ? x14_1 : 1
                
                x10_1 = x12_1 s>> 2
                void* x12_2
                
                x12_2 = x13_1 s> x12_1 ? x13_1 : x12_1
                
                int64_t i_1 = x14_2 * (x12_2 u>> 2)
                uint64_t x13_2 = 1
                int64_t i
                
                do
                    int32_t x14_3 = *(x8_2 - 4 + (i_1 << 2))
                    i = i_1
                    i_1 -= 1
                    x13_2 = zx.q(x13_2.d) & zx.q(((x14_3 - 1) & not.d(x14_3)) s>> 0x1f)
                    x10_1 -= x13_2
                while (i != 1)
            
            *(arg1 + 0x18) = x10_1
            *(arg1 + 0xa8) = x10_1
            
            if (x9 != x8_2)
                x0_1 = *x8_2
            else
                x0_1 = 0
        else
            *(arg1 + 0xa8) = x10
            
            if (x9 == x8_2)
                x0_1 = 0
            else
                x0_1 = *x8_2
        
        int32_t x0_2 = Botan::monty_inverse(x0_1)
        int64_t x8_3 = *(arg1 + 0xa8)
        *(arg1 + 0xa0) = x0_2
        void* result_1
        __builtin_memset(&result_1, 0, 0x18)
        int32_t var_48 = 1
        int64_t var_50 = -1
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&result_1)
        *(result_1 + ((x8_3 & 0x7ffffffffffffff) << 2)) = 1
        Botan::Modular_Reducer::Modular_Reducer(&var_c0)
        Botan::Modular_Reducer::reduce(&var_c0)
        void* var_f0
        int64_t var_e0
        int64_t var_d8
        int32_t var_d0
        void* var_e8_1
        void* x0_6
        
        if (arg1 + 0x28 == &var_f0)
            x0_6 = var_f0
            
            if (x0_6 != 0)
                var_e8_1 = x0_6
                Botan::deallocate_memory(x0_6, (var_e0 - x0_6) s>> 2, 4)
        else
            x0_6 = *(arg1 + 0x28)
            int128_t v0 = var_f0.o
            var_f0 = x0_6
            *(arg1 + 0x28) = v0
            int64_t x11_2 = *(arg1 + 0x38)
            int64_t x9_1 = *(arg1 + 0x40)
            *(arg1 + 0x38) = var_e0
            *(arg1 + 0x40) = var_d8
            var_e0 = x11_2
            var_d8 = x9_1
            int32_t x9_2 = *(arg1 + 0x48)
            *(arg1 + 0x48) = var_d0
            var_d0 = x9_2
            
            if (x0_6 != 0)
                var_e8_1 = x0_6
                Botan::deallocate_memory(x0_6, (var_e0 - x0_6) s>> 2, 4)
        Botan::Modular_Reducer::square(&var_c0)
        void* var_e8_2
        void* x0_8
        
        if (arg1 + 0x50 == &var_f0)
            x0_8 = var_f0
            
            if (x0_8 != 0)
                var_e8_2 = x0_8
                Botan::deallocate_memory(x0_8, (var_e0 - x0_8) s>> 2, 4)
        else
            x0_8 = *(arg1 + 0x50)
            int128_t v0_1 = var_f0.o
            var_f0 = x0_8
            *(arg1 + 0x50) = v0_1
            int64_t x11_3 = *(arg1 + 0x60)
            int64_t x9_3 = *(arg1 + 0x68)
            *(arg1 + 0x60) = var_e0
            *(arg1 + 0x68) = var_d8
            var_e0 = x11_3
            var_d8 = x9_3
            int32_t x9_4 = *(arg1 + 0x70)
            *(arg1 + 0x70) = var_d0
            var_d0 = x9_4
            
            if (x0_8 != 0)
                var_e8_2 = x0_8
                Botan::deallocate_memory(x0_8, (var_e0 - x0_8) s>> 2, 4)
        Botan::Modular_Reducer::multiply(&var_c0, arg1 + 0x28)
        void* var_e8_3
        void* x0_10
        
        if (arg1 + 0x78 == &var_f0)
            x0_10 = var_f0
            
            if (x0_10 != 0)
                var_e8_3 = x0_10
                Botan::deallocate_memory(x0_10, (var_e0 - x0_10) s>> 2, 4)
        else
            x0_10 = *(arg1 + 0x78)
            int128_t v0_2 = var_f0.o
            var_f0 = x0_10
            *(arg1 + 0x78) = v0_2
            int64_t x11_4 = *(arg1 + 0x88)
            int64_t x9_5 = *(arg1 + 0x90)
            *(arg1 + 0x88) = var_e0
            *(arg1 + 0x90) = var_d8
            int64_t var_d8_1 = x9_5
            int32_t x9_6 = *(arg1 + 0x98)
            *(arg1 + 0x98) = var_d0
            int32_t var_d0_1 = x9_6
            
            if (x0_10 != 0)
                var_e8_3 = x0_10
                Botan::deallocate_memory(x0_10, (x11_4 - x0_10) s>> 2, 4)
        void* var_98
        
        if (var_98 != 0)
            void* var_90_1 = var_98
            int64_t var_88
            Botan::deallocate_memory(var_98, (var_88 - var_98) s>> 2, 4)
        
        void* x0_12 = var_c0.q
        
        if (x0_12 != 0)
            var_c0:8.q = x0_12
            int64_t var_b0
            Botan::deallocate_memory(x0_12, (var_b0 - x0_12) s>> 2, 4)
        
        void* result = result_1
        
        if (result == 0)
            return result
        
        void* result_2 = result
        int64_t var_58
        return Botan::deallocate_memory(result, (var_58 - result) s>> 2, 4)

void** x0_13 = __cxa_allocate_exception(0x20, entry_x1, entry_x2)
int64_t x0_14
int128_t v0_3
x0_14, v0_3 = operator new(0x30)
v0_3 = data_71c510
int64_t var_b0_1 = x0_14
__builtin_strncpy(x0_14, "Montgomery_Params invalid modulus", 0x22)
var_c0 = v0_3
*x0_13 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_13[1])
*x0_13 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_13, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn

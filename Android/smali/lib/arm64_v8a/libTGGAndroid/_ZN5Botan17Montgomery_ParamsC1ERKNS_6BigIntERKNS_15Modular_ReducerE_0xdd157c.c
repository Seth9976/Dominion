// 函数: _ZN5Botan17Montgomery_ParamsC1ERKNS_6BigIntERKNS_15Modular_ReducerE
// 地址: 0xdd157c
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
char* x1 = *arg2
int64_t x8 = *(arg2 + 8)
int128_t var_70

if (x8 != x1 && (zx.d(*x1) & 1) != 0 && *(arg2 + 0x20) != 0)
    int64_t i_6 = *(arg2 + 0x18)
    
    if (i_6 != -1)
        if (i_6 u<= 1)
            goto label_dd1694
        
    label_dd16e4:
        
        if (arg1 != arg2)
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
                arg1, x1)
            i_6 = *(arg2 + 0x18)
        
        *(arg1 + 0x18) = i_6
        int32_t* x8_1 = *arg1
        int64_t x10_4 = *(arg1 + 8)
        *(arg1 + 0x20) = *(arg2 + 0x20)
        uint32_t x0_1
        
        if (i_6 == -1)
            void* x12_3 = x10_4 - x8_1
            int64_t x9_3
            
            if (x10_4 == x8_1)
                x9_3 = 0
            else
                void* x14_7
                
                x14_7 = x12_3 s>= 0 ? x12_3 : -ffffffffffffffff
                
                void* x13_8 = x8_1 - x10_4
                void* x14_8
                
                x14_8 = x14_7 s< 1 ? x14_7 : 1
                
                x9_3 = x12_3 s>> 2
                void* x12_4
                
                x12_4 = x13_8 s> x12_3 ? x13_8 : x12_3
                
                int64_t i_5 = x14_8 * (x12_4 u>> 2)
                uint64_t x13_9 = 1
                int64_t i
                
                do
                    int32_t x14_9 = *(x8_1 - 4 + (i_5 << 2))
                    i = i_5
                    i_5 -= 1
                    x13_9 = zx.q(x13_9.d) & zx.q(((x14_9 - 1) & not.d(x14_9)) s>> 0x1f)
                    x9_3 -= x13_9
                while (i != 1)
            
            *(arg1 + 0x18) = x9_3
            *(arg1 + 0xa8) = x9_3
            
            if (x10_4 != x8_1)
                x0_1 = *x8_1
            else
                x0_1 = 0
        else
            *(arg1 + 0xa8) = i_6
            
            if (x10_4 == x8_1)
                x0_1 = 0
            else
                x0_1 = *x8_1
        
        int32_t x0_2 = Botan::monty_inverse(x0_1)
        int64_t x8_2 = *(arg1 + 0xa8)
        *(arg1 + 0xa0) = x0_2
        __builtin_memset(&var_70, 0, 0x18)
        int32_t var_50 = 1
        int64_t var_58 = -1
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_70)
        *(var_70.q + ((x8_2 & 0x7ffffffffffffff) << 2)) = 1
        Botan::BigInt* entry_x2
        Botan::Modular_Reducer::reduce(entry_x2)
        void* var_a0
        int64_t var_90
        int64_t var_88
        int32_t var_80
        void* var_98_1
        void* x0_5
        
        if (arg1 + 0x28 == &var_a0)
            x0_5 = var_a0
            
            if (x0_5 != 0)
                var_98_1 = x0_5
                Botan::deallocate_memory(x0_5, (var_90 - x0_5) s>> 2, 4)
        else
            x0_5 = *(arg1 + 0x28)
            int128_t v0 = var_a0.o
            var_a0 = x0_5
            *(arg1 + 0x28) = v0
            int64_t x11_7 = *(arg1 + 0x38)
            int64_t x9_4 = *(arg1 + 0x40)
            *(arg1 + 0x38) = var_90
            *(arg1 + 0x40) = var_88
            var_90 = x11_7
            var_88 = x9_4
            int32_t x9_5 = *(arg1 + 0x48)
            *(arg1 + 0x48) = var_80
            var_80 = x9_5
            
            if (x0_5 != 0)
                var_98_1 = x0_5
                Botan::deallocate_memory(x0_5, (var_90 - x0_5) s>> 2, 4)
        Botan::Modular_Reducer::square(entry_x2)
        void* var_98_2
        void* x0_7
        
        if (arg1 + 0x50 == &var_a0)
            x0_7 = var_a0
            
            if (x0_7 != 0)
                var_98_2 = x0_7
                Botan::deallocate_memory(x0_7, (var_90 - x0_7) s>> 2, 4)
        else
            x0_7 = *(arg1 + 0x50)
            int128_t v0_1 = var_a0.o
            var_a0 = x0_7
            *(arg1 + 0x50) = v0_1
            int64_t x11_8 = *(arg1 + 0x60)
            int64_t x9_6 = *(arg1 + 0x68)
            *(arg1 + 0x60) = var_90
            *(arg1 + 0x68) = var_88
            var_90 = x11_8
            var_88 = x9_6
            int32_t x9_7 = *(arg1 + 0x70)
            *(arg1 + 0x70) = var_80
            var_80 = x9_7
            
            if (x0_7 != 0)
                var_98_2 = x0_7
                Botan::deallocate_memory(x0_7, (var_90 - x0_7) s>> 2, 4)
        Botan::Modular_Reducer::multiply(entry_x2, arg1 + 0x28)
        void* var_98_3
        void* x0_9
        
        if (arg1 + 0x78 == &var_a0)
            x0_9 = var_a0
            
            if (x0_9 != 0)
                var_98_3 = x0_9
                Botan::deallocate_memory(x0_9, (var_90 - x0_9) s>> 2, 4)
        else
            x0_9 = *(arg1 + 0x78)
            int128_t v0_2 = var_a0.o
            var_a0 = x0_9
            *(arg1 + 0x78) = v0_2
            int64_t x11_9 = *(arg1 + 0x88)
            int64_t x9_8 = *(arg1 + 0x90)
            *(arg1 + 0x88) = var_90
            *(arg1 + 0x90) = var_88
            int64_t var_88_1 = x9_8
            int32_t x9_9 = *(arg1 + 0x98)
            *(arg1 + 0x98) = var_80
            int32_t var_80_1 = x9_9
            
            if (x0_9 != 0)
                var_98_3 = x0_9
                Botan::deallocate_memory(x0_9, (x11_9 - x0_9) s>> 2, 4)
        void* result = var_70.q
        
        if (result == 0)
            return result
        
        var_70:8.q = result
        int64_t var_60
        return Botan::deallocate_memory(result, (var_60 - result) s>> 2, 4)
    
    void* x11_1 = x8 - x1
    
    if (x8 == x1)
        i_6 = 0
        *(arg2 + 0x18) = 0
    else
        void* x13_1
        
        x13_1 = x11_1 s>= 0 ? x11_1 : -ffffffffffffffff
        
        void* x12_1 = x1 - x8
        void* x13_2
        
        x13_2 = x13_1 s< 1 ? x13_1 : 1
        
        i_6 = x11_1 s>> 2
        void* x11_2
        
        x11_2 = x12_1 s> x11_1 ? x12_1 : x11_1
        
        int64_t i_3 = x13_2 * (x11_2 u>> 2)
        uint64_t x12_2 = 1
        int64_t i_1
        
        do
            int32_t x13_3 = *(x1 - 4 + (i_3 << 2))
            i_1 = i_3
            i_3 -= 1
            x12_2 = zx.q(x12_2.d) & zx.q(((x13_3 - 1) & not.d(x13_3)) s>> 0x1f)
            i_6 -= x12_2
        while (i_1 != 1)
        *(arg2 + 0x18) = i_6
        
        if (i_6 u> 1)
            goto label_dd16e4
    
label_dd1694:
    
    if (i_6 != 0)
        int32_t x10_2 = 0
        char* x11_4 = x1
        int64_t i_4 = i_6
        int64_t i_2
        
        do
            int32_t x13_5 = *x11_4
            x11_4 = &x11_4[4]
            i_2 = i_4
            i_4 -= 1
            int32_t x13_7 = (((x13_5 ^ 3) - 1) & not.d(x13_5)) s>> 0x1f
            x10_2 = (x10_2 & x13_7) | ((((x13_5 - 3) & not.d(x13_5)) s>> 0x1f | 1) & not.d(x13_7))
        while (i_2 != 1)
        
        if ((x10_2 & 0x80000000) == 0)
            goto label_dd16e4

void** x0_10 = __cxa_allocate_exception(0x20, x1)
int64_t x0_11
int128_t v0_3
x0_11, v0_3 = operator new(0x30)
v0_3 = data_71c510
int64_t var_60_1 = x0_11
__builtin_strncpy(x0_11, "Montgomery_Params invalid modulus", 0x22)
var_70 = v0_3
*x0_10 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_10[1])
*x0_10 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_10, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn

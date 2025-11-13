// 函数: _ZN5Botan9ct_moduloERKNS_6BigIntES2_
// 地址: 0xce1c10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_80

if (*(arg2 + 0x20) != 0)
    uint64_t x22_1 = *(arg2 + 0x18)
    
    if (x22_1 != -1)
        if (x22_1 != -1)
            goto label_ce1c50
        
    label_ce1d40:
        int64_t x8_5 = *arg2
        int64_t x10_5 = *(arg2 + 8)
        int64_t x9_4 = x10_5 - x8_5
        
        if (x10_5 == x8_5)
            x22_1 = 0
        else
            int64_t x11_5
            
            x11_5 = x9_4 s>= 0 ? x9_4 : -1
            
            int64_t x10_6 = x8_5 - x10_5
            int64_t x11_6
            
            x11_6 = x11_5 s< 1 ? x11_5 : 1
            
            x22_1 = x9_4 s>> 2
            int64_t x9_5
            
            x9_5 = x10_6 s> x9_4 ? x10_6 : x9_4
            
            int64_t i_6 = x11_6 * (x9_5 u>> 2)
            uint64_t x10_7 = 1
            int64_t i
            
            do
                int32_t x11_7 = *(x8_5 - 4 + (i_6 << 2))
                i = i_6
                i_6 -= 1
                x10_7 = zx.q(x10_7.d) & zx.q(((x11_7 - 1) & not.d(x11_7)) s>> 0x1f)
                x22_1 -= x10_7
            while (i != 1)
        
        *(arg2 + 0x18) = x22_1
        goto label_ce1dac
    
    int64_t x8_3 = *arg2
    int64_t x10_2 = *(arg2 + 8)
    int64_t x9_1 = x10_2 - x8_3
    
    if (x10_2 != x8_3)
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_3 = x8_3 - x10_2
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x22_1 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_3 s> x9_1 ? x10_3 : x9_1
        
        int64_t i_5 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_4 = 1
        int64_t i_1
        
        do
            int32_t x11_3 = *(x8_3 - 4 + (i_5 << 2))
            i_1 = i_5
            i_5 -= 1
            x10_4 = zx.q(x10_4.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x22_1 -= x10_4
        while (i_1 != 1)
        *(arg2 + 0x18) = x22_1
        
        if (x22_1 != -1)
            goto label_ce1c50
        
        goto label_ce1d40
    
    x22_1 = 0
    *(arg2 + 0x18) = 0
label_ce1c50:
    
    if (x22_1 != 0)
    label_ce1dac:
        int64_t x8_7 = x22_1 & 0xfffffffffffffff8
        int64_t i_9 = Botan::BigInt::bits()
        uint64_t entry_x8
        __builtin_memset(entry_x8, 0, 0x18)
        *(entry_x8 + 0x20) = 1
        *(entry_x8 + 0x18) = -1
        
        if (x8_7 != -8)
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x8)
        
        *(entry_x8 + 0x20) = 1
        __builtin_memset(&var_80, 0, 0x18)
        int32_t var_60 = 1
        int64_t var_68 = -1
        
        if (x8_7 != -8)
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_80)
        
        int32_t var_60_1 = 1
        
        if (i_9 != 0)
            int64_t i_2
            
            do
                int64_t x8_8 = *arg1
                uint64_t x9_8 = (i_9 - 1) u>> 5
                int32_t x27_1
                
                if (x9_8 u>= (*(arg1 + 8) - x8_8) s>> 2)
                    x27_1 = 0
                else
                    x27_1 = *(x8_8 + (x9_8 << 2))
                
                Botan::BigInt::operator*=(entry_x8.d)
                int32_t* x1_4 = *entry_x8
                int32_t x9_11 = x27_1 & 1 << (i_9.d - 1)
                void* x8_14
                int32_t x27_2
                
                if (*(entry_x8 + 8) == x1_4)
                    *(entry_x8 + 0x18) = -1
                    
                    if (x9_11 != 0)
                        if (*(entry_x8 + 0x10) == x1_4)
                            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                                entry_x8)
                            x27_2 = 1
                        else
                            x27_2 = 1
                            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                                entry_x8)
                        
                        goto label_ce1e70
                    
                    x8_14 = nullptr
                else
                    int32_t x8_11 = *x1_4
                    *(entry_x8 + 0x18) = -1
                    x27_2 = x8_11 | (x9_11 != 0 ? 1 : 0)
                label_ce1e70:
                    **entry_x8 = x27_2
                    x1_4 = *entry_x8
                    x8_14 = *(entry_x8 + 8) - x1_4
                int64_t var_68_1 = -1
                Botan::BigInt::ct_cond_swap(entry_x8.b, 
                    zx.q(Botan::bigint_sub3(var_80.q, x1_4, x8_14 s>> 2, *arg2, x22_1) == 0 ? 1
                        : 0))
                i_2 = i_9
                i_9 -= 1
            while (i_2 != 1)
        
        if (*(arg1 + 0x20) == 0)
            uint64_t x2_3 = *(entry_x8 + 0x18)
            
            if (x2_3 == -1)
                int64_t x8_19 = *entry_x8
                int64_t x10_10 = *(entry_x8 + 8)
                int64_t x9_14 = x10_10 - x8_19
                
                if (x10_10 == x8_19)
                    x2_3 = 0
                else
                    int64_t x11_9
                    
                    x11_9 = x9_14 s>= 0 ? x9_14 : -1
                    
                    int64_t x10_11 = x8_19 - x10_10
                    int64_t x11_10
                    
                    x11_10 = x11_9 s< 1 ? x11_9 : 1
                    
                    x2_3 = x9_14 s>> 2
                    int64_t x9_15
                    
                    x9_15 = x10_11 s> x9_14 ? x10_11 : x9_14
                    
                    int64_t i_7 = x11_10 * (x9_15 u>> 2)
                    uint64_t x10_12 = 1
                    int64_t i_3
                    
                    do
                        int32_t x11_11 = *(x8_19 - 4 + (i_7 << 2))
                        i_3 = i_7
                        i_7 -= 1
                        x10_12 = zx.q(x10_12.d) & zx.q(((x11_11 - 1) & not.d(x11_11)) s>> 0x1f)
                        x2_3 -= x10_12
                    while (i_3 != 1)
                
                *(entry_x8 + 0x18) = x2_3
            
            if (x2_3 != 0)
                uint32_t* x1_9 = *entry_x8
                
                if (x2_3 == -1)
                    int64_t x8_21 = *(entry_x8 + 8)
                    void* x9_17 = x8_21 - x1_9
                    
                    if (x8_21 == x1_9)
                        x2_3 = 0
                    else
                        void* x11_13
                        
                        x11_13 = x9_17 s>= 0 ? x9_17 : -ffffffffffffffff
                        
                        void* x10_13 = x1_9 - x8_21
                        void* x11_14
                        
                        x11_14 = x11_13 s< 1 ? x11_13 : 1
                        
                        x2_3 = x9_17 s>> 2
                        void* x9_18
                        
                        x9_18 = x10_13 s> x9_17 ? x10_13 : x9_17
                        
                        int64_t i_8 = x11_14 * (x9_18 u>> 2)
                        uint64_t x10_14 = 1
                        int64_t i_4
                        
                        do
                            int32_t x11_15 = *(x1_9 - 4 + (i_8 << 2))
                            i_4 = i_8
                            i_8 -= 1
                            x10_14 = zx.q(x10_14.d) & zx.q(((x11_15 - 1) & not.d(x11_15)) s>> 0x1f)
                            x2_3 -= x10_14
                        while (i_4 != 1)
                    
                    *(entry_x8 + 0x18) = x2_3
                
                Botan::BigInt::add2(arg2, x1_9, x2_3, zx.q(*(entry_x8 + 0x20) != 1 ? 1 : 0))
                int128_t var_b0
                int64_t var_a0
                void* x0_15
                
                if (&var_b0 == entry_x8)
                    x0_15 = *entry_x8
                    
                    if (x0_15 != 0)
                        var_b0:8.q = x0_15
                        Botan::deallocate_memory(x0_15, (var_a0 - x0_15) s>> 2, 4)
                else
                    int64_t x10_15 = var_a0
                    x0_15 = *entry_x8
                    int128_t v0_2 = var_b0
                    var_a0 = *(entry_x8 + 0x10)
                    int64_t var_98_1 = *(entry_x8 + 0x18)
                    *(entry_x8 + 0x10) = x10_15
                    int64_t var_98
                    *(entry_x8 + 0x18) = var_98
                    int32_t x10_16 = *(entry_x8 + 0x20)
                    var_b0.q = x0_15
                    *entry_x8 = v0_2
                    int32_t var_90
                    *(entry_x8 + 0x20) = var_90
                    int32_t var_90_1 = x10_16
                    
                    if (x0_15 != 0)
                        var_b0:8.q = x0_15
                        Botan::deallocate_memory(x0_15, (var_a0 - x0_15) s>> 2, 4)
        
        void* result = var_80.q
        
        if (result == 0)
            return result
        
        var_80:8.q = result
        int64_t var_70_1
        return Botan::deallocate_memory(result, (var_70_1 - result) s>> 2, 4)

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0_1
x0_1, v0_1 = operator new(0x20)
int64_t var_70 = x0_1
var_80 = data_71af80
__builtin_strncpy(x0_1, "ct_modulo requires y > 0", 0x19)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn

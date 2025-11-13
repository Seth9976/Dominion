// 函数: sub_d170a8
// 地址: 0xd170a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
__builtin_memset(&result_1, 0, 0x18)
int32_t* var_80
__builtin_memset(&var_80, 0, 0x18)
int64_t i_12 = -1
int32_t var_38 = 1
int64_t i_10 = -1
int32_t var_60 = 1
uint32_t var_d0[0x4]
var_d0[0] = 1
Botan::BigInt::add2(arg2, &var_d0, 1, 0)
void* var_b0
Botan::vartime_divide(&var_b0, arg3, &result_1, &var_80)
void* x0_2 = var_b0
void* var_a0

if (x0_2 != 0)
    void* var_a8_1 = x0_2
    Botan::deallocate_memory(x0_2, (var_a0 - x0_2) s>> 2, 4)

if (var_38 != 0)
    int64_t i_5 = i_12
    
    if (i_5 == -1)
        void* result_3 = result_1
        int64_t var_50
        void* x10_1 = var_50 - result_3
        
        if (var_50 == result_3)
            i_5 = 0
            int64_t var_40 = 0
        label_d171cc:
            
            if (i_5 == 0)
            label_d17530:
                void** x0_14 = __cxa_allocate_exception(0x20)
                int64_t x0_15
                int128_t v0_1
                x0_15, v0_1 = operator new(0x30)
                v0_1 = data_71aa70
                int64_t var_a0_1 = x0_15
                __builtin_strncpy(x0_15, "make_dsa_generator q does not divide p-1", 0x29)
                var_b0.o = v0_1
                *x0_14 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_14[1])
                *x0_14 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_14, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            void* result_4 = result_1
            int32_t x10_4 = 0
            int64_t i
            
            do
                int32_t x11_4 = *result_4
                result_4 += 4
                i = i_5
                i_5 -= 1
                int32_t x11_6 = ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
                x10_4 = (x10_4 & x11_6) | (not.d(x11_6) & 1)
            while (i != 1)
            
            if (x10_4 == 0)
                goto label_d17530
        else
            void* x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -ffffffffffffffff
            
            void* x11_2 = result_3 - var_50
            void* x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_5 = x10_1 s>> 2
            void* x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_7 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i_1
            
            do
                int32_t x12_3 = *(result_3 - 4 + (i_7 << 2))
                i_1 = i_7
                i_7 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                i_5 -= x11_3
            while (i_1 != 1)
            int64_t i_13 = i_5
            
            if (i_5 u<= 1)
                goto label_d171cc
    else if (i_5 u<= 1)
        goto label_d171cc

if (var_60 != 0)
    int64_t i_6 = i_10
    
    if (i_6 == -1)
        int32_t* x9_2 = var_80
        int64_t var_78
        void* x10_6 = var_78 - x9_2
        
        if (var_78 == x9_2)
            i_6 = 0
        else
            void* x12_6
            
            x12_6 = x10_6 s>= 0 ? x10_6 : -ffffffffffffffff
            
            void* x11_10 = x9_2 - var_78
            void* x12_7
            
            x12_7 = x12_6 s< 1 ? x12_6 : 1
            
            i_6 = x10_6 s>> 2
            void* x10_7
            
            x10_7 = x11_10 s> x10_6 ? x11_10 : x10_6
            
            int64_t i_8 = x12_7 * (x10_7 u>> 2)
            uint64_t x11_11 = 1
            int64_t i_2
            
            do
                int32_t x12_8 = *(x9_2 - 4 + (i_8 << 2))
                i_2 = i_8
                i_8 -= 1
                x11_11 = zx.q(x11_11.d) & zx.q(((x12_8 - 1) & not.d(x12_8)) s>> 0x1f)
                i_6 -= x11_11
            while (i_2 != 1)
        
        int64_t i_11 = i_6
    
    if (i_6 u> 1)
        goto label_d17530
    
    if (i_6 != 0)
        int32_t* x9_4 = var_80
        int32_t x10_9 = 0
        int64_t i_3
        
        do
            int32_t x11_12 = *x9_4
            x9_4 = &x9_4[1]
            i_3 = i_6
            i_6 -= 1
            int32_t x11_14 = ((x11_12 - 1) & not.d(x11_12)) s>> 0x1f
            x10_9 = (x10_9 & x11_14) | (not.d(x11_14) & 1)
        while (i_3 != 1)
        
        if (x10_9 s> 0)
            goto label_d17530

int64_t x21_1 = 0
int32_t* x0_7

while (true)
    *(Botan::PRIMES + (x21_1 << 1))
    Botan::BigInt::BigInt(&var_b0)
    Botan::power_mod(&var_b0, &result_1, arg2)
    void* x0_6 = var_b0
    
    if (x0_6 != 0)
        void* var_a8_2 = x0_6
        Botan::deallocate_memory(x0_6, (var_a0 - x0_6) s>> 2, 4)
    
    void* x8_5
    
    if (arg1[4].d == 0)
        x8_5 = *arg1
    else
        int64_t x9_7 = arg1[3]
        
        if (x9_7 == -1)
            int64_t x8_10 = *arg1
            int64_t x11_17 = arg1[1]
            int64_t x10_11 = x11_17 - x8_10
            
            if (x11_17 == x8_10)
                x9_7 = 0
            else
                int64_t x12_11
                
                x12_11 = x10_11 s>= 0 ? x10_11 : -1
                
                int64_t x11_18 = x8_10 - x11_17
                int64_t x12_12
                
                x12_12 = x12_11 s< 1 ? x12_11 : 1
                
                x9_7 = x10_11 s>> 2
                int64_t x10_12
                
                x10_12 = x11_18 s> x10_11 ? x11_18 : x10_11
                
                int64_t i_9 = x12_12 * (x10_12 u>> 2)
                uint64_t x11_19 = 1
                int64_t i_4
                
                do
                    int32_t x12_13 = *(x8_10 - 4 + (i_9 << 2))
                    i_4 = i_9
                    i_9 -= 1
                    x11_19 = zx.q(x11_19.d) & zx.q(((x12_13 - 1) & not.d(x12_13)) s>> 0x1f)
                    x9_7 -= x11_19
                while (i_4 != 1)
            
            arg1[3] = x9_7
        
        if (x9_7 u> 1)
            x0_7 = var_80
            break
            break
        
        x8_5 = *arg1
        
        if (x9_7 != 0)
            int64_t x10_14 = 0
            int32_t x11_20 = 0
            
            do
                int32_t x12_15 = *(x8_5 + (x10_14 << 2))
                x10_14 += 1
                int32_t x12_17 = (((x12_15 ^ 1) - 1) & not.d(x12_15)) s>> 0x1f
                x11_20 = (x11_20 & x12_17)
                    | ((((x12_15 - 1) & not.d(x12_15)) s>> 0x1f | 1) & not.d(x12_17))
            while (x9_7 != x10_14)
            
            if (x11_20 s<= 0)
                goto label_d172d4
            
            x0_7 = var_80
            break
            break
    
    if (x8_5 != 0)
    label_d172d4:
        int64_t x9_5 = arg1[2]
        arg1[1] = x8_5
        Botan::deallocate_memory(x8_5, (x9_5 - x8_5) s>> 2, 4)
    
    x21_1 += 1
    
    if (x21_1 == 0x198d)
        void** x0_8 = __cxa_allocate_exception(0x20)
        int64_t x0_9
        int128_t v0
        x0_9, v0 = operator new(0x30)
        int64_t var_c0 = x0_9
        var_d0 = data_71a900
        __builtin_strncpy(x0_9, "DL_Group: Couldn\'t create a suitable generator", 0x2f)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Internal error: ", &var_d0)
        *x0_8 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_8[1])
        
        if ((zx.d(var_b0.b) & 1) != 0)
            operator delete(var_a0)
        
        *x0_8 = _vtable_for_Botan::Internal_Error + 0x10
        __cxa_throw(x0_8, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
        noreturn

if (x0_7 != 0)
    int32_t* var_78_1 = x0_7
    int64_t var_70
    Botan::deallocate_memory(x0_7, (var_70 - x0_7) s>> 2, 4)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_48
return Botan::deallocate_memory(result, (var_48 - result) s>> 2, 4)

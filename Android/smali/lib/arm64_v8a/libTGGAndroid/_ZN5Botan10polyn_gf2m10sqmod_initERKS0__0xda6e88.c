// 函数: _ZN5Botan10polyn_gf2m10sqmod_initERKS0_
// 地址: 0xda6e88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t x9 = *(arg1 + 8)
int64_t x8_1 = *(arg1 + 0x10) - x9
uint32_t x10 = (x8_1 u>> 1).d
int64_t x8_2 = (x8_1 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x23 = (x10 & x10 s>> 0x1f) - 1

while (true)
    int64_t x10_2 = x8_2 - 1
    
    if (x8_2 s< 1)
        break
    
    uint32_t x11_1 = zx.d(*(x9 - 2 + (x8_2 << 1)))
    x8_2 = x10_2
    
    if (x11_1 != 0)
        x23 = x10_2.d
        break

*arg1 = x23
int128_t var_70

if (x23 s>= 1)
    int32_t x24_1 = 0
    void* result
    
    do
        int64_t* x8_3 = *(arg1 + 0x28)
        int64_t var_80_1 = *(arg1 + 0x20)
        
        if (x8_3 != 0)
            int32_t i
            
            do
                i = __stxr(__ldxr(&x8_3[1]) + 1, &x8_3[1])
            while (i != 0)
        
        Botan::polyn_gf2m::polyn_gf2m(&var_70, zx.q(x23 + 1))
        int32_t* x8_5 = entry_x8[1]
        void* result_1
        int64_t var_58
        int64_t* var_48
        
        if (x8_5 u>= entry_x8[2])
            std::__ndk1::vector<Botan::polyn_gf2m, std::__ndk1::allocator<Botan::polyn_gf2m> >::__push_back_slow_path<Botan::polyn_gf2m>(
                entry_x8)
        else
            int128_t v0_1
            v0_1.q = 0
            v0_1:8.q = 0
            __builtin_memset(&x8_5[2], 0, 0x28)
            int32_t x10_4 = *x8_5
            *x8_5 = var_70.d
            var_70.d = x10_4
            int64_t var_50
            *(x8_5 + 0x20) = var_50
            *(x8_5 + 0x28) = var_48
            var_50 = 0
            var_48 = nullptr
            v0_1 = *(x8_5 + 8)
            *(x8_5 + 8) = var_70:8.q
            *(x8_5 + 0x10) = result_1
            var_70 = v0_1
            int64_t x10_5 = *(x8_5 + 0x18)
            *(x8_5 + 0x18) = var_58
            var_58 = x10_5
            entry_x8[1] = &x8_5[0xc]
        
        if (var_48 == 0)
        label_da6fd4:
            result = var_70:8.q
            
            if (result != 0)
                result_1 = result
                result = Botan::deallocate_memory(result, (var_58 - result) s>> 1, 2)
        else
            int64_t x9_12
            int32_t i_1
            
            do
                x9_12 = __ldaxr(&var_48[1])
                i_1 = __stlxr(x9_12 - 1, &var_48[1])
            while (i_1 != 0)
            
            if (x9_12 != 0)
                goto label_da6fd4
            
            (*(*var_48 + 0x10))(var_48)
            std::__ndk1::__shared_weak_count::__release_weak()
            result = var_70:8.q
            
            if (result != 0)
                result_1 = result
                result = Botan::deallocate_memory(result, (var_58 - result) s>> 1, 2)
        
        if (x8_3 != 0)
            int64_t x9_13
            int32_t i_2
            
            do
                x9_13 = __ldaxr(&x8_3[1])
                i_2 = __stlxr(x9_13 - 1, &x8_3[1])
            while (i_2 != 0)
            
            if (x9_13 == 0)
                (*(*x8_3 + 0x10))(x8_3)
                result = std::__ndk1::__shared_weak_count::__release_weak()
        
        x24_1 += 1
    while (x24_1 != x23)
    
    uint32_t x8_15 = x23 u>> 1
    
    if (x8_15 != 0)
        int64_t i_3 = 0
        int64_t x10_8 = 8
        
        do
            *(*entry_x8 + x10_8 - 8) = i_3.d
            int64_t x13_4 = *(*entry_x8 + x10_8)
            x10_8 += 0x30
            *(x13_4 + (i_3 << 1)) = 1
            i_3 += 2
        while (zx.q(x8_15) << 1 != i_3)
    
    if (x8_15 u>= x23)
        return result
    
    uint64_t x22_3 = zx.q(x23)
    uint64_t x23_1 = zx.q(x8_15)
    
    while (true)
        uint64_t x25_1 = zx.q(x23_1.d - 1)
        **(*entry_x8 + x23_1 * 0x30 + 8) = 0
        void* x8_19 = *entry_x8
        int64_t x1_3 = *(x8_19 + mulu.dp.d(x25_1.d, 0x30) + 8)
        
        if (x1_3 == 0)
            break
        
        memmove(*(x8_19 + x23_1 * 0x30 + 8) + 4, x1_3, x22_3 << 1)
        int32_t* x8_22 = *entry_x8
        void* x9_15 = x8_22 + x25_1 * 0x30
        int64_t x11_6 = *(x9_15 + 8)
        int64_t x9_16 = *(x9_15 + 0x10) - x11_6
        uint32_t x12_1 = (x9_16 u>> 1).d
        int64_t x10_10 = (x9_16 & 0x1fffffffe) << 0x1f s>> 0x20
        int32_t x9_18 = (x12_1 & x12_1 s>> 0x1f) - 1
        
        while (true)
            int64_t x12_2 = x10_10 - 1
            
            if (x10_10 s< 1)
                break
            
            uint32_t x13_5 = zx.d(*(x11_6 - 2 + (x10_10 << 1)))
            x10_10 = x12_2
            
            if (x13_5 != 0)
                x9_18 = x12_2.d
                break
        
        x8_22[x25_1 * 0xc] = x9_18
        x8_22[x23_1 * 0xc] = x9_18 + 2
        result = Botan::polyn_gf2m::remainder(*entry_x8 + x23_1 * 0x30, arg1)
        x23_1 += 1
        
        if (x23_1 == x22_3)
            return result
    
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

void** x0_8 = __cxa_allocate_exception(0x20)
int64_t x0_9
int128_t v0_2
x0_9, v0_2 = operator new(0x30)
v0_2 = data_71aa70
int64_t var_60 = x0_9
__builtin_strncpy(x0_9, "cannot compute sqmod for such low degree", 0x29)
var_70 = v0_2
*x0_8 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_8[1])
*x0_8 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn

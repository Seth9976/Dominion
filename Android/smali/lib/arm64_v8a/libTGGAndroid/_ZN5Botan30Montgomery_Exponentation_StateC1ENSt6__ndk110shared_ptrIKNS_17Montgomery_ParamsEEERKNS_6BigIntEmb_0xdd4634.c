// 函数: _ZN5Botan30Montgomery_Exponentation_StateC1ENSt6__ndk110shared_ptrIKNS_17Montgomery_ParamsEEERKNS_6BigIntEmb
// 地址: 0xdd4634
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = arg1
*arg1 = *arg2
int64_t x9 = *(arg2 + 8)
*(arg1 + 8) = x9

if (x9 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x9 + 8) + 1, x9 + 8)
    while (i != 0)
    *x19

__builtin_memset(&x19[2], 0, 0x18)
int64_t x9_2

x9_2 = arg4 == 0 ? 4 : arg4

x19[5] = x9_2
char entry_x4
x19[6].b = entry_x4 & 1
int128_t var_90

if ((Botan::BigInt::is_less_than(arg3) & 1) == 0)
    Botan::throw_invalid_argument("Montgomery base too big", "Montgomery_Exponentation_State", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
else
    int64_t x24_1 = x19[5]
    
    if (x24_1 - 1 u< 0xc)
        int64_t i_9 = 1 << x24_1
        std::__ndk1::vector<Botan::Montgomery_Int, std::__ndk1::allocator<Botan::Montgomery_Int> >::reserve(
            &x19[2])
        int64_t x8_3 = *x19
        int64_t* x9_3 = x19[1]
        int64_t var_a0 = x8_3
        
        if (x9_3 != 0)
            int32_t i_1
            
            do
                i_1 = __stxr(__ldxr(&x9_3[1]) + 1, &x9_3[1])
            while (i_1 != 0)
            x8_3 = *x19
        
        Botan::Montgomery_Int::Montgomery_Int(&var_90, &var_a0, x8_3.b + 0x28)
        int64_t* x8_5 = x19[3]
        void* var_80
        void* var_78
        int64_t var_70
        int64_t var_68
        int32_t var_60
        
        if (x8_5 u>= x19[4])
            std::__ndk1::vector<Botan::Montgomery_Int, std::__ndk1::allocator<Botan::Montgomery_Int> >::__push_back_slow_path<Botan::Montgomery_Int>(
                &x19[2])
            
            if (var_80 != 0)
                var_78 = var_80
                Botan::deallocate_memory(var_80, (var_70 - var_80) s>> 2, 4)
        else
            *x8_5 = var_90.q
            x8_5[1] = var_90:8.q
            __builtin_memset(&x8_5[2], 0, 0x18)
            __builtin_memset(&var_90, 0, 0x28)
            x8_5[6].d = 1
            x8_5[2] = var_80
            x8_5[3] = var_78
            x8_5[4] = var_70
            x8_5[5] = -1
            x8_5[5] = var_68
            var_68 = -1
            x8_5[6].d = var_60
            var_60 = 1
            x19[3] = &x8_5[7]
        
        int64_t* x23 = var_90:8.q
        
        if (x23 != 0)
            int64_t x9_14
            int32_t i_2
            
            do
                x9_14 = __ldaxr(&x23[1])
                i_2 = __stlxr(x9_14 - 1, &x23[1])
            while (i_2 != 0)
            
            if (x9_14 == 0)
                (*(*x23 + 0x10))(x23)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        if (x9_3 != 0)
            int64_t x9_15
            int32_t i_3
            
            do
                x9_15 = __ldaxr(&x9_3[1])
                i_3 = __stlxr(x9_15 - 1, &x9_3[1])
            while (i_3 != 0)
            
            if (x9_15 == 0)
                (*(*x9_3 + 0x10))(x9_3)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        int64_t* x8_14 = x19[1]
        int64_t var_b0 = *x19
        
        if (x8_14 != 0)
            int32_t i_4
            
            do
                i_4 = __stxr(__ldxr(&x8_14[1]) + 1, &x8_14[1])
            while (i_4 != 0)
        
        Botan::Montgomery_Int::Montgomery_Int(&var_90, &var_b0, arg3.b)
        int64_t* x8_16 = x19[3]
        
        if (x8_16 u>= x19[4])
            std::__ndk1::vector<Botan::Montgomery_Int, std::__ndk1::allocator<Botan::Montgomery_Int> >::__push_back_slow_path<Botan::Montgomery_Int>(
                &x19[2])
            
            if (var_80 != 0)
                var_78 = var_80
                Botan::deallocate_memory(var_80, (var_70 - var_80) s>> 2, 4)
        else
            *x8_16 = var_90.q
            x8_16[1] = var_90:8.q
            __builtin_memset(&x8_16[2], 0, 0x18)
            __builtin_memset(&var_90, 0, 0x28)
            x8_16[6].d = 1
            x8_16[2] = var_80
            x8_16[3] = var_78
            x8_16[4] = var_70
            x8_16[5] = -1
            x8_16[5] = var_68
            var_68 = -1
            x8_16[6].d = var_60
            var_60 = 1
            x19[3] = &x8_16[7]
        
        int64_t* x22_1 = var_90:8.q
        int64_t x9_27
        
        if (x22_1 != 0)
            int32_t i_5
            
            do
                x9_27 = __ldaxr(&x22_1[1])
                i_5 = __stlxr(x9_27 - 1, &x22_1[1])
            while (i_5 != 0)
        
        int64_t* x22_2
        
        if (x22_1 != 0 && x9_27 == 0)
            (*(*x22_1 + 0x10))(x22_1)
            std::__ndk1::__shared_weak_count::__release_weak()
            x22_2 = x8_14
            
            if (x22_2 != 0)
                goto label_dd4924
            
            goto label_dd492c
        
        x22_2 = x8_14
        
        if (x22_2 == 0)
        label_dd492c:
            
            if (x24_1 != 1)
            label_dd49b0:
                int64_t x23_2 = 2
                
                do
                    Botan::Montgomery_Int::operator*(x19[2] + 0x38)
                    int64_t* x8_28 = x19[3]
                    
                    if (x8_28 u>= x19[4])
                        std::__ndk1::vector<Botan::Montgomery_Int, std::__ndk1::allocator<Botan::Montgomery_Int> >::__push_back_slow_path<Botan::Montgomery_Int>(
                            &x19[2])
                        
                        if (var_80 != 0)
                            var_78 = var_80
                            Botan::deallocate_memory(var_80, (var_70 - var_80) s>> 2, 4)
                    else
                        *x8_28 = var_90.q
                        x8_28[1] = var_90:8.q
                        __builtin_memset(&x8_28[2], 0, 0x18)
                        __builtin_memset(&var_90, 0, 0x28)
                        x8_28[6].d = 1
                        x8_28[2] = var_80
                        x8_28[3] = var_78
                        x8_28[4] = var_70
                        x8_28[5] = -1
                        x8_28[5] = var_68
                        var_68 = -1
                        x8_28[6].d = var_60
                        var_60 = 1
                        x19[3] = &x8_28[7]
                    
                    int64_t* x22_4 = var_90:8.q
                    
                    if (x22_4 != 0)
                        int64_t x9_37
                        int32_t i_6
                        
                        do
                            x9_37 = __ldaxr(&x22_4[1])
                            i_6 = __stlxr(x9_37 - 1, &x22_4[1])
                        while (i_6 != 0)
                        
                        if (x9_37 == 0)
                            (*(*x22_4 + 0x10))(x22_4)
                            std::__ndk1::__shared_weak_count::__release_weak()
                    
                    x23_2 += 1
                while (x23_2 != i_9)
        else
        label_dd4924:
            int64_t x9_28
            int32_t i_7
            
            do
                x9_28 = __ldaxr(&x22_2[1])
                i_7 = __stlxr(x9_28 - 1, &x22_2[1])
            while (i_7 != 0)
            
            if (x9_28 != 0)
                goto label_dd492c
            
            (*(*x22_2 + 0x10))(x22_2)
            std::__ndk1::__shared_weak_count::__release_weak()
            
            if (x24_1 != 1)
                goto label_dd49b0
        
        int64_t x22_3 = 0
        int64_t result
        int32_t i_8
        
        do
            x19[2]
            result = Botan::Montgomery_Int::fix_size()
            i_8 = i_9
            i_9 -= 1
            x22_3 += 0x38
        while (i_8 != 1)
        return result

void** x0_23 = __cxa_allocate_exception(0x20)
int64_t x0_24
int128_t v0
x0_24, v0 = operator new(0x40)
v0 = data_71d0c0
int64_t var_80_1 = x0_24
__builtin_strncpy(x0_24, "Invalid window bits for Montgomery exponentiation", 0x32)
var_90 = v0
*x0_23 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_23[1])
*x0_23 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_23, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn

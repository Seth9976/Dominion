// 函数: sub_ec3ee4
// 地址: 0xec3ee4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9_1
int32_t i

do
    x9_1 = __ldaxr(&arg7[1])
    i = __stlxr(x9_1 - 1, &arg7[1])
while (i != 0)

if (x9_1 == 0)
    (*(*arg7 + 0x10))(arg7)

void* arg_58

if (arg2 != 2)
    void* x20_3 = arg_58
    
    if (x20_3 != 0)
        void* x21_3 = arg10
        void* x0_16 = x20_3
        
        if (x21_3 != x20_3)
            do
                int64_t* x19_4 = *(x21_3 - 8)
                x21_3 -= 0x10
                
                if (x19_4 != 0)
                    int64_t x9_15
                    int32_t i_1
                    
                    do
                        x9_15 = __ldaxr(&x19_4[1])
                        i_1 = __stlxr(x9_15 - 1, &x19_4[1])
                    while (i_1 != 0)
                    
                    if (x9_15 == 0)
                        (*(*x19_4 + 0x10))(x19_4)
                        std::__ndk1::__shared_weak_count::__release_weak()
            while (x21_3 != x20_3)
            
            x0_16 = arg_58
        
        arg10 = x20_3
        operator delete(x0_16)
    
    if (arg11 != 0)
        void* x20_4 = arg12
        void* x0_19 = arg11
        
        if (x20_4 != arg11)
            do
                x20_4 -= 8
                int64_t* x0_20 = *x20_4
                
                if (x0_20 != 0)
                    int64_t x9_16
                    int32_t i_2
                    
                    do
                        x9_16 = __ldaxr(&x0_20[1])
                        i_2 = __stlxr(x9_16 - 1, &x0_20[1])
                    while (i_2 != 0)
                    
                    if (x9_16 == 0)
                        (*(*x0_20 + 0x10))()
            while (x20_4 != arg11)
            
            x0_19 = arg11
        
        arg12 = arg11
        operator delete(x0_19)
    
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
__cxa_end_catch()

while (true)
    arg5 += 1
    
    if (arg5 == (arg12 - arg11) s>> 3)
        break
    
    std::__ndk1::unique_lock<std::__ndk1::mutex>* x24_1 = *(arg11 + (arg5 << 3))
    
    if (x24_1 != 0)
        *(arg11 + (arg5 << 3)) = 0
        int64_t arg_40
        sub_f5972c(x24_1, &arg_40)
        int64_t x9_19
        int32_t i_3
        
        do
            x9_19 = __ldaxr(x24_1 + 8)
            i_3 = __stlxr(x9_19 - 1, x24_1 + 8)
        while (i_3 != 0)
        
        if (x9_19 == 0)
            (*(*x24_1 + 0x10))(x24_1)
        
        void* x8_32 = arg_58
        int64_t x9_20 = arg_40
        int64_t* x10_9 = arg9
        arg_40 = 0
        arg9 = nullptr
        int64_t* x8_33 = x8_32 + (arg5 << 4)
        int64_t* x23_2 = x8_33[1]
        *x8_33 = x9_20
        x8_33[1] = x10_9
        int64_t x9_21
        
        if (x23_2 != 0)
            int32_t i_4
            
            do
                x9_21 = __ldaxr(&x23_2[1])
                i_4 = __stlxr(x9_21 - 1, &x23_2[1])
            while (i_4 != 0)
        
        int64_t* x23_3
        
        if (x23_2 != 0 && x9_21 == 0)
            (*(*x23_2 + 0x10))(x23_2)
            std::__ndk1::__shared_weak_count::__release_weak()
            x23_3 = arg9
            
            if (x23_3 == 0)
                continue
        else
            x23_3 = arg9
            
            if (x23_3 == 0)
                continue
        
        int64_t x9_22
        int32_t i_5
        
        do
            x9_22 = __ldaxr(&x23_3[1])
            i_5 = __stlxr(x9_22 - 1, &x23_3[1])
        while (i_5 != 0)
        
        if (x9_22 == 0)
            (*(*x23_3 + 0x10))(x23_3)
            std::__ndk1::__shared_weak_count::__release_weak()

int64_t result = Botan::PKIX::check_crl(arg6, &arg_58, arg8)

if (arg4 != 0)
    int64_t x8_4 = *arg3
    
    if (arg3[1] != x8_4)
        int64_t i_6 = 0
        
        do
            void* j = *(x8_4 + i_6 * 0x18 + 8)
            
            if (j != 0)
                do
                    int32_t x9_7 = *(j + 0x1c)
                    
                    if (x9_7 s< 4)
                        if (x9_7 == 3)
                            void* x8_6 = arg_58
                            int64_t x9_9 = *(x8_6 + (i_6 << 4))
                            
                            if (x9_9 == 0)
                                Botan::assertion_failure("crls[i] is not null", &data_793a18, 
                                    "check_crl_online", 
                                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                                    0x1835a)
                                void** x0_11 = __cxa_allocate_exception(0x20)
                                int64_t x0_12
                                int128_t v0
                                x0_12, v0 = operator new(0x30)
                                v0 = data_71b5b0
                                int64_t arg_80 = x0_12
                                __builtin_strncpy(x0_12, "PKIX::check_crl_online cert_path empty", 
                                    0x27)
                                arg11.o = v0
                                *x0_11 = _vtable_for_Botan::Exception + 0x10
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &x0_11[1])
                                *x0_11 = _vtable_for_Botan::Invalid_Argument + 0x10
                                __cxa_throw(x0_11, _typeinfo_for_Botan::Invalid_Argument, 
                                    Botan::Exception::~Exception)
                                noreturn
                            
                            int64_t arg_28 = x9_9
                            int64_t* x8_8 = *(x8_6 + (i_6 << 4) + 8)
                            
                            if (x8_8 != 0)
                                int32_t k
                                
                                do
                                    k = __stxr(__ldxr(&x8_8[1]) + 1, &x8_8[1])
                                while (k != 0)
                            
                            result = Botan::Certificate_Store_In_Memory::add_crl(arg4)
                            
                            if (x8_8 != 0)
                                int64_t x9_12
                                int32_t k_1
                                
                                do
                                    x9_12 = __ldaxr(&x8_8[1])
                                    k_1 = __stlxr(x9_12 - 1, &x8_8[1])
                                while (k_1 != 0)
                                
                                if (x9_12 == 0)
                                    (*(*x8_8 + 0x10))(x8_8)
                                    result = std::__ndk1::__shared_weak_count::__release_weak()
                            
                            break
                        
                        j += 8
                    
                    j = *j
                while (j != 0)
            
            x8_4 = *arg3
            i_6 += 1
        while (i_6 != ((arg3[1] - x8_4) s>> 3) * -0x5555555555555555)

void* x20 = arg_58

if (x20 != 0)
    void* x21_1 = arg10
    void* x0_6
    
    if (x21_1 != x20)
        do
            int64_t* x19 = *(x21_1 - 8)
            x21_1 -= 0x10
            
            if (x19 != 0)
                int64_t x9_13
                int32_t i_7
                
                do
                    x9_13 = __ldaxr(&x19[1])
                    i_7 = __stlxr(x9_13 - 1, &x19[1])
                while (i_7 != 0)
                
                if (x9_13 == 0)
                    (*(*x19 + 0x10))(x19)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x21_1 != x20)
        
        x0_6 = arg_58
    else
        x0_6 = x20
    
    arg10 = x20
    result = operator delete(x0_6)

if (arg11 == 0)
    return result

void* x20_1 = arg12
void* x0_9

if (x20_1 != arg11)
    do
        x20_1 -= 8
        int64_t* x0_10 = *x20_1
        
        if (x0_10 != 0)
            int64_t x9_14
            int32_t i_8
            
            do
                x9_14 = __ldaxr(&x0_10[1])
                i_8 = __stlxr(x9_14 - 1, &x0_10[1])
            while (i_8 != 0)
            
            if (x9_14 == 0)
                (*(*x0_10 + 0x10))()
    while (x20_1 != arg11)
    
    x0_9 = arg11
else
    x0_9 = arg11

arg12 = arg11
return operator delete(x0_9)

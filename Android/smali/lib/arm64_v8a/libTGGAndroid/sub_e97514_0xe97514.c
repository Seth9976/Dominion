// 函数: sub_e97514
// 地址: 0xe97514
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg9 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&arg9[1])
        i = __stlxr(x9_1 - 1, &arg9[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*arg9 + 0x10))(arg9)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t arg_10
int64_t* result

if (arg2 != 1)
    int64_t* x0_4 = arg12
    int64_t x28
    arg_10 = x28
    arg12 = nullptr
    
    if (x0_4 != 0)
        (*(*x0_4 + 8))()
    
    if ((zx.d(arg10) & 1) != 0)
        operator delete(arg11)
    
    if (arg2 == 1)
        __cxa_begin_catch(arg1)
        result = __cxa_end_catch()
        goto label_e9743c
    
    void* x23_2
    
    if (arg14 != 0)
        void* x8_12 = arg15
        void* x0_10 = arg14
        
        if (x8_12 != arg14)
            void* x23_3 = x8_12
            
            do
                x23_3 -= 0x18
                
                if ((zx.d(*x23_3) & 1) != 0)
                    operator delete(*(x8_12 - 8))
                
                x8_12 = x23_3
            while (arg14 != x23_3)
            
            x0_10 = arg14
        
        arg15 = arg14
        operator delete(x0_10)
        x23_2 = *(arg3 + 0x20)
        
        if (x23_2 == 0)
            goto label_e976c8
        
        goto label_e97734
    
    x23_2 = *(arg3 + 0x20)
    void* x23_4
    
    if (x23_2 != 0)
    label_e97734:
        void* x24_1 = *(arg3 + 0x28)
        void* x0_12 = x23_2
        
        if (x24_1 != x23_2)
            do
                int64_t* x22_2 = *(x24_1 - 8)
                x24_1 -= 0x10
                
                if (x22_2 != 0)
                    int64_t x9_4
                    int32_t i_1
                    
                    do
                        x9_4 = __ldaxr(&x22_2[1])
                        i_1 = __stlxr(x9_4 - 1, &x22_2[1])
                    while (i_1 != 0)
                    
                    if (x9_4 == 0)
                        (*(*x22_2 + 0x10))(x22_2)
                        std::__ndk1::__shared_weak_count::__release_weak()
            while (x24_1 != x23_2)
            
            x0_12 = *(arg3 + 0x20)
        
        *(arg3 + 0x28) = x23_2
        operator delete(x0_12)
        x23_4 = *arg4
        
        if (x23_4 == 0)
            sub_1101e04(arg1)
            noreturn
    else
    label_e976c8:
        x23_4 = *arg4
        
        if (x23_4 == 0)
            sub_1101e04(arg1)
            noreturn
    
    void* x24_2 = *(arg3 + 0x10)
    void* x0_15 = x23_4
    
    if (x24_2 != x23_4)
        do
            int64_t* x22_3 = *(x24_2 - 8)
            x24_2 -= 0x10
            
            if (x22_3 != 0)
                int64_t x9_5
                int32_t i_2
                
                do
                    x9_5 = __ldaxr(&x22_3[1])
                    i_2 = __stlxr(x9_5 - 1, &x22_3[1])
                while (i_2 != 0)
                
                if (x9_5 == 0)
                    (*(*x22_3 + 0x10))(x22_3)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x24_2 != x23_4)
        
        x0_15 = *arg4
    
    *(arg3 + 0x10) = x23_4
    operator delete(x0_15)
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
__cxa_end_catch()

while (true)
    result = arg12
    arg_10 = arg7 + 0x10
    arg12 = nullptr
    
    if (result != 0)
        result = (*(*result + 8))()
    
    if ((zx.d(arg10) & 1) != 0)
        result = operator delete(arg11)
    
label_e9743c:
    arg5 += 0x18
    
    if (arg5 == arg6)
        break
    
    Botan::DataSource_Stream::DataSource_Stream(&arg_10, arg5.b)
label_e97484:
    
    if (*(arg13 + *(*arg13 - 0x18) + 0x20) == 0)
        int64_t* x0_20 = operator new(0xa0)
        x0_20[1] = 0
        x0_20[2] = 0
        *x0_20 = arg8
        Botan::X509_Certificate::X509_Certificate(&x0_20[3])
        void* arg_0 = &x0_20[3]
        int64_t* x8_22 = *(arg3 + 0x10)
        
        if (x8_22 u< *(arg3 + 0x18))
            *x8_22 = &x0_20[3]
            x8_22[1] = x0_20
            *(arg3 + 0x10) = &x8_22[2]
            goto label_e97484
        
        std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::X509_Certificate const> >(
            arg4)
        
        if (x0_20 == 0)
            goto label_e97484
        
    label_e974d4:
        int64_t x9_10 = __ldaxr(&x0_20[1])
        
        if (__stlxr(x9_10 - 1, &x0_20[1]) != 0)
            goto label_e974d4
        
        if (x9_10 != 0)
            goto label_e97484
        
        (*(*x0_20 + 0x10))(x0_20)
        std::__ndk1::__shared_weak_count::__release_weak()
        goto label_e97484

if (arg14 == 0)
    return result

if (arg15 == arg14)
    arg15 = arg14
    return operator delete(arg14)

label_e97640:
void* x19 = arg15 - 0x18

if ((zx.d(*x19) & 1) != 0)
    operator delete(*(arg15 - 8))

if (arg14 == x19)
    arg15 = arg14
    return operator delete(arg14)

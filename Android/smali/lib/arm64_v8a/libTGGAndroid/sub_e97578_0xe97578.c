// 函数: sub_e97578
// 地址: 0xe97578
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t arg_10
int64_t* result

if (arg2 != 1)
    int64_t* x0_2 = arg11
    int64_t x28
    arg_10 = x28
    arg11 = nullptr
    
    if (x0_2 != 0)
        (*(*x0_2 + 8))()
    
    if ((zx.d(arg9) & 1) != 0)
        operator delete(arg10)
    
    if (arg2 == 1)
        __cxa_begin_catch(arg1)
        result = __cxa_end_catch()
        goto label_e9743c
    
    void* x23_2
    
    if (arg13 != 0)
        void* x8_9 = arg14
        void* x0_8 = arg13
        
        if (x8_9 != arg13)
            void* x23_3 = x8_9
            
            do
                x23_3 -= 0x18
                
                if ((zx.d(*x23_3) & 1) != 0)
                    operator delete(*(x8_9 - 8))
                
                x8_9 = x23_3
            while (arg13 != x23_3)
            
            x0_8 = arg13
        
        arg14 = arg13
        operator delete(x0_8)
        x23_2 = *(arg3 + 0x20)
        
        if (x23_2 == 0)
            goto label_e976c8
        
        goto label_e97734
    
    x23_2 = *(arg3 + 0x20)
    void* x23_4
    
    if (x23_2 != 0)
    label_e97734:
        void* x24_2 = *(arg3 + 0x28)
        void* x0_10 = x23_2
        
        if (x24_2 != x23_2)
            do
                int64_t* x22_2 = *(x24_2 - 8)
                x24_2 -= 0x10
                
                if (x22_2 != 0)
                    int64_t x9_3
                    int32_t i
                    
                    do
                        x9_3 = __ldaxr(&x22_2[1])
                        i = __stlxr(x9_3 - 1, &x22_2[1])
                    while (i != 0)
                    
                    if (x9_3 == 0)
                        (*(*x22_2 + 0x10))(x22_2)
                        std::__ndk1::__shared_weak_count::__release_weak()
            while (x24_2 != x23_2)
            
            x0_10 = *(arg3 + 0x20)
        
        *(arg3 + 0x28) = x23_2
        operator delete(x0_10)
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
    
    void* x24_3 = *(arg3 + 0x10)
    void* x0_13 = x23_4
    
    if (x24_3 != x23_4)
        do
            int64_t* x22_3 = *(x24_3 - 8)
            x24_3 -= 0x10
            
            if (x22_3 != 0)
                int64_t x9_4
                int32_t i_1
                
                do
                    x9_4 = __ldaxr(&x22_3[1])
                    i_1 = __stlxr(x9_4 - 1, &x22_3[1])
                while (i_1 != 0)
                
                if (x9_4 == 0)
                    (*(*x22_3 + 0x10))(x22_3)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x24_3 != x23_4)
        
        x0_13 = *arg4
    
    *(arg3 + 0x10) = x23_4
    operator delete(x0_13)
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
__cxa_end_catch()

while (true)
    result = arg11
    arg_10 = arg7 + 0x10
    arg11 = nullptr
    
    if (result != 0)
        result = (*(*result + 8))()
    
    if ((zx.d(arg9) & 1) != 0)
        result = operator delete(arg10)
    
label_e9743c:
    arg5 += 0x18
    
    if (arg5 == arg6)
        break
    
    Botan::DataSource_Stream::DataSource_Stream(&arg_10, arg5.b)
label_e97484:
    
    if (*(arg12 + *(*arg12 - 0x18) + 0x20) == 0)
        int64_t* x0_18 = operator new(0xa0)
        x0_18[1] = 0
        x0_18[2] = 0
        *x0_18 = arg8
        Botan::X509_Certificate::X509_Certificate(&x0_18[3])
        Botan::DataSource* arg_0 = &x0_18[3]
        Botan::DataSource** x8_19 = *(arg3 + 0x10)
        
        if (x8_19 u< *(arg3 + 0x18))
            *x8_19 = &x0_18[3]
            x8_19[1] = x0_18
            *(arg3 + 0x10) = &x8_19[2]
            goto label_e97484
        
        std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::X509_Certificate const> >(
            arg4)
        
        if (x0_18 == 0)
            goto label_e97484
        
    label_e974d4:
        int64_t x9_9 = __ldaxr(&x0_18[1])
        
        if (__stlxr(x9_9 - 1, &x0_18[1]) != 0)
            goto label_e974d4
        
        if (x9_9 != 0)
            goto label_e97484
        
        (*(*x0_18 + 0x10))(x0_18)
        std::__ndk1::__shared_weak_count::__release_weak()
        goto label_e97484

if (arg13 == 0)
    return result

if (arg14 == arg13)
    arg14 = arg13
    return operator delete(arg13)

label_e97640:
void* x19 = arg14 - 0x18

if ((zx.d(*x19) & 1) != 0)
    operator delete(*(arg14 - 8))

if (arg13 == x19)
    arg14 = arg13
    return operator delete(arg13)

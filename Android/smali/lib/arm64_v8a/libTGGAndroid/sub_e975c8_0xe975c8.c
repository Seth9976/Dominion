// 函数: sub_e975c8
// 地址: 0xe975c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = arg11
int64_t x28
int64_t arg_10 = x28
arg11 = nullptr

if (x0 != 0)
    (*(*x0 + 8))()

if ((zx.d(arg9) & 1) != 0)
    operator delete(arg10)

if (arg2 == 1)
    __cxa_begin_catch(arg1)
    int64_t* result = __cxa_end_catch()
    
    while (true)
        arg5 += 0x18
        
        if (arg5 == arg6)
            break
        
        Botan::DataSource_Stream::DataSource_Stream(&arg_10, arg5.b)
        
        while (*(arg12 + *(*arg12 - 0x18) + 0x20) == 0)
            int64_t* x0_16 = operator new(0xa0)
            x0_16[1] = 0
            x0_16[2] = 0
            *x0_16 = arg8
            Botan::X509_Certificate::X509_Certificate(&x0_16[3])
            Botan::DataSource* arg_0 = &x0_16[3]
            Botan::DataSource** x8_15 = *(arg3 + 0x10)
            
            if (x8_15 u< *(arg3 + 0x18))
                *x8_15 = &x0_16[3]
                x8_15[1] = x0_16
                *(arg3 + 0x10) = &x8_15[2]
            else
                std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::X509_Certificate const> >(
                    arg4)
                
                if (x0_16 != 0)
                    int64_t x9_9
                    int32_t i
                    
                    do
                        x9_9 = __ldaxr(&x0_16[1])
                        i = __stlxr(x9_9 - 1, &x0_16[1])
                    while (i != 0)
                    
                    if (x9_9 == 0)
                        (*(*x0_16 + 0x10))(x0_16)
                        std::__ndk1::__shared_weak_count::__release_weak()
        
        result = arg11
        arg_10 = arg7 + 0x10
        arg11 = nullptr
        
        if (result != 0)
            result = (*(*result + 8))()
        
        if ((zx.d(arg9) & 1) != 0)
            result = operator delete(arg10)
    
    if (arg13 == 0)
        return result
    
    void* x8_4 = arg14
    void* x0_4
    
    if (x8_4 == arg13)
        x0_4 = arg13
    else
        void* x19 = x8_4
        
        do
            x19 -= 0x18
            
            if ((zx.d(*x19) & 1) != 0)
                operator delete(*(x8_4 - 8))
            
            x8_4 = x19
        while (arg13 != x19)
        
        x0_4 = arg13
    
    arg14 = arg13
    return operator delete(x0_4)

void* x23_2

if (arg13 != 0)
    void* x8_5 = arg14
    void* x0_6 = arg13
    
    if (x8_5 != arg13)
        void* x23_3 = x8_5
        
        do
            x23_3 -= 0x18
            
            if ((zx.d(*x23_3) & 1) != 0)
                operator delete(*(x8_5 - 8))
            
            x8_5 = x23_3
        while (arg13 != x23_3)
        
        x0_6 = arg13
    
    arg14 = arg13
    operator delete(x0_6)
    x23_2 = *(arg3 + 0x20)
    
    if (x23_2 == 0)
        goto label_e976c8
    
    goto label_e97734

x23_2 = *(arg3 + 0x20)
void* x23_4

if (x23_2 != 0)
label_e97734:
    void* x24_2 = *(arg3 + 0x28)
    void* x0_8 = x23_2
    
    if (x24_2 != x23_2)
        do
            int64_t* x22_2 = *(x24_2 - 8)
            x24_2 -= 0x10
            
            if (x22_2 != 0)
                int64_t x9_3
                int32_t i_1
                
                do
                    x9_3 = __ldaxr(&x22_2[1])
                    i_1 = __stlxr(x9_3 - 1, &x22_2[1])
                while (i_1 != 0)
                
                if (x9_3 == 0)
                    (*(*x22_2 + 0x10))(x22_2)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x24_2 != x23_2)
        
        x0_8 = *(arg3 + 0x20)
    
    *(arg3 + 0x28) = x23_2
    operator delete(x0_8)
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
void* x0_11 = x23_4

if (x24_3 != x23_4)
    do
        int64_t* x22_3 = *(x24_3 - 8)
        x24_3 -= 0x10
        
        if (x22_3 != 0)
            int64_t x9_4
            int32_t i_2
            
            do
                x9_4 = __ldaxr(&x22_3[1])
                i_2 = __stlxr(x9_4 - 1, &x22_3[1])
            while (i_2 != 0)
            
            if (x9_4 == 0)
                (*(*x22_3 + 0x10))(x22_3)
                std::__ndk1::__shared_weak_count::__release_weak()
    while (x24_3 != x23_4)
    
    x0_11 = *arg4

*(arg3 + 0x10) = x23_4
operator delete(x0_11)
sub_1101e04(arg1)
noreturn

// 函数: sub_cf7b5c
// 地址: 0xcf7b5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&arg3[1])
        i = __stlxr(x9_1 - 1, &arg3[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*arg3 + 0x10))(arg3)
        std::__ndk1::__shared_weak_count::__release_weak()

if (arg4 != 0)
    void* x23_1 = arg5
    void* x0_2
    
    if (x23_1 != arg4)
        do
            int64_t* x21 = *(x23_1 - 8)
            x23_1 -= 0x10
            
            if (x21 != 0)
                int64_t x9_2
                int32_t i_1
                
                do
                    x9_2 = __ldaxr(&x21[1])
                    i_1 = __stlxr(x9_2 - 1, &x21[1])
                while (i_1 != 0)
                
                if (x9_2 == 0)
                    (*(*x21 + 0x10))(x21)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x23_1 != arg4)
        
        x0_2 = arg4
    else
        x0_2 = arg4
    
    arg5 = arg4
    operator delete(x0_2)

if (arg2 != 1)
    if (arg6 != 0)
        void* x22_1 = arg7
        void* x0_9 = arg6
        
        if (x22_1 != arg6)
            do
                int64_t* x19_2 = *(x22_1 - 8)
                x22_1 -= 0x10
                
                if (x19_2 != 0)
                    int64_t x9_4
                    int32_t i_2
                    
                    do
                        x9_4 = __ldaxr(&x19_2[1])
                        i_2 = __stlxr(x9_4 - 1, &x19_2[1])
                    while (i_2 != 0)
                    
                    if (x9_4 == 0)
                        (*(*x19_2 + 0x10))(x19_2)
                        std::__ndk1::__shared_weak_count::__release_weak()
            while (x22_1 != arg6)
            
            x0_9 = arg6
        
        arg7 = arg6
        operator delete(x0_9)
    
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
int64_t x19
__builtin_memset(x19, 0, 0x18)
int64_t result = __cxa_end_catch()

if (arg6 == 0)
    return result

void* x21_1 = arg7
void* x0_6

if (x21_1 != arg6)
    do
        int64_t* x19_1 = *(x21_1 - 8)
        x21_1 -= 0x10
        
        if (x19_1 != 0)
            int64_t x9_3
            int32_t i_3
            
            do
                x9_3 = __ldaxr(&x19_1[1])
                i_3 = __stlxr(x9_3 - 1, &x19_1[1])
            while (i_3 != 0)
            
            if (x9_3 == 0)
                (*(*x19_1 + 0x10))(x19_1)
                std::__ndk1::__shared_weak_count::__release_weak()
    while (x21_1 != arg6)
    
    x0_6 = arg6
else
    x0_6 = arg6

arg7 = arg6
return operator delete(x0_6)

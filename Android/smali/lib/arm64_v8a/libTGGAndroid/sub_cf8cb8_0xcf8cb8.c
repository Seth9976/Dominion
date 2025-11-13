// 函数: sub_cf8cb8
// 地址: 0xcf8cb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 != 0)
    void* arg_50 = arg4
    operator delete(arg4)

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

void* x22 = *arg2

if (x22 != 0)
    void* x23_1 = arg2[1]
    void* x0_3 = x22
    
    if (x23_1 != x22)
        do
            int64_t* x20 = *(x23_1 - 8)
            x23_1 -= 0x10
            
            if (x20 != 0)
                int64_t x9_2
                int32_t i_1
                
                do
                    x9_2 = __ldaxr(&x20[1])
                    i_1 = __stlxr(x9_2 - 1, &x20[1])
                while (i_1 != 0)
                
                if (x9_2 == 0)
                    (*(*x20 + 0x10))(x20)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x23_1 != x22)
        
        x0_3 = *arg2
    
    arg2[1] = x22
    operator delete(x0_3)

sub_1101e04(arg1)
noreturn

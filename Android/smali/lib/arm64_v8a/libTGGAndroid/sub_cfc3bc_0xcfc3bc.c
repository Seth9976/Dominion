// 函数: sub_cfc3bc
// 地址: 0xcfc3bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *arg2

if (x22 != 0)
    void* x23_1 = arg2[1]
    void* x0 = x22
    
    if (x23_1 != x22)
        do
            int64_t* x21_1 = *(x23_1 - 8)
            x23_1 -= 0x10
            
            if (x21_1 != 0)
                int64_t x9_1
                int32_t i
                
                do
                    x9_1 = __ldaxr(&x21_1[1])
                    i = __stlxr(x9_1 - 1, &x21_1[1])
                while (i != 0)
                
                if (x9_1 == 0)
                    (*(*x21_1 + 0x10))(x21_1)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x23_1 != x22)
        
        x0 = *arg2
    
    arg2[1] = x22
    operator delete(x0)

if (arg3 != 0)
    int64_t x9_2
    int32_t i_1
    
    do
        x9_2 = __ldaxr(&arg3[1])
        i_1 = __stlxr(x9_2 - 1, &arg3[1])
    while (i_1 != 0)
    
    if (x9_2 == 0)
        (*(*arg3 + 0x10))(arg3)
        std::__ndk1::__shared_weak_count::__release_weak()

if ((zx.d(arg4) & 1) != 0)
    operator delete(arg5)

sub_1101e04(arg1)
noreturn

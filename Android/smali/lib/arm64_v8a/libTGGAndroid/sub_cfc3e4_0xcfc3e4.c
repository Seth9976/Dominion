// 函数: sub_cfc3e4
// 地址: 0xcfc3e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::__shared_weak_count::~__shared_weak_count()
operator delete(arg3)

if (arg5 != 0)
    void* arg_38 = arg5
    operator delete(arg5)

void* x22 = *arg2

if (x22 != 0)
    void* x23_1 = arg2[1]
    void* x0_3 = x22
    
    if (x23_1 != x22)
        do
            int64_t* x21 = *(x23_1 - 8)
            x23_1 -= 0x10
            
            if (x21 != 0)
                int64_t x9_1
                int32_t i
                
                do
                    x9_1 = __ldaxr(&x21[1])
                    i = __stlxr(x9_1 - 1, &x21[1])
                while (i != 0)
                
                if (x9_1 == 0)
                    (*(*x21 + 0x10))(x21)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x23_1 != x22)
        
        x0_3 = *arg2
    
    arg2[1] = x22
    operator delete(x0_3)

if (arg4 != 0)
    int64_t x9_2
    int32_t i_1
    
    do
        x9_2 = __ldaxr(&arg4[1])
        i_1 = __stlxr(x9_2 - 1, &arg4[1])
    while (i_1 != 0)
    
    if (x9_2 == 0)
        (*(*arg4 + 0x10))(arg4)
        std::__ndk1::__shared_weak_count::__release_weak()

if ((zx.d(arg6) & 1) != 0)
    operator delete(arg7)

sub_1101e04(arg1)
noreturn

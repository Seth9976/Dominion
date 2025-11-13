// 函数: sub_cfc8d0
// 地址: 0xcfc8d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg6) & 1) == 0)
    if ((zx.d(arg3) & 1) != 0)
        goto label_cfc914
    
    goto label_cfc8e4

operator delete(arg7)
int64_t* x20

if ((zx.d(arg3) & 1) == 0)
label_cfc8e4:
    x20 = arg2
    
    if (x20 != 0)
    label_cfc9d4:
        int64_t x9_1
        int32_t i
        
        do
            x9_1 = __ldaxr(&x20[1])
            i = __stlxr(x9_1 - 1, &x20[1])
        while (i != 0)
        
        if (x9_1 == 0)
            (*(*x20 + 0x10))(x20)
            std::__ndk1::__shared_weak_count::__release_weak()
else
label_cfc914:
    operator delete(arg4)
    x20 = arg2
    
    if (x20 != 0)
        goto label_cfc9d4

if (arg5 != 0)
    int64_t x9_2
    int32_t i_1
    
    do
        x9_2 = __ldaxr(&arg5[1])
        i_1 = __stlxr(x9_2 - 1, &arg5[1])
    while (i_1 != 0)
    
    if (x9_2 == 0)
        (*(*arg5 + 0x10))(arg5)
        std::__ndk1::__shared_weak_count::__release_weak()

if ((zx.d(arg8) & 1) != 0)
    operator delete(arg9)

if (arg10 != 0)
    void* arg_80 = arg10
    operator delete(arg10)

sub_1101e04(arg1)
noreturn

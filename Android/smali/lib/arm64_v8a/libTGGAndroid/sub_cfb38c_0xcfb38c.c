// 函数: sub_cfb38c
// 地址: 0xcfb38c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg4) & 1) != 0)
    operator delete(arg5)

if ((zx.d(arg2) & 1) != 0)
    operator delete(arg3)

if (arg6 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&arg6[1])
        i = __stlxr(x9_1 - 1, &arg6[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*arg6 + 0x10))(arg6)
        std::__ndk1::__shared_weak_count::__release_weak()

void* x0_5

if (arg7 != 0)
    void* arg_58 = arg7
    operator delete(arg7)
    x0_5 = arg8
    
    if (x0_5 != 0)
    label_cfb468:
        void* arg_70 = x0_5
        operator delete(x0_5)
        sub_1101e04(arg1)
        noreturn
else
    x0_5 = arg8
    
    if (x0_5 != 0)
        goto label_cfb468
sub_1101e04(arg1)
noreturn

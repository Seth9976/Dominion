// 函数: sub_cfb3a4
// 地址: 0xcfb3a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg2) & 1) != 0)
    operator delete(arg3)

if (arg4 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&arg4[1])
        i = __stlxr(x9_1 - 1, &arg4[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*arg4 + 0x10))(arg4)
        std::__ndk1::__shared_weak_count::__release_weak()

void* x0_4

if (arg5 != 0)
    void* arg_58 = arg5
    operator delete(arg5)
    x0_4 = arg6
    
    if (x0_4 != 0)
    label_cfb468:
        void* arg_70 = x0_4
        operator delete(x0_4)
        sub_1101e04(arg1)
        noreturn
else
    x0_4 = arg6
    
    if (x0_4 != 0)
        goto label_cfb468
sub_1101e04(arg1)
noreturn

// 函数: sub_cfb404
// 地址: 0xcfb404
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&arg2[1])
        i = __stlxr(x9_1 - 1, &arg2[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*arg2 + 0x10))(arg2)
        std::__ndk1::__shared_weak_count::__release_weak()

void* x0_3

if (arg3 != 0)
    void* arg_58 = arg3
    operator delete(arg3)
    x0_3 = arg4
    
    if (x0_3 != 0)
    label_cfb468:
        void* arg_70 = x0_3
        operator delete(x0_3)
        sub_1101e04(arg1)
        noreturn
else
    x0_3 = arg4
    
    if (x0_3 != 0)
        goto label_cfb468
sub_1101e04(arg1)
noreturn

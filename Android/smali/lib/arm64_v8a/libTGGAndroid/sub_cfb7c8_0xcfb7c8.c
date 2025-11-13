// 函数: sub_cfb7c8
// 地址: 0xcfb7c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg4) & 1) == 0)
    if ((zx.d(arg2) & 1) != 0)
        goto label_cfb80c
    
    goto label_cfb7dc

operator delete(arg5)
int64_t* x20

if ((zx.d(arg2) & 1) == 0)
label_cfb7dc:
    x20 = arg6
    
    if (x20 != 0)
    label_cfb828:
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
label_cfb80c:
    operator delete(arg3)
    x20 = arg6
    
    if (x20 != 0)
        goto label_cfb828
sub_1101e04(arg1)
noreturn

// 函数: sub_cf8470
// 地址: 0xcf8470
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::mutex::~mutex()

if ((zx.d(*arg4) & 1) != 0)
    operator delete(*(arg2 + 0x48))
    
    if ((zx.d(*arg3) & 1) == 0)
        goto label_cf84b8
    
    goto label_cf8500

int64_t* x19

if ((zx.d(*arg3) & 1) != 0)
label_cf8500:
    operator delete(*(arg2 + 0x30))
    x19 = *(arg2 + 0x18)
    
    if (x19 != 0)
    label_cf851c:
        int64_t x9_1
        int32_t i
        
        do
            x9_1 = __ldaxr(&x19[1])
            i = __stlxr(x9_1 - 1, &x19[1])
        while (i != 0)
        
        if (x9_1 == 0)
            (*(*x19 + 0x10))(x19)
            std::__ndk1::__shared_weak_count::__release_weak()
else
label_cf84b8:
    x19 = *(arg2 + 0x18)
    
    if (x19 != 0)
        goto label_cf851c
sub_1101e04(arg1)
noreturn

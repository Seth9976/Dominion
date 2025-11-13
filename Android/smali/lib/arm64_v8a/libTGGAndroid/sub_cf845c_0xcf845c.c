// 函数: sub_cf845c
// 地址: 0xcf845c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg7) & 1) == 0)
    if ((zx.d(arg5) & 1) != 0)
        goto label_cf84d8
    
    goto label_cf84a4

operator delete(arg8)

if ((zx.d(arg5) & 1) != 0)
label_cf84d8:
    operator delete(arg6)
    std::__ndk1::mutex::~mutex()
    
    if ((zx.d(*arg4) & 1) == 0)
        goto label_cf84b4
    
    goto label_cf84f0

label_cf84a4:
std::__ndk1::mutex::~mutex()

if ((zx.d(*arg4) & 1) == 0)
label_cf84b4:
    
    if ((zx.d(*arg3) & 1) != 0)
        goto label_cf8500
    
    goto label_cf84b8

label_cf84f0:
operator delete(*(arg2 + 0x48))
int64_t* x19

if ((zx.d(*arg3) & 1) == 0)
label_cf84b8:
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
label_cf8500:
    operator delete(*(arg2 + 0x30))
    x19 = *(arg2 + 0x18)
    
    if (x19 != 0)
        goto label_cf851c
sub_1101e04(arg1)
noreturn

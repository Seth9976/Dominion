// 函数: sub_d3a32c
// 地址: 0xd3a32c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(*arg3) & 1) == 0)
    uint32_t x8 = zx.d(arg2[3].b)
    *arg2 = arg4 + 0x10
    
    if ((x8 & 1) != 0)
        goto label_d3a388
    
    goto label_d3a348

operator delete(arg2[0xa])
uint32_t x8_1 = zx.d(arg2[3].b)
*arg2 = arg4 + 0x10
int64_t* x19

if ((x8_1 & 1) == 0)
label_d3a348:
    x19 = arg2[2]
    
    if (x19 != 0)
    label_d3a3a4:
        int64_t x9_2
        int32_t i
        
        do
            x9_2 = __ldaxr(&x19[1])
            i = __stlxr(x9_2 - 1, &x19[1])
        while (i != 0)
        
        if (x9_2 == 0)
            (*(*x19 + 0x10))(x19)
            std::__ndk1::__shared_weak_count::__release_weak()
else
label_d3a388:
    operator delete(arg2[5])
    x19 = arg2[2]
    
    if (x19 != 0)
        goto label_d3a3a4
sub_1101e04(arg1)
noreturn

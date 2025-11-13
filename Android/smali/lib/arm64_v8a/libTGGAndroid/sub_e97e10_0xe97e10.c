// 函数: sub_e97e10
// 地址: 0xe97e10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_4 = *arg3

if (x8_4 != 0)
    *(arg5 + 0x10) = x8_4
    operator delete(x8_4)

*(arg2 + 0x10) = arg5

if (arg7 != 0)
    void* arg_18 = arg7
    operator delete(arg7)

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

int64_t arg_30 = arg4 + 0x10

if (arg8 != 0)
    void* arg_40 = arg8
    operator delete(arg8)

sub_1101e04(arg1)
noreturn

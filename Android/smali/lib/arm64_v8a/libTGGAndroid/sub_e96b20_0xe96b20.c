// 函数: sub_e96b20
// 地址: 0xe96b20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

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

int64_t x8_4
int32_t i_1

do
    x8_4 = __ldaxr(arg3)
    i_1 = __stlxr(x8_4 - 1, arg3)
while (i_1 != 0)

if (x8_4 == 0)
    (*(*arg2 + 0x10))(arg2)
    std::__ndk1::__shared_weak_count::__release_weak()

sub_1101e04(arg1)
noreturn

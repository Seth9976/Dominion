// 函数: sub_d34fd0
// 地址: 0xd34fd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::PointGFp::~PointGFp()
int64_t* x19 = *(arg2 + 0x10)

if (x19 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x19[1])
        i = __stlxr(x9_1 - 1, &x19[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x19 + 0x10))(x19)
        std::__ndk1::__shared_weak_count::__release_weak()

sub_1101e04(arg1)
noreturn

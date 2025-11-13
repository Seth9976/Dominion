// 函数: _ZN5Botan8DL_GroupC1EPKhmNS0_6FormatE
// 地址: 0xd1c068
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
int32_t entry_x3
int64_t result = Botan::DL_Group::BER_decode_DL_group(arg2, arg3, zx.q(entry_x3), 2)
int64_t var_30_1 = 0
int64_t* x20 = *(arg1 + 8)
int64_t var_30
*arg1 = var_30
int64_t var_28
*(arg1 + 8) = var_28

if (x20 != 0)
    int64_t x9_2
    int32_t i
    
    do
        x9_2 = __ldaxr(&x20[1])
        i = __stlxr(x9_2 - 1, &x20[1])
    while (i != 0)
    
    if (x9_2 == 0)
        (*(*x20 + 0x10))(x20)
        result = std::__ndk1::__shared_weak_count::__release_weak()

return result

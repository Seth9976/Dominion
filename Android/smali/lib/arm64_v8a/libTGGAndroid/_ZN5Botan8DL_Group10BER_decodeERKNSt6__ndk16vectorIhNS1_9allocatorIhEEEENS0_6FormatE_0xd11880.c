// 函数: _ZN5Botan8DL_Group10BER_decodeERKNSt6__ndk16vectorIhNS1_9allocatorIhEEEENS0_6FormatE
// 地址: 0xd11880
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* x0 = *arg2
int64_t entry_x2
int64_t result = Botan::DL_Group::BER_decode_DL_group(x0, *(arg2 + 8) - x0, entry_x2, 2)
int64_t var_30_1 = 0
int64_t* x19 = *(arg1 + 8)
int64_t var_30
*arg1 = var_30
int64_t var_28
*(arg1 + 8) = var_28

if (x19 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x19[1])
        i = __stlxr(x9_1 - 1, &x19[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x19 + 0x10))(x19)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result

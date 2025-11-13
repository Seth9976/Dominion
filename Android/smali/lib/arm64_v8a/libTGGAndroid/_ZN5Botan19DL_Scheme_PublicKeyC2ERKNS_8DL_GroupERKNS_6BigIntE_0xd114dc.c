// 函数: _ZN5Botan19DL_Scheme_PublicKeyC2ERKNS_8DL_GroupERKNS_6BigIntE
// 地址: 0xd114dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 8)
int64_t result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 8)
void* entry_x3
*(arg1 + 0x20) = *(entry_x3 + 0x18)
*(arg1 + 0x28) = *(entry_x3 + 0x20)
int64_t* entry_x2
*(arg1 + 0x30) = *entry_x2
int64_t x8_5 = entry_x2[1]
*(arg1 + 0x38) = x8_5

if (x8_5 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_5 + 8) + 1, x8_5 + 8)
    while (i != 0)

return result

// 函数: _ZNK5Botan19OneAndZeros_Padding11add_paddingERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEmm
// 地址: 0xdae434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg2
void* x9 = *(arg2 + 8)
int64_t entry_x3
int64_t x19 = entry_x3
uint64_t x21 = zx.q(x19.b - arg3.b)
int64_t x11 = x9 - x8
int64_t x10_1 = x11 + x21

if (x11 u< x10_1)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
    x8 = *arg2
    x9 = *(arg2 + 8)
else if (x11 u> x10_1)
    x9 = &x8[x10_1]
    *(arg2 + 8) = x9

if (x19 == 0)
    return 

void* x10_2 = x9 - x8
void* x9_1 = x10_2 - x21
void* x10_3 = x10_2 - x19

while (true)
    int64_t x12_1 = x10_3 ^ x9_1
    int32_t x14_3 = (((x12_1 - 1) & not.q(x12_1)) s>> 0x3f).d
    char x12_5 = ((x14_3.b & 0x80) | (*(x8 + x10_3) & (not.d(x14_3)).b))
        & (not.d((((((neg.q(x21) + x19) ^ x9_1) | x12_1) ^ x9_1) s>> 0x3f).d)).b
    int64_t temp0_1 = x19
    x19 -= 1
    *(x8 + x10_3) = x12_5
    
    if (temp0_1 == 1)
        break
    
    x8 = *arg2
    x10_3 += 1

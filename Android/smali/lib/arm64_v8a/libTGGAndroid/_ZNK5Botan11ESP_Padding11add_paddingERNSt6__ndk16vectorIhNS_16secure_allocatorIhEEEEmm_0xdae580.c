// 函数: _ZNK5Botan11ESP_Padding11add_paddingERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEmm
// 地址: 0xdae580
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x10 = *arg2
void* x8 = *(arg2 + 8)
int64_t entry_x3
uint64_t x20 = zx.q(entry_x3.b - arg3.b)
int64_t x11 = x8 - x10
int64_t x9_1 = x11 + x20

if (x11 u< x9_1)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
    x10 = *arg2
    x8 = *(arg2 + 8)
else if (x11 u> x9_1)
    x8 = &x10[x9_1]
    *(arg2 + 8) = x8

if (entry_x3 == 0)
    return 

void* x8_1 = x8 - x10
void* x9_2 = x8_1 - x20
void* x12_1 = x8_1 - entry_x3
int32_t x11_4 = (((((x12_1 - x9_2) ^ x12_1) | (x12_1 ^ x9_2)) ^ x12_1) s>> 0x3f).d
*(x10 + x12_1) = (*(x10 + x12_1) & x11_4.b) | ((not.d(x11_4)).b & 1)

if (x12_1 + 1 == x8_1)
    return 

int32_t x12_2 = 1
int64_t i_1 = 1 - entry_x3
int32_t x13_5 = 2
int64_t i

do
    void* x14_5 = x8_1 + i_1
    x12_2 = (x12_2 & x11_4) | (x13_5 & not.d(x11_4))
    void* x13_8 = *arg2 + x8_1
    x11_4 = (((((x20 + i_1) ^ x14_5) | (x14_5 ^ x9_2)) ^ x14_5) s>> 0x3f).d
    *(x13_8 + i_1) = (*(x13_8 + i_1) & x11_4.b) | (x12_2.b & (not.d(x11_4)).b)
    i = i_1
    i_1 += 1
    x13_5 = x12_2 + 1
while (i u< -1)

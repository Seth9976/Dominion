// 函数: _ZNK5Botan13PKCS7_Padding11add_paddingERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEmm
// 地址: 0xdae03c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg2
void* x9 = *(arg2 + 8)
int64_t entry_x3
char x22 = entry_x3.b - arg3.b
uint64_t x20 = zx.q(x22)
int64_t x11 = x9 - x8
int64_t x10 = x11 + x20

if (x11 u< x10)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
    x8 = *arg2
    x9 = *(arg2 + 8)
else if (x11 u> x10)
    x9 = &x8[x10]
    *(arg2 + 8) = x9

if (entry_x3 == 0)
    return 

void* x9_1 = x9 - x8
void* x10_1 = x9_1 - x20
void* x11_1 = x9_1 - entry_x3
int32_t x12_4 = (((((x11_1 - x10_1) ^ x11_1) | (x11_1 ^ x10_1)) ^ x11_1) s>> 0x3f).d
*(x8 + x11_1) = (*(x8 + x11_1) & x12_4.b) | (x22 & (not.d(x12_4)).b)

if (x11_1 + 1 == x9_1)
    return 

int64_t i_1 = 1 - entry_x3
int64_t i

do
    void* x11_2 = x9_1 + i_1
    void* x12_8 = *arg2 + x9_1
    int32_t x11_4 = (((((x20 + i_1) ^ x11_2) | (x11_2 ^ x10_1)) ^ x11_2) s>> 0x3f).d
    *(x12_8 + i_1) = (*(x12_8 + i_1) & x11_4.b) | (x22 & (not.d(x11_4)).b)
    i = i_1
    i_1 += 1
while (i u< -1)

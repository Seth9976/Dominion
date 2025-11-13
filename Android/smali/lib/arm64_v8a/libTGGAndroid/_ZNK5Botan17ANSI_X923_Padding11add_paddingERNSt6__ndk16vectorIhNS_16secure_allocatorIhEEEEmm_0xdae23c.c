// 函数: _ZNK5Botan17ANSI_X923_Padding11add_paddingERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEmm
// 地址: 0xdae23c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg2
void* x9 = *(arg2 + 8)
int64_t entry_x3
char x22 = entry_x3.b - arg3.b
uint64_t x21 = zx.q(x22)
int64_t x11 = x9 - x8
int64_t x10 = x11 + x21

if (x11 u< x10)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
    x8 = *arg2
    x9 = *(arg2 + 8)
else if (x11 u> x10)
    x9 = &x8[x10]
    *(arg2 + 8) = x9

int64_t x10_1 = x9 - x8
int64_t x11_1 = x10_1 - entry_x3

if (x11_1 != x10_1 - 1)
    int64_t x9_1 = x10_1 - x21
    x8[x11_1] &= (((((x11_1 - x9_1) ^ x11_1) | (x11_1 ^ x9_1)) ^ x11_1) s>> 0x3f).b
    
    if (x11_1 + 1 != x10_1 - 1)
        int64_t i = neg.q(entry_x3)
        
        do
            int64_t x12_1 = x10_1 + 1 + i
            char* x13_4 = *arg2 + x10_1 + 1
            x13_4[i] &= (((((x21 + 1 + i) ^ x12_1) | (x12_1 ^ x9_1)) ^ x12_1) s>> 0x3f).b
            i += 1
        while (i != -2)
    
    x8 = *arg2
    x9 = *(arg2 + 8)

*(x8 + x9 + not.q(x8)) = x22

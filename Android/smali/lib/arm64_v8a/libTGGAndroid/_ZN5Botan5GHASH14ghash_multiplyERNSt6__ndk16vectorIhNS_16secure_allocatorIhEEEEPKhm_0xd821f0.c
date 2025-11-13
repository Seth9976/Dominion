// 函数: _ZN5Botan5GHASH14ghash_multiplyERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEPKhm
// 地址: 0xd821f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg2
uint64_t x11 = x8[1]
uint64_t x10 = _byteswap(*x8)
uint64_t x9_1 = _byteswap(x11)
int64_t entry_x3

if (entry_x3 != 0)
    void* x11_1 = *(arg1 + 0x68)
    int64_t x12_1 = 0
    
    do
        uint64_t x15_2 = *(arg3 + (8 | (0xfffffffffffffff & x12_1) << 4))
        int64_t i = 0
        uint64_t x14_4 = _byteswap(*(arg3 + (x12_1 << 4))) ^ x10
        uint64_t x15_3 = _byteswap(x15_2) ^ x9_1
        x9_1 = 0
        x10 = 0
        
        do
            int64_t* x17_1 = x11_1 + i
            int64_t x16_1 = x14_4 s>> 0x3f
            i += 0x20
            int64_t x1_1 = x15_3 s>> 0x3f
            x14_4 <<= 1
            x15_3 <<= 1
            x10 = (*x17_1 & x16_1) ^ x10 ^ (x17_1[2] & x1_1)
            x9_1 = (x17_1[1] & x16_1) ^ x9_1 ^ (x17_1[3] & x1_1)
        while (i != 0x800)
        
        x12_1 += 1
    while (x12_1 != entry_x3)

uint64_t x10_3 = _byteswap(x10)
uint64_t x9_3 = _byteswap(x9_1)
*x8 = x10_3
x8[1] = x9_3

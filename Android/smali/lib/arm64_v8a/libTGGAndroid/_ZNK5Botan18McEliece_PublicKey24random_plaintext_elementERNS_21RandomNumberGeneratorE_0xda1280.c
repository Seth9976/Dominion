// 函数: _ZNK5Botan18McEliece_PublicKey24random_plaintext_elementERNS_21RandomNumberGeneratorE
// 地址: 0xda1280
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 0x28)
uint64_t x8_1

if ((x9 & 0xffffffff80000000) != 0)
    x8_1 = 0x40
else if (x9 u< 2)
    x8_1 = 0
else
    int32_t x8 = 0
    int64_t x10_1 = 1
    
    do
        x10_1 <<= 1
        x8 += 1
    while (x10_1 u< x9)
    
    x8_1 = zx.q(x8.b)

int64_t x10_2 = *(arg1 + 0x20)
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t x23 = x9 - x10_2 * x8_1
uint64_t x22 = (x23 + 7) u>> 3
int64_t x21
int64_t x24

if (x22 == 0)
    x24 = 0
    x21 = 0
else
    int64_t x0_1 = Botan::allocate_memory(x22, 1)
    x24 = x0_1 + x22
    x21 = x0_1
    *entry_x8 = x0_1
    entry_x8[2] = x24
    memset(x0_1, 0, x22)
    entry_x8[1] = x24

void* x22_1 = x24 - x21
int64_t* entry_x1
int64_t result = (*(*entry_x1 + 0x10))(entry_x1, x21, x22_1)
int32_t x8_5 = x23.d & 7

if (x8_5 != 0)
    void* x9_1 = x22_1 + x21
    *(x9_1 - 1) &= (not.d(0xffffffff << x8_5)).b

return result

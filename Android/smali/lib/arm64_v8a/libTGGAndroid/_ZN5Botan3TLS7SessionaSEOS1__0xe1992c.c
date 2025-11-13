// 函数: _ZN5Botan3TLS7SessionaSEOS1_
// 地址: 0xe1992c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
*arg1 = *entry_x1
void* x0 = *(arg1 + 8)

if (x0 != 0)
    *(arg1 + 0x10) = x0
    operator delete(x0)
    __builtin_memset(arg1 + 8, 0, 0x18)

*(arg1 + 8) = entry_x1[1]
*(arg1 + 0x10) = entry_x1[2]
*(arg1 + 0x18) = entry_x1[3]
__builtin_memset(&entry_x1[1], 0, 0x18)
void* x0_1 = *(arg1 + 0x20)

if (x0_1 != 0)
    *(arg1 + 0x28) = x0_1
    operator delete(x0_1)
    __builtin_memset(arg1 + 0x20, 0, 0x18)

*(arg1 + 0x20) = entry_x1[4]
*(arg1 + 0x28) = entry_x1[5]
*(arg1 + 0x30) = entry_x1[6]
__builtin_memset(&entry_x1[4], 0, 0x18)
void* x0_2 = *(arg1 + 0x38)

if (x0_2 != 0)
    int64_t x8_7 = *(arg1 + 0x48)
    *(arg1 + 0x40) = x0_2
    Botan::deallocate_memory(x0_2, x8_7 - x0_2, 1)
    __builtin_memset(arg1 + 0x38, 0, 0x18)

*(arg1 + 0x38) = entry_x1[7]
*(arg1 + 0x40) = entry_x1[8]
*(arg1 + 0x48) = entry_x1[9]
__builtin_memset(&entry_x1[7], 0, 0x18)
int64_t x8_11 = entry_x1[0xa]
void* x24 = *(arg1 + 0x60)
*(arg1 + 0x58) = entry_x1[0xb].d
*(arg1 + 0x50) = x8_11

if (x24 != 0)
    int64_t* x21_5 = *(arg1 + 0x68)
    void* x0_4
    
    if (x21_5 == x24)
        x0_4 = x24
    else
        do
            x21_5 = &x21_5[-0x11]
            (*(*x21_5 + 0x10))(x21_5)
        while (x24 != x21_5)
        
        x0_4 = *(arg1 + 0x60)
    
    *(arg1 + 0x68) = x24
    operator delete(x0_4)
    __builtin_memset(arg1 + 0x60, 0, 0x18)

*(arg1 + 0x60) = entry_x1[0xc]
*(arg1 + 0x68) = entry_x1[0xd]
*(arg1 + 0x70) = entry_x1[0xe]
__builtin_memset(&entry_x1[0xc], 0, 0x18)

if ((zx.d(*(arg1 + 0x78)) & 1) != 0)
    operator delete(*(arg1 + 0x88))

int128_t v0 = *(entry_x1 + 0x78)
*(arg1 + 0x88) = entry_x1[0x11]
*(arg1 + 0x78) = v0
entry_x1[0xf].w = 0

if ((zx.d(*(arg1 + 0x90)) & 1) != 0)
    operator delete(*(arg1 + 0xa0))

v0 = *(entry_x1 + 0x90)
*(arg1 + 0xa0) = entry_x1[0x14]
*(arg1 + 0x90) = v0
entry_x1[0x12].w = 0
uint32_t x9_2 = zx.d(*(arg1 + 0xb0))
*(arg1 + 0xa8) = entry_x1[0x15].w

if ((x9_2 & 1) != 0)
    operator delete(*(arg1 + 0xc0))

v0 = *(entry_x1 + 0xb0)
*(arg1 + 0xc0) = entry_x1[0x18]
*(arg1 + 0xb0) = v0
entry_x1[0x16].w = 0
return arg1

// 函数: _ZN6SoLoud6Soloud17postinit_internalEjjjj
// 地址: 0x106f614
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1
int32_t entry_x4
*(arg1 + 0x20a0) = entry_x4
*(arg1 + 0x209c) = arg2
*(arg1 + 0x20b0) = arg3
*(arg1 + 0x20b8) = 0x3f800000
void* x0 = *(arg1 + 0x40)
int32_t x8 = (arg3 + 0xf) & 0xfffffff0
int32_t x8_1

x8_1 = x8 u> 0x1000 ? x8 : 0x1000

int32_t x22 = x8_1 << 3
*(x19 + 0x50) = x8_1

if (x0 != 0)
    operator delete[](x0)

*(arg1 + 0x38) = 0
*(arg1 + 0x40) = 0
*(x19 + 0x48) = x22
int64_t x0_2 = operator new[](zx.q(x22) << 2)
void* x0_3 = *(x19 + 0x60)
int32_t x21_1 = *(x19 + 0x50) << 3
*(x19 + 0x38) = x0_2
*(x19 + 0x40) = x0_2

if (x0_3 != 0)
    operator delete[](x0_3)

*(x19 + 0x58) = 0
*(x19 + 0x60) = 0
*(x19 + 0x68) = x21_1
int64_t x0_5 = operator new[](zx.q(x21_1) << 2)
uint64_t x21_2 = zx.q(*(x19 + 0x30))
*(x19 + 0x58) = x0_5
*(x19 + 0x60) = x0_5
*(x19 + 0x70) = operator new[](zx.q(x21_2.d << 1) << 3)
int64_t x0_9 = operator new[](x21_2 << 3)
void* x0_10 = *(x19 + 0x80)
int32_t x21_3 = x21_2.d << 0xd
*(x19 + 0x90) = x0_9

if (x0_10 != 0)
    operator delete[](x0_10)

*(x19 + 0x78) = 0
*(x19 + 0x80) = 0
*(x19 + 0x88) = x21_3
int64_t result = operator new[](zx.q(x21_3) << 2)
int32_t x8_8 = *(x19 + 0x30)
*(x19 + 0x78) = result
*(x19 + 0x80) = result

if ((x8_8 & 0x7fffffff) != 0)
    **(x19 + 0x70) = result
    x8_8 = *(x19 + 0x30)
    
    if ((x8_8 & 0x7fffffff) != 0)
        int64_t i = 1
        int64_t x10_1 = 0x1000
        
        do
            int64_t x12_1 = x10_1 & 0xfffff000
            x10_1 += 0x1000
            *(*(x19 + 0x70) + (i << 3)) = *(x19 + 0x78) + (x12_1 << 2)
            x8_8 = *(x19 + 0x30)
            i += 1
        while (i u< zx.q(x8_8 << 1))

if (x8_8 != 0)
    int64_t i_1 = 0
    
    do
        *(*(x19 + 0x90) + (i_1 << 3)) = 0
        i_1 += 1
    while (i_1 u< zx.q(*(x19 + 0x30)))

int32_t x8_12 = *(x19 + 0x20a0)
*(x19 + 0x20b4) = arg4
uint64_t x8_13 = zx.q(x8_12 - 1)
__builtin_strncpy(x19 + 0x20bc, "33s?", 4)

if (x8_13.d u<= 7)
    switch (x8_13)
        case 0
            *(x19 + 0x2ddc) = 0
            *(x19 + 0x2de4) = 0x3f800000
        case 1
            __builtin_memcpy(x19 + 0x2ddc, 
                "\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\xc0\x00\x00\x00\x00\x00\x"
            "00\x80\x3f", 
                0x18)
        case 3
            __builtin_memcpy(x19 + 0x2ddc, 
                "\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\xc0\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x80\xbf\x00\x00\x00\xc0\x00\x00\x00"
            "00\x00\x00\x80\xbf", 
                0x30)
        case 5
            __builtin_memcpy(x19 + 0x2ddc, 
                "\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\xc0\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
            "00\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x80\xbf\x00\x00\x00\xc0\x00"
            "00\x00\x00\x00\x00\x80\xbf", 
                0x48)
        case 7
            __builtin_memcpy(x19 + 0x2ddc, 
                "\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\xc0\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
            "00\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xc0\x00"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x80\xbf\x00\x00\x00"
            "c0\x00\x00\x00\x00\x00\x00\x80\xbf", 
                0x60)

return result

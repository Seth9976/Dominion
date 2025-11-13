// 函数: _ZN5Botan8CCM_Mode3incERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xcf2adc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x10_1 = *entry_x1
int64_t x8_1 = entry_x1[1]
void* x11 = x8_1 - x10_1

if (x8_1 == x10_1)
    return 

int64_t x8 = 0
int64_t x9_1 = -1

do
    char* x10 = x10_1 + x11
    int32_t x11_2 = zx.d(x10[x9_1]) + 1
    x10[x9_1] = x11_2.b
    
    if ((x11_2 & 0x100) == 0)
        break
    
    x10_1 = *entry_x1
    x8 += 1
    x9_1 -= 1
    x11 = entry_x1[1] - x10_1
while (x8 != x11)

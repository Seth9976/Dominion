// 函数: _ZN5Botan6CTR_BE5clearEv
// 地址: 0xd08f94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
(*(**(entry_x0 + 8) + 0x10))()
int64_t x0_1 = *(entry_x0 + 0x40)
int64_t x8_2 = *(entry_x0 + 0x48)

if (x8_2 != x0_1)
    memset(x0_1, 0, x8_2 - x0_1)

int64_t x0_2 = *(entry_x0 + 0x28)
int64_t x8_3 = *(entry_x0 + 0x30)

if (x8_3 != x0_2)
    memset(x0_2, 0, x8_3 - x0_2)

void* result = *(entry_x0 + 0x58)
int64_t x8_4 = *(entry_x0 + 0x60)

if (x8_4 != result)
    memset(result, 0, x8_4 - result)
    result = *(entry_x0 + 0x58)

int64_t x8_5 = *(entry_x0 + 0x68)
*(entry_x0 + 0x60) = result

if (result != x8_5)
    __builtin_memset(entry_x0 + 0x58, 0, 0x18)
    
    if (result != 0)
        result = operator delete(result)

*(entry_x0 + 0x70) = 0
return result

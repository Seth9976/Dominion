// 函数: _ZNSt6__ndk112__deque_baseIPhNS_9allocatorIS1_EEED2Ev
// 地址: 0xdad0c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t* x20 = entry_x0[1]
int64_t x21 = entry_x0[2]
entry_x0[5] = 0
int64_t i = (x21 - x20) s>> 3

if (i u>= 3)
    do
        operator delete(*x20)
        x21 = entry_x0[2]
        x20 = entry_x0[1] + 8
        i = (x21 - x20) s>> 3
        entry_x0[1] = x20
    while (i u> 2)

if (i == 1)
    entry_x0[4] = 0x100
else if (i == 2)
    entry_x0[4] = 0x200

if (x20 != x21)
    do
        void* x0_1 = *x20
        x20 = &x20[1]
        operator delete(x0_1)
    while (x21 != x20)
    
    int64_t x9_1 = entry_x0[1]
    int64_t x8_4 = entry_x0[2]
    
    if (x8_4 != x9_1)
        entry_x0[2] = x8_4 + ((-1 ^ (x8_4 - x9_1 - 8) u>> 3) << 3)

void* result = *entry_x0

if (result == 0)
    return result

return operator delete(result) __tailcall

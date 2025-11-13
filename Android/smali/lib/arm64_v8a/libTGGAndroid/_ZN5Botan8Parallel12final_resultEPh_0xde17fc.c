// 函数: _ZN5Botan8Parallel12final_resultEPh
// 地址: 0xde17fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *(arg1 + 8)
int64_t x21 = *(arg1 + 0x10)

if (x20 == x21)
    return 

void* x22_1 = nullptr

do
    int64_t* x0 = *x20
    void* entry_x1
    (*(*x0 + 0x20))(x0, entry_x1 + x22_1)
    int64_t* x0_1 = *x20
    x20 = &x20[1]
    x22_1 += (**x0_1)()
while (x21 != x20)

// 函数: _ZNSt6__ndk16vectorIN5Botan8PointGFpENS_9allocatorIS2_EEE7reserveEm
// 地址: 0xd34aa4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = *arg1
int64_t entry_x1

if (((*(arg1 + 0x10) - x19) s>> 3) * -0xf0f0f0f0f0f0f0f u>= entry_x1)
    return 

if (entry_x1 u>= 0x1e1e1e1e1e1e1e2)
    sub_ef2a0c()
    noreturn

int64_t x28_1 = *(arg1 + 8)
int64_t x22_1 = entry_x1 * 0x88
uint64_t x20_1 = arg1
arg1 = operator new(x22_1)
void* x8_5 = x28_1 - x19
void* x25_1 = arg1 + x8_5
int64_t x24_1 = arg1 + x22_1

if (x28_1 == x19)
    *x20_1 = x25_1
    *(x20_1 + 8) = x25_1
    *(x20_1 + 0x10) = x24_1
    
    if (x19 != 0)
        return operator delete(x19) __tailcall
    
    return 

int64_t x26_1 = (x8_5 s>> 3) * -0xf0f0f0f0f0f0f0f
int64_t i = 0

do
    Botan::PointGFp::PointGFp(arg1 + x26_1 * 0x88 + i - 0x88)
    i -= 0x88
while (x19 - x28_1 != i)

x19 = *x20_1
int64_t x22_3 = *(x20_1 + 8)
*x20_1 = arg1 + x26_1 * 0x88 + i
*(x20_1 + 8) = x25_1
*(x20_1 + 0x10) = x24_1

if (x22_3 != x19)
    do
        x22_3 -= 0x88
        Botan::PointGFp::~PointGFp()
    while (x19 != x22_3)

if (x19 != 0)
    return operator delete(x19) __tailcall

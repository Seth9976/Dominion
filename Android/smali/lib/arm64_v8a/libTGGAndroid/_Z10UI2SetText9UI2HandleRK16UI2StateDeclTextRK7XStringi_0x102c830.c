// 函数: _Z10UI2SetText9UI2HandleRK16UI2StateDeclTextRK7XStringi
// 地址: 0x102c830
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = zx.q(arg1)
int64_t x23 = *gUI2
void* i_1 = x23 + mulu.dp.d(x24.d, 0x19a8)
void* x8 = *(i_1 + 0x1788)

if (x8 != 0 && *(x23 + x24 * 0x19a8 + 0x10) != *(x8 + 0x10))
    void* x10_2 = x23 + x24 * 0x19a8
    int64_t x11_2 = *(x10_2 + 0x1660)
    *(x10_2 + 0x17a0) = 0
    *(x10_2 + 0x1670) = x11_2
    *(x23 + x24 * 0x19a8 + 0x10) = *(x8 + 0x10)

void* x9_3 = x23 + x24 * 0x19a8
uint64_t i_3 = zx.q(*(x9_3 + 0x17a0))
UI2StateDeclText** x0 = *(x9_3 + 0x1798)
UI2StateDeclText** x25_1

if (i_3.d s>= 1)
    x25_1 = x0
    uint64_t i_2 = i_3
    uint64_t i
    
    do
        if (x25_1[1].d == arg4 && *x25_1 == arg2)
            goto label_102c958
        
        i = i_2
        i_2 -= 1
        x25_1 = &x25_1[6]
    while (i != 1)

if (*(x23 + x24 * 0x19a8 + 0x17a4) == 0)
    x0 = XPooledCalloc(0x3000)
    i_3 = 0
    *(x9_3 + 0x1798) = x0
    *(x9_3 + 0x17a0) = 0x10000000000

*(x0 + muls.dp.d(i_3.d, 0x30) + 8) = 0
int64_t x8_3 = sx.q(*(x9_3 + 0x17a0))
*(x9_3 + 0x17a0) = x8_3.d + 1
x25_1 = *(x9_3 + 0x1798) + x8_3 * 0x30
label_102c958:
x25_1[1].d = arg4
*(x25_1 + 0xc) = 3
*x25_1 = arg2
XString::operator char const*()
int64_t result
int64_t x1_1
result, x1_1 = StringLinearAlloc::Alloc(x23 + x24 * 0x19a8 + 0x1660)
x25_1[2] = result
x25_1[3] = x1_1
x25_1[4].d = 0

do
    *(i_1 + 0x1378) = 2
    i_1 = *(i_1 + 0x17d0)
while (i_1 != 0)

return result

// 函数: _Z13UI2ClearFocus9UI2Handlebb
// 地址: 0x1032e94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d == 0)
    *(gUI2 + 0x50) = 0
    return 

int32_t x9_1 = arg1.d & 0xffff

if (x9_1 u>= *(gUI2 + 8))
    *(gUI2 + 0x50) = 0
    return 

int64_t x23_1 = *gUI2

if (*(x23_1 + mulu.dp.d(x9_1, 0x19a8) + 0x19a0) != arg1.d)
    *(gUI2 + 0x50) = 0
    return 

int32_t x25_1 = *(gUI2 + 0x50)
*(gUI2 + 0x50) = 0
uint64_t x24_1 = zx.q(x25_1.w)
void* i = x23_1 + x24_1 * 0x19a8

if (*(i + 0x167c) != 3 || zx.d(*(x23_1 + x24_1 * 0x19a8 + 0x15b4)) == 0)
    return 

XString::XString()
int32_t var_60 = x25_1
int64_t x0 = *(x23_1 + x24_1 * 0x19a8 + 0x15d8)

if (x0 == 0)
    x0 = XString::GetString()

int64_t var_58_1 = x0
void var_50
XString::operator=(&var_50)
void* x8_7 = x23_1 + x24_1 * 0x19a8
char var_44_1 = arg2 & 1
int32_t var_48_1 = *(x8_7 + 0x1740)
*(x8_7 + 0x1859) = 0

if ((arg3.d & 1) != 0)
    do
        int64_t x8_8 = *(i + 0x1998)
        
        if (x8_8 != 0)
            x8_8(&var_60)
            break
        
        i = *(i + 0x17d0)
    while (i != 0)

XString::~XString()

// 函数: _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE6sentryD1Ev
// 地址: 0x10ad998
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x8 = *(entry_x0 + 8)
void* x8_1 = x8 + *(*x8 - 0x18)

if (*(x8_1 + 0x28) == 0 || *(x8_1 + 0x20) != 0 || (zx.d(*(x8_1 + 9)) & 0x20) == 0)
    return 

void* x19_1 = entry_x0

if ((std::uncaught_exception().d & 1) != 0)
    return 

int64_t* x8_3 = *(x19_1 + 8)

if ((*(**(x8_3 + *(*x8_3 - 0x18) + 0x28) + 0x30))().d != 0xffffffff)
    return 

int64_t* x8_7 = *(x19_1 + 8)
void* x8_8 = x8_7 + *(*x8_7 - 0x18)
int32_t x9_9 = *(x8_8 + 0x20) | 1
bool cond:0_1 = (*(x8_8 + 0x24) & x9_9) != 0
*(x8_8 + 0x20) = x9_9

if (cond:0_1)
    sub_10b053c()
    noreturn

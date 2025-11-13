// 函数: _Z19AbilityCanMultiplayR7DomGame9AbilityID
// 地址: 0xb0ebf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x1 = arg2 & 0xffffffff

if ((arg2 & 0x30) != 0)
    return zx.q(zx.d(*(AbilityGetStatic(arg1, x1) + 0xb4)) u>> 1) & 1

void* x0_2 = AbilityGetRegistered(arg1, x1)
int32_t x8_1 = *(x0_2 + 0x4c)

if (x8_1 == 0)
    return 0

if (x8_1 == 2)
    return zx.q(zx.d(*(x0_2 + 0x70)) u>> 1) & 1

pthread_kill(pthread_self(), 6)
DomGfx** x0_6
int32_t x1_1
int32_t* x2
x0_6, x1_1, x2 = XNoReturn()
return CoallesceSameCards(x0_6, x1_1, x2) __tailcall

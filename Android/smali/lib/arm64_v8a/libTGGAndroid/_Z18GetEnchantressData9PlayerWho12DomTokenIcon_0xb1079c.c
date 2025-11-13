// 函数: _Z18GetEnchantressData9PlayerWho12DomTokenIcon
// 地址: 0xb1079c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* x8_1)()

if (arg1 == 0xffffffff)
    x8_1 = gDomClient + 0x48
else
    x8_1 = gDomClient + 0x48 + muls.dp.d(arg1, 0x4d48)

if (arg2 == 0xe)
    return x8_1 + 0x4d38

if (arg2 == 9)
    return x8_1 + 0x4d30

if (arg2 == 1)
    return x8_1 + 0x4d28

int64_t lr
int64_t var_10 = lr
pthread_kill(pthread_self(), 6)
int64_t x0_4
int64_t x1_3
bool x2
x0_4, x1_3, x2 = XNoReturn()
return EnchantressAdd(x0_4, x1_3, x2) __tailcall

// 函数: _Z18ContrabandedRemove9PlayerWho11DomCardEnum
// 地址: 0xb10af8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* x8_1)()

if (arg1.d == 0xffffffff)
    x8_1 = gDomClient + 0x48
else
    x8_1 = gDomClient + 0x48 + muls.dp.d(arg1.d, 0x4d48)

int64_t (* x9_1)() = x8_1 + 0x4d20
uint64_t i_2 = zx.q(*x9_1)
int64_t (* x11_1)()

if (i_2.d s>= 1)
    x11_1 = x8_1 + 0x40a0
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        if (*x11_1 == arg2)
            goto label_b10b68
        
        i = i_1
        i_1 -= 1
        x11_1 += 4
    while (i != 1)

pthread_kill(pthread_self(), 6)
arg1, x8_1, x9_1, i_2, x11_1 = XNoReturn()
label_b10b68:
*x9_1 = i_2.d - 1
*x11_1 = *(x8_1 + ((sx.q(i_2.d) - 1) << 2) + 0x40a0)

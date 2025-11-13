// 函数: _ZNSt6__ndk114__num_put_base14__format_floatEPcPKcj
// 地址: 0x10b95ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()

if ((arg3 & 0x800) != 0)
    *arg1 = 0x2b
    arg1 = &arg1[1]

if ((arg3 & 0x400) != 0)
    *arg1 = 0x23
    arg1 = &arg1[1]

int32_t x8 = arg3 & 0x104

if (x8 != 0x104)
    *arg1 = 0x2a2e
    arg1 = &arg1[2]

uint32_t i = zx.d(*arg2)

if (i != 0)
    void* x10_1 = &arg2[1]
    
    do
        *arg1 = i.b
        arg1 = &arg1[1]
        i = zx.d(*x10_1)
        x10_1 += 1
    while (i != 0)

char x9
char x10_2
bool cond:0

if (x8 == 0x100)
    cond:0 = (arg3 & 0x4000) == 0
    x9 = 0x45
    x10_2 = 0x65
else if (x8 == 4)
    cond:0 = (arg3 & 0x4000) == 0
    x9 = 0x46
    x10_2 = 0x66
else if (x8 != 0x104)
    cond:0 = (arg3 & 0x4000) == 0
    x9 = 0x47
    x10_2 = 0x67
else
    cond:0 = (arg3 & 0x4000) == 0
    x9 = 0x41
    x10_2 = 0x61

char x9_1

x9_1 = cond:0 ? x10_2 : x9

*arg1 = x9_1
return zx.q(x8 != 0x104 ? 1 : 0)

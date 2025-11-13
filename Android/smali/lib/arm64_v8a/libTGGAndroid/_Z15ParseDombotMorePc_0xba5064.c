// 函数: _Z15ParseDombotMorePc
// 地址: 0xba5064
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x19 = arg1
char* x0 = strchr(arg1, 0x2f)

if (x0 != 0)
    *x0 = 0
    trim(x19, 0x20)
    x19 = &x0[1]

char* x0_3 = strchr(x19, 0x28)

if (x0_3 == 0)
    return &data_793a18

void* x0_5 = strchr(&x0_3[1], 0x28)
int64_t x8_1

if (x0_5 == 0)
    x8_1 = 2
else
    x0_3[2] = *(x0_5 + 1)
    x8_1 = 3

x0_3[x8_1] = 0
return &x0_3[1]

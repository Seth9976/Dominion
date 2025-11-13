// 函数: _Z8DomOKSetR13DomOKTypeEnumR14DomOKStateEnumRiS_i
// 地址: 0xb22564
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 == 0)
    *arg2 = 0
    return 

*arg1 = arg4
*arg3 = arg5
*arg2 = 1

if (*(GetClient() + 0x5068) != 1)
    return 

int64_t var_18
void* x0 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18)
int64_t x9_1 = sx.q(*(gDomClient + 0x205cc))

if (x9_1.d s>= x0.d)
    return 

int64_t x10_1 = var_18

if (x10_1 == 0)
    return 

uint64_t x11_3 = zx.q(*(x10_1 + x9_1 * 0xb0 + 0x1c) - 1)

if (x11_3.d u> 0x18)
    *arg2 = 3
    return 

switch (x11_3)
    case 1, 2, 3, 4, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x14, 0x16, 0x17
        *arg2 = 3
    case 7, 8, 9
        if (*arg1 != 0xb)
            *arg2 = 3
    case 0x12, 0x13
        if (*(gDomClient + 0x20578) != *(gDomClient + 0x20580))
            *arg2 = 3
    case 0x15
        if (*arg1 != *(x10_1 + x9_1 * 0xb0 + 0x24))
            *arg2 = 3

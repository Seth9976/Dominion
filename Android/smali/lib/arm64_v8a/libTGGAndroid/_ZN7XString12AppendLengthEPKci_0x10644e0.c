// 函数: _ZN7XString12AppendLengthEPKci
// 地址: 0x10644e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x2

if (entry_x2 == 0 || zx.d(*arg2) == 0)
    return 

char* x8_2 = *arg1
void* x8_3
int32_t x22_1

if (x8_2 == 0 || zx.d(*x8_2) == 0)
    int64_t* x0_2 = XPooledMalloc(entry_x2 + 0x11)
    x8_3 = &x0_2[2]
    x22_1 = 0
    x0_2[1].d = entry_x2
    *(x0_2 + 0xc) = entry_x2 + 1
    *x0_2 = 0x1fafafafa
    *arg1 = x8_3
else
    x22_1 = *(x8_2 - 8)
    sub_10648a8(arg1, x22_1 + entry_x2, 1)
    x8_3 = *arg1

int64_t x22_2 = sx.q(x22_1)
int64_t x21_2 = sx.q(entry_x2)
memcpy(x8_3 + x22_2, arg2, x21_2)
*(*arg1 + x22_2 + x21_2) = 0

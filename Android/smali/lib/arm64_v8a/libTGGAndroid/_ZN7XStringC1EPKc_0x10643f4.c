// 函数: _ZN7XStringC1EPKc
// 地址: 0x10643f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1

if (zx.d(*entry_x1) == 0)
    *arg1 = &data_793a18
    return 

int32_t x0_1 = strlen(entry_x1)
int64_t* x0_3
int128_t v0
x0_3, v0 = XPooledMalloc(x0_1 + 0x11)
v0.q = 0x1fafafafa
x0_3[1].d = x0_1
*(x0_3 + 0xc) = x0_1 + 1
*x0_3 = 0x1fafafafa
*arg1 = &x0_3[2]
return strcpy(&x0_3[2], entry_x1, v0) __tailcall

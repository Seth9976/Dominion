// 函数: _Z19AttachmentAppendOneP12AttachmentID
// 地址: 0xf69a1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = *arg1
int64_t* x9 = *(*gpGameData + 0x28)
uint64_t x8_1 = zx.q(x9[1].d)

if (i != 0)
    int32_t x13_1 = i & 0xffff
    
    if (x13_1 u< x8_1.d)
        int64_t x11_1 = *x9
        
        while (*(x11_1 + mulu.dp.d(x13_1, 0x34) + 0x30) == i)
            arg1 = x11_1 + zx.q(x13_1) * 0x34 + 0xc
            i = *arg1
            
            if (i == 0)
                break
            
            x13_1 = i & 0xffff
            
            if (x13_1 u>= x8_1.d)
                break

uint64_t x10_1 = zx.q(x9[2].d)
int64_t x11_2
int32_t x12

if (x10_1.d != x8_1.d)
    x11_2 = *x9
    x12 = *(x11_2 + x10_1 * 0x34 + 0x30)
    x8_1 = x10_1
else
    x11_2 = *x9
    x12 = x8_1.d + 1
    x9[1].d = x12

x9[2].d = x12
int128_t v0
v0.q = 0
v0:8.q = 0
void* result = x11_2 + x8_1 * 0x34
__builtin_memset(result, 0, 0x30)
*(result + 0x30) = x10_1.d | x9[3].d << 0x10
int32_t x10_3 = x9[3].d
int32_t x10_4

if (x10_3 == 0xffff)
    x10_4 = 1
else
    x10_4 = x10_3 + 1

*(x9 + 0x14) += 1
x9[3].d = x10_4
*arg1 = *(result + 0x30)
v0 = *(TI + 0x10)
*(result + 0x10) = *TI
*(result + 0x20) = v0
return result

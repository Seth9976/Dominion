// 函数: _Z27AttachPointCreateAttachmentP12AttachmentID
// 地址: 0xf6a704
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x12 = *arg1
int64_t* x9 = *(*gpGameData + 0x28)
uint64_t x8_1 = zx.q(x9[1].d)

if (x12 != 0)
    uint64_t x11_1 = zx.q(x12.w)
    
    if (x11_1.d u< x8_1.d)
        int64_t x10_1 = *x9
        
        if (*(x10_1 + x11_1 * 0x34 + 0x30) == x12)
            int32_t i
            
            do
                arg1 = x10_1 + x11_1 * 0x34 + 0xc
                i = *arg1
                
                if (i == 0)
                    break
                
                x11_1 = zx.q(i.w)
                
                if (x11_1.d u>= x8_1.d)
                    break
            while (*(x10_1 + x11_1 * 0x34 + 0x30) == i)

uint64_t x10_2 = zx.q(x9[2].d)
int64_t x11_2
int32_t x12_1

if (x10_2.d != x8_1.d)
    x11_2 = *x9
    x12_1 = *(x11_2 + x10_2 * 0x34 + 0x30)
    x8_1 = x10_2
else
    x11_2 = *x9
    x12_1 = x8_1.d + 1
    x9[1].d = x12_1

x9[2].d = x12_1
int128_t v0
v0.q = 0
v0:8.q = 0
void* result = x11_2 + x8_1 * 0x34
__builtin_memset(result, 0, 0x30)
*(result + 0x30) = x10_2.d | x9[3].d << 0x10
int32_t x10_4 = x9[3].d
int32_t x10_5

if (x10_4 == 0xffff)
    x10_5 = 1
else
    x10_5 = x10_4 + 1

*(x9 + 0x14) += 1
x9[3].d = x10_5
*arg1 = *(result + 0x30)
v0 = *(TI + 0x10)
*(result + 0x10) = *TI
*(result + 0x20) = v0
return result

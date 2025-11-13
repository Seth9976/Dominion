// 函数: _Z10UI2GetRect9UI2HandlePKci
// 地址: 0x10425e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = UI2SelectByName(arg1, arg2, arg3)

if (result.d == 0)
    *RECT1
    *(RECT1 + 4)
    *(RECT1 + 8)
    *(RECT1 + 0xc)
    return result

void* x8_1 = *gUI2 + mulu.dp.d(result.d & 0xffff, 0x19a8)
*(x8_1 + 0x16b8)
*(x8_1 + 0x16bc)
*V20
*(V20 + 4)
*(x8_1 + 0x16b0)
*(x8_1 + 0x16b4)
*(x8_1 + 0x16c0)
*(x8_1 + 0x175c)
*(x8_1 + 0x1760)
*(x8_1 + 0x16c4)
*(x8_1 + 0x16c8)
return result

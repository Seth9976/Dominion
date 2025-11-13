// 函数: _Z18AttachPointIsEmptyP12AttachmentID
// 地址: 0xf6a800
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *arg1

if (x8_1 != 0)
    uint64_t x10_1 = zx.q(x8_1.w)
    int64_t* x9_2 = *(*gpGameData + 0x28)
    
    if (x10_1.d u< x9_2[1].d)
        int64_t x9_3 = *x9_2
        return zx.q(x9_3 == 0 ? 1 : 0) | zx.q(*(x9_3 + x10_1 * 0x34 + 0x30) != x8_1 ? 1 : 0)

return 1

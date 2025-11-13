// 函数: _Z13AppInEditModev
// 地址: 0xc75de8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *gAppInterface
bool z

if (zx.d(*(*gpAppData + 0x40)) != 0)
    z = x0 == 0
else
    z = true

if (not(z) && ((*(*x0 + 0x68))() & 1) != 0)
    return 1

return 0

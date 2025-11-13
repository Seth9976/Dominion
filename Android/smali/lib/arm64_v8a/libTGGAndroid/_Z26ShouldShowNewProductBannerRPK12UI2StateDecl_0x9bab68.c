// 函数: _Z26ShouldShowNewProductBannerRPK12UI2StateDecl
// 地址: 0x9bab68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = &data_11cee28
void* x0 = GetActiveProfile()
int32_t* i = *(*(x0 + 0x7580) + ((zx.q(*(x0 + 0x7588)) & 0xfffffffffffffdff) << 3))

if (i == 0)
    return 1

int32_t x10_1

do
    x10_1 = *i
    
    if (x10_1 == 0xffffd8f1)
        break
    
    i = *(i + 8)
while (i != 0)

return zx.q(x10_1 != 0xffffd8f1 ? 1 : 0)

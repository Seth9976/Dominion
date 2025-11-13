// 函数: _Z23AssetCatalogGetNextIterRPv
// 地址: 0xc772bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = *arg1
void* x8 = *(x19 + 0x10)

if (x8 != 0)
    *arg1 = x8
    return *(x19 + 8)

int64_t* x21 = *gpAssetAppData
int32_t x0_2 = XHashKey(x19)
int32_t x8_1 = x21[1].d
int32_t x9_1 = (x8_1 & x0_2) + 1
void* i

do
    if (x9_1 u> x8_1)
        *arg1 = nullptr
        return *(x19 + 8)
    
    i = *(*x21 + (zx.q(x9_1) << 3))
    x9_1 += 1
while (i == 0)

*arg1 = i
return *(x19 + 8)

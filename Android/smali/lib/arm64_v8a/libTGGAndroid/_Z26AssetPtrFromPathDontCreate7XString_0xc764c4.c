// 函数: _Z26AssetPtrFromPathDontCreate7XString
// 地址: 0xc764c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_20
XString::XString(&var_20)
AssetPathNormalize(&var_20)
XString::~XString()
int64_t* x19 = *gpAssetAppData
void var_18
int32_t x0_3 = XHashKey(&var_18)
void* i

for (i = *(*x19 + ((zx.q(x19[1].d) & zx.q(x0_3)) << 3)); i != 0; i = *(i + 0x10))
    if ((XString::operator!=(&var_18) & 1) == 0)
        i = *(i + 8)
        break

XString::~XString()
return i

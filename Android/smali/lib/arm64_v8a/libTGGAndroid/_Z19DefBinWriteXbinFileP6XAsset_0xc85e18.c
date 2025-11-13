// 函数: _Z19DefBinWriteXbinFileP6XAsset
// 地址: 0xc85e18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset** i_1 = XPooledCalloc(0x18)
XAsset** i = i_1
i_1[1] = 0
i_1[2] = 0
*i_1 = arg1
XAsset** i_3 = i_1
XAsset** i_4 = i_1
int32_t var_28 = 1
DefLoadXbinPathFromAssetPath(XString::operator char const*())
int32_t x0_3 = DefBinWriteItemsToPackFile(XString::operator char const*(), &i_3, false)

if ((x0_3 & 1) == 0)
    XString::operator char const*()
    XTrace("Failed to write xbin file: '%s'")

XString::~XString()

do
    XAsset** i_2 = i
    i = i[1]
    XPooledFree(i_2, 0x18)
while (i != 0)

return zx.q(x0_3) & 1

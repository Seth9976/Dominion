// 函数: _Z27AssetShaderRequiresReimportP6XAssety
// 地址: 0xc8a0f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

AppGetResPath()
XFormatString("%s/res/")
void var_28
XString::XString(&var_28)
int32_t x0_3 = AssetShaderChangedInDirectory(&var_28, arg2)
XString::~XString()
int32_t x19_1

if ((x0_3 & 1) == 0)
    AppGetSysPath()
    XFormatString("%s/sys/")
    void var_38
    XString::XString(&var_38)
    x19_1 = AssetShaderChangedInDirectory(&var_38, arg2)
    XString::~XString()
    XString::~XString()
else
    x19_1 = 1

XString::~XString()
return zx.q(x19_1) & 1

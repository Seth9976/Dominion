// 函数: _Z22BinFileHandleOpenAssetP6XAssetP13BinFileHandle
// 地址: 0xc83db8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((PackFileIsZip(XString::operator char const*()) & 1) != 0)
    XString::operator char const*()
    BinFileHandle* x0_10
    char* x1_2
    char* x2
    x0_10, x1_2, x2 = XString::operator char const*()
    int64_t* x0_11 = BinFileHandleOpenZip(x0_10, x1_2, x2)
    XString::~XString()
    sub_1101e04(x0_11)
    noreturn

void var_38
XString::XString(&var_38)
HalFilePathCreate(&var_38, 2)
XString::~XString()
__builtin_memset(arg2, 0, 0x18)
HalFilePath var_30
int32_t x0_6 = HalOpen(arg2, &var_30, 0)
XString::~XString()
return zx.q(x0_6) & 1

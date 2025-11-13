// 函数: _Z31DefBinReadLocationsFromPackFilePKcR5XListI12PackLocationEb
// 地址: 0xc86678
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0
XList<PackLocation>* x1
x0, x1 = PackFileIsZip(arg1)

if ((x0.d & 1) != 0)
    int64_t* x0_9 = DefBinReadZipCatalogData(x0, x1)
    XString::~XString()
    sub_1101e04(x0_9)
    noreturn

char var_50
XString::XString(&var_50)
HalFilePathCreate(&var_50, 2)
XString::~XString()
int64_t var_38
__builtin_memset(&var_38, 0, 0x18)
HalFilePath var_48
int32_t x19_1

if ((HalOpen(&var_38, &var_48, 0) & 1) == 0)
    x19_1 = 0
else
    x19_1 = DefBinReadPackFileCatalogData(&var_38, arg2, arg3 & 1)
    HalClose(&var_38)

XString::~XString()
return zx.q(x19_1) & 1

// 函数: _Z17TwitterExportDeckR7DomGameR8GameSavePKc
// 地址: 0xb9d6d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* var_21b0 = arg3
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
TwitterExportLayout(arg1, arg2)
void var_1100
XString::operator=(&var_1100)
int64_t var_2198
int64_t var_10f8 = var_2198
int16_t var_2190
int16_t var_10f0 = var_2190
void var_10e8
void* var_21a8 = &var_10e8
XString::operator=(&var_10e8)
int64_t var_2180
int64_t var_10e0 = var_2180
int16_t var_2178
int16_t var_10d8 = var_2178
void var_10d0
XString::operator=(&var_10d0)
int64_t var_2168
int64_t var_10c8 = var_2168
int16_t var_2160
int16_t var_10c0 = var_2160
void var_10b8
XString::operator=(&var_10b8)
int64_t var_2150
int64_t var_10b0 = var_2150
int16_t var_2148
int16_t var_10a8 = var_2148
void var_10a0
XString::operator=(&var_10a0)
int64_t var_2138
int64_t var_1098 = var_2138
int16_t var_2130
int16_t var_1090 = var_2130
void var_1088
XString::operator=(&var_1088)
int64_t var_2120
int64_t var_1080 = var_2120
int16_t var_2118
int16_t var_1078 = var_2118
void var_2110
void var_1070
memcpy(&var_1070, &var_2110, 0x1010)
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
TwitterUIs var_21a0
TwitterLayoutToUIs(&var_1100, &var_21a0)
int32_t var_20f4
void var_20f0
int64_t* x0_10 = UI2SetToTexture(&var_21a0, var_20f4, &var_20f0, nullptr, nullptr)

if (var_20f4 s>= 1)
    int64_t i = 0
    TwitterUIs* x26_1 = &var_21a0
    
    do
        UI2Free(x26_1)
        i += 1
        x26_1 += 4
    while (i s< sx.q(var_20f4))

int64_t* x8_9 = *x0_10

if (x8_9 == 0)
    if (x0_10[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x0_10, false, true)
    x8_9 = *x0_10

int32_t* x8_11 = **x8_9
int32_t x26_2 = *x8_11
int32_t x27 = x8_11[1]
int32_t x0_16 = TextureFormatLinearImageSize(x26_2, x27, 1)
*(gTwitterExport + 0x48) = TextureFormatPitch(x26_2, 1)
*(gTwitterExport + 0x4c) = 1
*(gTwitterExport + 0x40) = x26_2
*(gTwitterExport + 0x44) = x27
int64_t x0_20 = XMalloc(x0_16)
uint32_t x8_12 = zx.d(*gTwitterExport)
*(gTwitterExport + 0x38) = x0_20

if (x8_12 == 0)
    MutexInit(gTwitterExport + 4)
    *gTwitterExport = 1

MutexLock(gTwitterExport + 4)
TextureGetRenderData(x0_10, gTwitterExport + 0x38)
AssetCatalogPurgeAsset(x0_10)
XString::operator=(gTwitterExport + 0x30)
*(gTwitterExport + 1) = 1
*(gTwitterExport + 0x50) = thread_create(TwitterWriteFile, nullptr)
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
return XString::~XString()

// 函数: _Z21DefBinWritePackAssetsR5XListIP6XAssetEP7__sFILEb
// 地址: 0xc8597c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *arg1
int32_t x23_1
int32_t i

do
    x23_1 = x21 == 0 ? 1 : 0
    
    if (x21 == 0)
        break
    
    int64_t* x27_2 = *x21
    x21 = x21[1]
    DefMap* x0_8 = DefMapFromAssetType(zx.q(x27_2[1].d))
    int64_t* x8_1 = *x27_2
    
    if (x8_1 == 0)
        if (x27_2[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x27_2, false, true)
        x8_1 = *x27_2
    
    void* x28_1 = *x8_1
    int32_t x0_13 = DefinitionGetSize(x0_8)
    int32_t var_78_2 = 0
    void* buf_1 = nullptr
    char var_70_2 = 1
    int64_t var_68_2 = 0
    DefBinSerializeBlock(x28_1, x0_8, nullptr, &buf_1)
    size_t x25_2 = sx.q(x0_13)
    void* buf = XMalloc(x0_13)
    
    if ((arg3.d & 1) == 0)
        memset(buf, 0xfa, x25_2)
        int32_t x0_2 = DefinitionGetSize(x0_8)
        memcpy(buf, x28_1, sx.q(x0_2))
        buf_1 = buf
        int32_t var_78_1 = 0
        int32_t var_74_1 = x0_2
        char var_70_1 = 0
        int64_t var_68_1 = 0
        DefBinSerializeBlock(x28_1, x0_8, nullptr, &buf_1)
    else
        DefLoadXbinPathFromAssetPath(XString::operator char const*())
        FILE* fp = fopen(XString::operator char const*(), "rb")
        
        if (fp == 0)
            XString::operator char const*()
            XTrace("DefBinWritePackAssets Failed to open %s")
            XString::~XString()
            x23_1 = 0
            break
        
        fseek(fp, 0, 2)
        
        if (ftell(fp) != x25_2 + 0xb4)
            pthread_kill(pthread_self(), 6)
            int64_t* x0_27 = XNoReturn()
            XString::~XString()
            sub_1101e04(x0_27)
            noreturn
        
        fseek(fp, 0xb4, 0)
        fread(buf, 1, x25_2, fp)
        fclose(fp)
        XString::~XString()
    
    i = fwrite(buf, x25_2, 1, arg2)
    XFree(buf)
while (i == 1)
return zx.q(x23_1)

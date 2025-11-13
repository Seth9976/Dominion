// 函数: _Z17TextureImportASTCPKcP23DefTextureXMLImportSpecP20DefTextureImportDataS0_
// 地址: 0xfd849c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_58
__builtin_memset(&var_58, 0, 0x18)
TextureLoadFileWithSTB(&var_58, arg4)
XFree(var_58)
var_58 = nullptr
AppGetSysPath()
DefLoadXbinPathFromAssetPath(arg1)
XString::operator char const*()
XFormatString("%s.astc")
XString::~XString()
XFormatString("%s/ExternalCode/astc/astcenc.exe")
unlink(XString::operator char const*())
MakeDirectoriesInFullPath(XString::operator char const*())
XTrace("compressing to astc: %s")
XString::operator char const*()
XString::operator char const*()
XFormatString(""%s" -c "%s" "%s" 4x4 -medium -alphablend")
RunProcess(XString::operator char const*())
FILE* fp = fopen(XString::operator char const*(), "rb")
int32_t x19_1

if (fp == 0)
    XTrace("failed to convert to astc: %s")
    x19_1 = 0
else
    fseek(fp, 0, 2)
    int32_t x0_12 = ftell(fp)
    fseek(fp, 0, 0)
    
    if (x0_12 == 0)
        fclose(fp)
        unlink(XString::operator char const*())
        x19_1 = 0
    else
        void* buf = XMalloc(x0_12)
        int32_t x0_15 = fread(buf, 1, sx.q(x0_12), fp)
        fclose(fp)
        unlink(XString::operator char const*())
        
        if (x0_15 != x0_12)
            XTrace("failed to read: %s")
            XFree(buf)
            x19_1 = 0
        else
            *(arg3 + 0x10) = 1
            *(arg3 + 0x3c) = 1
            int64_t var_50
            *arg3 = var_50
            int32_t* x0_18 = XCalloc(0x10)
            *(arg3 + 0x48) = x0_18
            *(arg3 + 0x1c) = 0
            *(arg3 + 0x14) = 0x1500000009
            *x0_18 = x0_12
            *(*(arg3 + 0x48) + 8) = buf
            *(arg3 + 0x20) = *(arg2 + 8)
            *(arg3 + 0x24) = *(arg2 + 0xc)
            x19_1 = 1

XString::~XString()
XString::~XString()
XString::~XString()
return zx.q(x19_1)

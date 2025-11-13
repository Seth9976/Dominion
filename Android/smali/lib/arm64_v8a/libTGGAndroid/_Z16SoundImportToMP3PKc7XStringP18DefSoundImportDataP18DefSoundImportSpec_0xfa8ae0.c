// 函数: _Z16SoundImportToMP3PKc7XStringP18DefSoundImportDataP18DefSoundImportSpec
// 地址: 0xfa8ae0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

AppGetSysPath()
DefLoadXbinPathFromAssetPath(arg1)
XString::operator char const*()
XFormatString("%s.mp3")
XString::~XString()
XFormatString("%s/ExternalCode/lame/lame.exe")
unlink(XString::operator char const*())
MakeDirectoriesInFullPath(XString::operator char const*())
XString::operator char const*()
XTrace("converting to mp3: %s")
XString::operator char const*()
XString::operator char const*()
XString::operator char const*()
XFormatString(""%s" "%s" "%s"")
RunProcess(XString::operator char const*())
FILE* fp = fopen(XString::operator char const*(), "rb")
int32_t x19_1

if (fp == 0)
    XString::operator char const*()
    XTrace("failed to convert to mp3: %s")
    x19_1 = 0
else
    fseek(fp, 0, 2)
    int32_t x0_14 = ftell(fp)
    fseek(fp, 0, 0)
    
    if (x0_14 == 0)
        fclose(fp)
        unlink(XString::operator char const*())
        x19_1 = 0
    else
        *(arg3 + 0x10) = 5
        *(arg3 + 0x14) = x0_14
        int64_t buf = XMalloc(x0_14)
        int64_t size = sx.q(*(arg3 + 0x14))
        *(arg3 + 0x18) = buf
        
        if (fread(buf, size, 1, fp) != 1)
            fclose(fp)
            unlink(XString::operator char const*())
            x19_1 = 0
        else
            *arg3 = 0
            *(arg3 + 8) = 0
            fclose(fp)
            unlink(XString::operator char const*())
            x19_1 = 1

XString::~XString()
XString::~XString()
XString::~XString()
return zx.q(x19_1)

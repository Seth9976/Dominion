// 函数: _Z7ReadOgg7XStringP18DefSoundImportDataP18DefSoundImportSpec
// 地址: 0xfa89fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg3 != 2)
    XString::operator char const*()
    XTrace("unsupported ogg format conversion: %s")

FILE* fp = fopen(XString::operator char const*(), "rb")
int32_t x19_1

if (fp == 0)
    x19_1 = 0
else
    fseek(fp, 0, 2)
    int32_t x0_3 = ftell(fp)
    fseek(fp, 0, 0)
    size_t x0_6
    
    if (x0_3 != 0)
        *(arg2 + 0x10) = 2
        *(arg2 + 0x14) = x0_3
        int64_t buf = XMalloc(x0_3)
        int64_t size = sx.q(*(arg2 + 0x14))
        *(arg2 + 0x18) = buf
        x0_6 = fread(buf, size, 1, fp)
    
    if (x0_3 == 0 || x0_6 != 1)
        x19_1 = 0
    else
        x19_1 = SoundOggParseHeader(arg2)
    
    fclose(fp)

return zx.q(x19_1) & 1

// 函数: _Z16TruetypeReimportPKcP14DefAssetHeader7XString
// 地址: 0x100297c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp = fopen(XString::operator char const*(), "rb")
fseek(fp, 0, 2)
int64_t count = ftell(fp)
fseek(fp, 0, 0)
int64_t buf = XMalloc(count.d)
fread(buf, 1, count, fp)
fclose(fp)
int64_t* x20_1 = *arg2
*x20_1 = buf
x20_1[1].d = count.d
void var_d0
int32_t x0_7 = stbtt_InitFont(&var_d0, buf, 0)

if (x0_7 != 0)
    stbtt_GetFontVMetrics(&var_d0, &x20_1[2], x20_1 + 0x14, &x20_1[3])

return zx.q(x0_7 != 0 ? 1 : 0)

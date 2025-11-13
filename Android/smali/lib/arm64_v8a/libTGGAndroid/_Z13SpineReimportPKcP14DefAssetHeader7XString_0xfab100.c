// 函数: _Z13SpineReimportPKcP14DefAssetHeader7XString
// 地址: 0xfab100
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::XString()
XString::XString()
uint64_t x0_1 = XString::operator char const*()
strchr(x0_1, 0x2e)
char var_28
XString::XString(&var_28, x0_1)
void var_38
XString::operator=(&var_38)
XString::~XString()
char var_40
XString::operator=(&var_40)
char var_48
XString::XString(&var_48)
XString::operator+(&var_38)
XString::~XString()
void** x22_1 = *arg2
x22_1[4] = 0
*x22_1 = &data_2422510
x22_1[3].d = 0

if ((XFileExists(XString::operator char const*()) & 1) != 0)
    FILE* fp = fopen(XString::operator char const*(), "rb")
    fseek(fp, 0, 2)
    int32_t count_2 = ftell(fp)
    fseek(fp, 0, 0)
    int64_t count_1 = sx.q(count_2)
    void* buf = XMalloc(count_2) + 1
    *x22_1 = buf
    fread(buf, 1, count_1, fp)
    fclose(fp)
    (*x22_1)[count_1] = 0

if ((operator==(&var_40, "spine.json") & 1) == 0)
    if ((operator==(&var_40, "skel") & 1) != 0)
        FILE* fp_2 = fopen(XString::operator char const*(), "rb")
        fseek(fp_2, 0, 2)
        int32_t x0_30 = ftell(fp_2)
        fseek(fp_2, 0, 0)
        int64_t buf_2 = XMalloc(x0_30)
        x22_1[2] = buf_2
        fread(buf_2, 1, sx.q(x0_30), fp_2)
        fclose(fp_2)
        x22_1[3].d = x0_30
else
    FILE* fp_1 = fopen(XString::operator char const*(), "rb")
    fseek(fp_1, 0, 2)
    int32_t count_3 = ftell(fp_1)
    fseek(fp_1, 0, 0)
    int64_t count = sx.q(count_3)
    int64_t buf_1 = XMalloc(count_3) + 1
    x22_1[1] = buf_1
    fread(buf_1, 1, count, fp_1)
    fclose(fp_1)
    x22_1[1][count] = 0

XString::~XString()
XString::~XString()
XString::~XString()
return 1

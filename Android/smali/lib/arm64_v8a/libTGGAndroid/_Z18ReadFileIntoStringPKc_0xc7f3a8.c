// 函数: _Z18ReadFileIntoStringPKc
// 地址: 0xc7f3a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp = fopen(arg1, "rb")

if (fp != 0)
    fseek(fp, 0, 2)
    int32_t count_1 = ftell(fp)
    fseek(fp, 0, 0)
    void* buf = XMalloc(count_1 + 1)
    size_t count = sx.q(count_1)
    int32_t x0_3 = fread(buf, 1, count, fp)
    fclose(fp)
    
    if (x0_3 == count_1)
        *(buf + count) = 0
        char var_38
        XString::XString(&var_38)
        XFree(buf)
        XString* entry_x8
        XString::XString(entry_x8)
        return XString::~XString()
    
    XFree(buf)

return XString::XString() __tailcall

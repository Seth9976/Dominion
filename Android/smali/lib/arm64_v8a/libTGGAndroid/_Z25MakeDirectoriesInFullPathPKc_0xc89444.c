// 函数: _Z25MakeDirectoriesInFullPathPKc
// 地址: 0xc89444
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = zx.d(*arg1)
char const* str

if (x8 != 0x5c)
    str = arg1

if (x8 == 0x5c || x8 == 0x2f)
    str = &arg1[1]

size_t result = strcspn(str, "/\")
void* x22 = &str[result]

while (zx.d(*x22) != 0)
    XString::XString()
    char var_28
    XString::AppendLength(&var_28, arg1.d)
    
    if ((XFileExists(XString::operator char const*()) & 1) == 0
            && mkdir(XString::operator char const*(), 0x1ff) == 0xffffffff)
        XString::operator char const*()
        XTrace("Failed to create directory '%s'")
        return XString::~XString()
    
    XString::~XString()
    result = strcspn(x22 + 1, "/\")
    x22 = x22 + 1 + result

return result

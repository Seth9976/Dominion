// 函数: _Z11XmlReadFileP9XmlReaderR11HalFilePath
// 地址: 0x10627bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_2 = 0
void var_48

if ((HalOpen(&var_48, arg2, 0) & 1) != 0)
    int32_t x0_4 = HalGetFileSize(&var_48)
    void* x0_6 = XMalloc(x0_4 + 1)
    *arg1 = x0_6
    int32_t x0_8 = HalRead(&var_48, x0_4, x0_6)
    HalClose(&var_48)
    
    if ((x0_8 & 1) == 0)
        XFree(*arg1)
        x0_2 = 0
        *arg1 = 0
    else
        int64_t x8_1 = *arg1
        *(arg1 + 0x12c) = 1
        *(x8_1 + sx.q(x0_4)) = 0
        int64_t x8_2 = *arg1
        *(arg1 + 8) = 0
        *(arg1 + 0x10) = x8_2
        strcpy(arg1 + 0x28, XString::operator char const*())
        x0_2 = sub_1062630(arg1)

return zx.q(x0_2) & 1

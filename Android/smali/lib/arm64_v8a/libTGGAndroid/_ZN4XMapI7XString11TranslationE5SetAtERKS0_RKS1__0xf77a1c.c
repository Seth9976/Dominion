// 函数: _ZN4XMapI7XString11TranslationE5SetAtERKS0_RKS1_
// 地址: 0xf77a1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = XHashKey(arg2)
uint64_t x24 = zx.q(*(arg1 + 8)) & zx.q(x0_1)
void* x21 = *(*arg1 + (zx.q(x24.d) << 3))
int64_t result
void* entry_x2

if (x21 == 0)
label_f77a70:
    XString* x0_4 = XPooledMalloc(0x38)
    XString::XString(x0_4)
    XString::XString(x0_4 + 8)
    XString::XString(x0_4 + 0x10)
    result = XString::XString(x0_4 + 0x18)
    int64_t x9_1 = *(entry_x2 + 0x18)
    *(x0_4 + 0x27) = *(entry_x2 + 0x1f)
    *(x0_4 + 0x20) = x9_1
    uint64_t x9_2 = x24 << 3
    *(x0_4 + 0x30) = *(*arg1 + x9_2)
    *(*arg1 + x9_2) = x0_4
    *(arg1 + 0xc) += 1
else
    while (true)
        if ((XString::operator==(arg2) & 1) != 0)
            XString::operator=(x21 + 8)
            XString::operator=(x21 + 0x10)
            result = XString::operator=(x21 + 0x18)
            int64_t x9_3 = *(entry_x2 + 0x1f)
            *(x21 + 0x20) = *(entry_x2 + 0x18)
            *(x21 + 0x27) = x9_3
            break
        
        x21 = *(x21 + 0x30)
        
        if (x21 == 0)
            goto label_f77a70
return result

// 函数: _Z21XmlWriteLiteralStringP9XmlWriterPKc
// 地址: 0x1063ea0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x20 = arg2

if (*(arg1 + 8) == 1)
    fputc(0x3e, *arg1)
    *(arg1 + 8) = 3

uint32_t x8_1 = zx.d(*x20)

if (x8_1 == 0x3c)
    goto label_1063f38

while (true)
    char const* const buf
    FILE* fp
    
    if (x8_1 == 0x3e)
        fp = *arg1
        buf = "&gt;"
    else
        if (x8_1 == 0)
            return 
        
        fputc(sx.d(x8_1.b), *arg1)
        x20 = &x20[1]
        x8_1 = zx.d(*x20)
        
        if (x8_1 != 0x3c)
            continue
        else
        label_1063f38:
            fp = *arg1
            buf = "&lt;"
    
    fwrite(buf, 1, 4, fp)
    x20 = &x20[1]
    x8_1 = zx.d(*x20)
    
    if (x8_1 == 0x3c)
        break

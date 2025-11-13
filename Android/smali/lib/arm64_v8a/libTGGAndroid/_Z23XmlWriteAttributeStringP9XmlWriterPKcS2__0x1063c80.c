// 函数: _Z23XmlWriteAttributeStringP9XmlWriterPKcS2_
// 地址: 0x1063c80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x21 = arg2
char const* x19 = arg3
fputc(0x20, *arg1)
uint32_t x8_1 = zx.d(*x21)

if (x8_1 == 0x3c)
    goto label_1063d0c

while (true)
    char const* const buf
    FILE* fp
    
    if (x8_1 == 0x3e)
        fp = *arg1
        buf = "&gt;"
    else
        if (x8_1 == 0)
            break
        
        fputc(sx.d(x8_1.b), *arg1)
        x21 = &x21[1]
        x8_1 = zx.d(*x21)
        
        if (x8_1 != 0x3c)
            continue
        else
        label_1063d0c:
            fp = *arg1
            buf = "&lt;"
    
    fwrite(buf, 1, 4, fp)
    x21 = &x21[1]
    x8_1 = zx.d(*x21)
    
    if (x8_1 == 0x3c)
        break

fwrite(0x771f49, 1, 2, *arg1)
uint32_t x8_2 = zx.d(*x19)

if (x8_2 == 0x3c)
    goto label_1063d9c

while (true)
    char const* const buf_1
    FILE* fp_1
    
    if (x8_2 == 0x3e)
        fp_1 = *arg1
        buf_1 = "&gt;"
    else
        if (x8_2 == 0)
            break
        
        fputc(sx.d(x8_2.b), *arg1)
        x19 = &x19[1]
        x8_2 = zx.d(*x19)
        
        if (x8_2 != 0x3c)
            continue
        else
        label_1063d9c:
            fp_1 = *arg1
            buf_1 = "&lt;"
    
    fwrite(buf_1, 1, 4, fp_1)
    x19 = &x19[1]
    x8_2 = zx.d(*x19)
    
    if (x8_2 == 0x3c)
        break

return fputc(0x22, *arg1) __tailcall

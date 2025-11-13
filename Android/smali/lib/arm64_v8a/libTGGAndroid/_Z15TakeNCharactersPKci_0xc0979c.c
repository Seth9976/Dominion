// 函数: _Z15TakeNCharactersPKci
// 地址: 0xc0979c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s>= 1)
    char const* x21 = arg1
    int32_t i
    
    do
        uint32_t x8 = zx.d(*x21)
        
        if (x8 == 0)
            break
        
        if ((x8 & 0x80) != 0)
            if ((x8 & 0xe0) == 0xc0)
                x21 = &x21[1]
            else if ((x8 & 0xf0) == 0xe0)
                x21 = &x21[2]
            else if ((x8 & 0xf8) == 0xf0)
                x21 = &x21[3]
        
        i = arg2
        arg2 -= 1
        x21 = &x21[1]
    while (i != 1)

XString::XString()
char* entry_x8
return XString::AppendUTF8_size(entry_x8, arg1.d) __tailcall

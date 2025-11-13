// 函数: _Z19TryParseIncludeLinePKc
// 地址: 0xf90d68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x20 = arg1

while (true)
    uint32_t x8 = zx.d(*x20)
    
    if (x8 != 0x20 && x8 != 9)
        if (strncmp(x20, "#include", 8) == 0)
            void* str = &x20[9]
            
            while (true)
                uint32_t x8_2 = zx.d(*(str - 1))
                
                if (x8_2 s<= 0x1f)
                    if (x8_2 != 9)
                        break
                else if (x8_2 != 0x20)
                    if (x8_2 == 0x22 || x8_2 == 0x3c)
                        uint32_t x8_3 = zx.d(*(str + sx.q(strcspn(str, ">""))))
                        char* entry_x8
                        
                        if (x8_3 == 0x22 || x8_3 == 0x3e)
                            return XString::XString(entry_x8, str) __tailcall
                    
                    break
                
                str += 1
        
        return XString::XString() __tailcall
    
    x20 = &x20[1]

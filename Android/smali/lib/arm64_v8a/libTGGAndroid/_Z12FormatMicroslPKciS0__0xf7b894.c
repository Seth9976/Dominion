// 函数: _Z12FormatMicroslPKciS0_
// 地址: 0xf7b894
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x22 = arg2
int64_t result = XString::XString()
uint32_t x8 = zx.d(*x22)

if (x8 != 0)
    while (true)
        uint64_t x8_3 = zx.q(ror.d((x8 & 0xff) - 0x20, 1))
        char* entry_x8
        
        if (x8_3.d u<= 7)
            switch (x8_3)
                case 0
                    result = XString::operator+=(entry_x8)
                    goto label_f7b900
                case 2
                    result = XString::operator+=(entry_x8)
                label_f7b900:
                    x22 = &x22[1]
                    x8 = zx.d(*x22)
                    
                    if (x8 == 0)
                        break
                    
                    continue
                case 6
                    FormatDigits(arg1, arg3, ",", ".")
                    XString::operator char const*()
                    XString::operator+=(entry_x8)
                label_f7b99c:
                    result = XString::~XString()
                    x22 = &x22[2]
                    x8 = zx.d(*x22)
                    
                    if (x8 == 0)
                        break
                    
                    continue
                case 7
                    FormatDigits(arg1, arg3, ".", ",")
                    XString::operator char const*()
                    XString::operator+=(entry_x8)
                    goto label_f7b99c
        pthread_kill(pthread_self(), 6)
        int64_t* x0_10 = XNoReturn()
        XString::~XString()
        sub_1101e04(x0_10)
        noreturn

return result

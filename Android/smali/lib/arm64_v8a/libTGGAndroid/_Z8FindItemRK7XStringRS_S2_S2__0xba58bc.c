// 函数: _Z8FindItemRK7XStringRS_S2_S2_
// 地址: 0xba58bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::operator=(arg2)
XString::operator=(arg3)
XString::operator=(arg4)
char* i_1 = strstr(XString::operator char const*(), "[!")
char* i
uint64_t x24

if (i_1 == 0)
    char* i_2 = strstr(XString::operator char const*(), "{!")
    
    if (i_2 == 0)
        char* x0_24 = strstr(XString::operator char const*(), "|//")
        x24 = XString::operator char const*()
        
        if (x0_24 == 0)
            int64_t result
            
            do
                result = strchr(x24, 0x7c)
                
                if (result == 0)
                    return result
                
                x24 = result + 1
            while (zx.d(*x24) != 0)
            
            int64_t x0_27 = XString::operator char const*()
            int32_t x8_10 = (not.q(x0_27)).d + result.d
            
            if (x8_10 s>= 1)
                for (i = x0_27 + sx.q(x8_10) - 1; i u>= x0_27; i -= 1)
                    if (zx.d(*i) == 0x7c)
                        goto label_ba596c
            
            i = nullptr
        else
            int32_t x8_5 = (not.q(x24)).d + x0_24.d
            
            if (x8_5 s>= 1)
                i = x24 + sx.q(x8_5) - 1
            
            if (x8_5 s< 1 || i u< x24)
            label_ba5adc:
                i = nullptr
            else
                while (zx.d(*i) != 0x7c)
                    i -= 1
                    
                    if (i u< x24)
                        goto label_ba5adc
            
            x24 = &x0_24[1]
    else
        i = i_2
        x24 = strchr(i, 0x7d) + 1
else
    i = i_1
    x24 = strchr(i, 0x5d) + 1

label_ba596c:
uint64_t x24_1

if (strncmp(x24, "//---//", 7) == 0)
    x24_1 = x24 + 7
else
    x24_1 = x24

uint64_t x24_2

if (strncmp(x24_1, "////", 4) == 0)
    x24_2 = x24_1 + 4
    
    if (i == 0)
        return 0
else
    if (strncmp(x24_1, 0x7375b2, 2) == 0)
        x24_2 = x24_1 + 2
    else
        x24_2 = x24_1
    
    if (i == 0)
        return 0

char var_48
XString::XString(&var_48, i)
XString::operator=(arg2)
XString::~XString()
uint64_t x0_15 = XString::operator char const*()
XString::operator char const*()
XString::XString(&var_48, x0_15)
XString::operator=(arg3)
XString::~XString()
XString::operator char const*()
XString::Length()
XString::XString(&var_48, x24_2)
XString::operator=(arg4)
XString::~XString()
return 1

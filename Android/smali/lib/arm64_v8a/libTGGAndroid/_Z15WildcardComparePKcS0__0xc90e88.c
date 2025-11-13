// 函数: _Z15WildcardComparePKcS0_
// 地址: 0xc90e88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x19 = arg1
char var_38
XString::XString(&var_38)
char* x0_1 = XString::GetString()
uint32_t i = zx.d(*x0_1)
char* x20 = x0_1
void* i_1
int32_t x22

if (i == 0)
    x22 = 0
    i_1 = nullptr
else
    void* i_6 = nullptr
    x22 = 0
    i_1 = nullptr
    void* x24_1 = x20
    
    do
        if ((i & 0xff) == 0x2a)
            *x20 = 0
            
            if (x20 == x24_1)
                x24_1 = &x20[1]
            else
                void* i_2 = XPooledCalloc(0x18)
                *i_2 = x24_1
                *(i_2 + 8) = 0
                *(i_2 + 0x10) = i_6
                
                if (i_6 == 0)
                    i_1 = i_2
                else
                    *(i_6 + 8) = i_2
                
                x24_1 = &x20[1]
                x22 += 1
                i_6 = i_2
            
            x20 = x24_1
        
        x20 = &x20[1]
        i = zx.d(*x20)
    while (i != 0)
    
    if (zx.d(*x24_1) != 0)
        void** i_3 = XPooledCalloc(0x18)
        *i_3 = x24_1
        i_3[1] = 0
        i_3[2] = i_6
        
        if (i_6 == 0)
            i_1 = i_3
        else
            *(i_6 + 8) = i_3
        
        x22 += 1

int64_t x0_7

while (true)
    *i_1
    x22 -= 1
    void* i_5 = i_1
    char var_48
    XString::XString(&var_48)
    i_1 = *(i_5 + 8)
    
    if (i_1 != 0)
        *(i_1 + 0x10) = 0
    
    XPooledFree(i_5, 0x18)
    x0_7 = stristr(x19, XString::operator char const*())
    
    if (x22 == 0)
        break
    
    if (x0_7 == 0)
        break
    
    x19 = x0_7 + sx.q(XString::Length())
    XString::~XString()

XString::~XString()

while (i_1 != 0)
    void* i_4 = i_1
    i_1 = *(i_1 + 8)
    XPooledFree(i_4, 0x18)

XString::~XString()
return zx.q(x0_7 != 0 ? 1 : 0)

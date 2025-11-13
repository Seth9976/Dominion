// 函数: _Z12sParseFilterPKcP16SearchFilterLinei
// 地址: 0xc91068
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_48
XString::XString(&var_48)
char* x0_1 = XString::GetString()
uint32_t x8 = zx.d(*x0_1)
char* x20 = x0_1
void* i_2

if (x8 == 0)
    i_2 = nullptr
else
    void** i_8 = nullptr
    i_2 = nullptr
    uint32_t x10_1 = 0x2c
    void* const x9_1 = &data_79649b
    void* x25_1 = x20
    
    while (true)
        if ((x8 & 0xff) == zx.d(x10_1.b))
            *x20 = 0
            
            if (x20 == x25_1)
                x25_1 = &x20[1]
            else
                void** i_3 = XPooledCalloc(0x18)
                *i_3 = x25_1
                i_3[1] = 0
                i_3[2] = i_8
                
                if (i_8 == 0)
                    i_2 = i_3
                else
                    i_8[1] = i_3
                
                x25_1 = &x20[1]
                i_8 = i_3
            
            x20 = x25_1
            x9_1 = &data_79649d
        
        x9_1 += 1
        x10_1 = zx.d(*x9_1)
        
        if (x10_1 == 0)
            x20 = &x20[1]
            x8 = zx.d(*x20)
            x10_1 = 0x2c
            x9_1 = &data_79649b
            
            if (x8 == 0)
                break
        else
            x8 = zx.d(*x20)
    
    if (zx.d(*x25_1) != 0)
        void** i_4 = XPooledCalloc(0x18)
        *i_4 = x25_1
        i_4[1] = 0
        i_4[2] = i_8
        
        if (i_8 == 0)
            i_2 = i_4
        else
            i_8[1] = i_4

int32_t i_7 = 0
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
int32_t var_25c = 0
uint64_t i_6

if (i_2 != 0)
    void* i = i_2
    
    do
        char* x21_1 = *i
        i = *(i + 8)
        uint32_t x8_3 = zx.d(*x21_1)
        
        if (x8_3 == 0x2b)
            sParseFilterLine(arg2, &var_25c, &x21_1[1], 0)
        else
            SearchFilterLine var_258
            
            if (x8_3 != 0x21)
                if (stristr(x21_1, ":") == 0)
                    sParseFilterLine(arg2, &var_25c, x21_1, 0)
                else
                    sParseFilterLine(&var_258, &i_7, x21_1, 6)
            else
                sParseFilterLine(&var_258, &i_7, &x21_1[1], 3)
    while (i != 0)
    
    i_6 = zx.q(i_7)

int64_t x20_32

if (i_2 == 0 || i_6.d s<= 0)
    x20_32 = zx.q(var_25c)
else
    x20_32 = sx.q(var_25c)
    void var_250
    void* x21_2 = &var_250
    void* x19_1 = arg2 + (x20_32 << 4) + 8
    uint64_t i_1
    
    do
        *(x19_1 - 8) = *(x21_2 - 8)
        XString::operator=(x19_1)
        x21_2 += 0x10
        i_1 = i_6
        i_6 -= 1
        x19_1 += 0x10
        x20_32 = zx.q(x20_32.d + 1)
    while (i_1 != 1)

XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()

while (i_2 != 0)
    void* i_5 = i_2
    i_2 = *(i_2 + 8)
    XPooledFree(i_5, 0x18)

XString::~XString()
return zx.q(x20_32.d)

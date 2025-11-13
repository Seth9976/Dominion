// 函数: _Z14FromCardStringRK10StringSpanP11DomCardEnumii
// 地址: 0x9ee590
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *arg1

if (x20 == 0)
    return 

int64_t x22_1 = *(arg1 + 8)
int32_t x2
int128_t v0_1
int128_t v1_1
x2, v0_1, v1_1 = STokenize::STokenizeIter::ParseStr(x20)
int128_t var_70
v1_1 = var_70
int128_t var_60
int128_t var_90 = var_60
int64_t x1_1 = v1_1:8.q
StringSpan* x8_1 = var_90.q
arg1 = v1_1.q
int64_t x9_2

if (x8_1 == 0)
    x9_2 = x1_1
else
    x9_2 = var_90:8.q

StringSpan const& x8_2

x8_2 = x8_1 == 0 ? arg1 : x8_1

char* x9_3 = x8_2 + x9_2
int64_t x8_3 = x20 + x22_1
int32_t x10_1 = x8_3.d - x9_3.d
char* x20_1
void* x22_2

if (x10_1 s>= 1)
    uint64_t x10_2 = zx.q(x10_1)
    x20_1 = x9_3
    
    while (true)
        uint64_t x12_1 = zx.q(*x9_3)
        
        if (x12_1 u> 0x3f)
            break
        
        if ((1 << x12_1 & 0x400130100002601) == 0)
            break
        
        x20_1 = &x20_1[1]
        uint64_t temp0_1 = x10_2
        x10_2 -= 1
        x9_3 = &x9_3[1]
        
        if (temp0_1 == 1)
            goto label_9ee644
    
    x22_2 = x8_3 - x20_1
    char* var_80_2 = x20_1
    void* var_78_2 = x22_2
    
    if (arg4 s>= 1)
        goto label_9ee66c
    
    return 

label_9ee644:
x22_2 = nullptr
x20_1 = nullptr
int64_t var_80_1 = 0
int64_t var_78_1 = 0

if (arg4 s< 1)
    return 

label_9ee66c:

if (arg1 == 0)
    return 

int64_t x25_1 = 0
uint64_t x23_2 = zx.q(arg4)

do
    int64_t x0_1 = LookupCardByName(arg1, x1_1.d, x2, 1)
    *(arg2 + ((x25_1 + sx.q(arg3)) << 2)) = x0_1.d
    arg1 = HasRandomExtraPileSetup(DomDefGet(x0_1, 0x17), &var_70, nullptr, nullptr)
    
    if (arg1.d != 0)
        FromCardString(&var_90, arg2, var_70.d, arg1.d)
    
    if (x20_1 == 0)
        break
    
    int128_t v0_2
    int128_t v1_2
    x2, v0_2, v1_2 = STokenize::STokenizeIter::ParseStr(x20_1)
    v1_2 = var_70
    var_90 = var_60
    x1_1 = v1_2:8.q
    StringSpan* x8_5 = var_90.q
    arg1 = v1_2.q
    int64_t x9_5
    
    if (x8_5 == 0)
        x9_5 = x1_1
    else
        x9_5 = var_90:8.q
    
    StringSpan const& x8_6
    
    x8_6 = x8_5 == 0 ? arg1 : x8_5
    
    char* x9_6 = x8_6 + x9_5
    int64_t x8_7 = x20_1 + x22_2
    int32_t x10_3 = x8_7.d - x9_6.d
    
    if (x10_3 s< 1)
    label_9ee740:
        x22_2 = nullptr
        x20_1 = nullptr
        x25_1 += 1
        int64_t var_80_3 = 0
        int64_t var_78_3 = 0
        
        if (x25_1 u>= x23_2)
            break
    else
        uint64_t x10_4 = zx.q(x10_3)
        x20_1 = x9_6
        
        while (true)
            uint64_t x11_1 = zx.q(*x9_6)
            
            if (x11_1 u> 0x3f)
                break
            
            if ((1 << x11_1 & 0x400130100002601) == 0)
                break
            
            x20_1 = &x20_1[1]
            uint64_t temp1_1 = x10_4
            x10_4 -= 1
            x9_6 = &x9_6[1]
            
            if (temp1_1 == 1)
                goto label_9ee740
        
        x22_2 = x8_7 - x20_1
        x25_1 += 1
        char* var_80_4 = x20_1
        void* var_78_4 = x22_2
        
        if (x25_1 u>= x23_2)
            break
while (arg1 != 0)

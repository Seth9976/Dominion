// 函数: _Z7UI2FreeR9UI2Handle
// 地址: 0x101165c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1

if (x8 == 0)
    return 

uint64_t x24_1 = zx.q(x8.w)
int64_t x23_1 = *gUI2

if (*(gUI2 + 0x3c) u>= 0x401)
    int64_t* x20_1 = *(x23_1 + x24_1 * 0x19a8 + 0x1688)
    int64_t* x8_2 = *x20_1
    
    if (x8_2 == 0)
        if (x20_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x20_1, false, true)
        x8_2 = *x20_1
    
    int64_t* x20_2 = *x8_2
    
    if (x20_2[1].d s>= 1)
        int64_t x21_1 = 0
        int64_t i = 0
        
        do
            ClearBindings(*x20_2 + x21_1)
            i += 1
            x21_1 += 0x18
        while (i s< sx.q(x20_2[1].d))

void* x25_1 = x23_1 + x24_1 * 0x19a8
XString::operator=(x25_1 + 0x1640)
*(x25_1 + 0x15d8) = &data_793a18
XString::operator=(x25_1 + 0x1640)
*(x25_1 + 0x15d8) = &data_793a18
XString::operator=(x25_1 + 0x1640)
*(x25_1 + 0x15d8) = &data_793a18
XString::operator=(x25_1 + 0x1650)
XString::operator=(x25_1 + 0x1680)
uint32_t x0_9 = *(x25_1 + 0x13c0)

if (x0_9 != 0)
    SpineDestroy(x0_9)
    *(x25_1 + 0x13c0) = 0

void* x8_7 = x23_1 + x24_1 * 0x19a8
Flanim* x0_10 = *(x8_7 + 0x13c8)

if (x0_10 != 0)
    FlanimDestroy(x0_10)
    *(x8_7 + 0x13c8) = 0

void* x20_6 = x23_1 + x24_1 * 0x19a8
uint32_t x0_11 = *(x20_6 + 0x13e8)

if (x0_11 != 0)
    SoundStopHandle(x0_11)

uint64_t x0_12 = zx.q(*(x23_1 + x24_1 * 0x19a8 + 0x13d8))

if (x0_12.d != 0)
    ParticleSystem* x0_13 = ParticleTryToGet(x0_12)
    
    if (x0_13 != 0)
        ParticleDestroy(x0_13)

uint64_t x0_14 = zx.q(*(x23_1 + x24_1 * 0x19a8 + 0x13ec))

if (x0_14.d != 0)
    Structure* x0_15 = StructureTryToGet(x0_14)
    
    if (x0_15 != 0)
        StructureDestroy(x0_15)

uint32_t x0_16 = *(x20_6 + 0x13e8)

if (x0_16 != 0)
    SoundStopHandle(x0_16)

void* x9_2 = x23_1 + x24_1 * 0x19a8
int32_t x8_10 = *(x9_2 + 0x1420)

if (x8_10 s>= 1)
    int64_t x21_2 = 0
    int64_t i_1 = 0
    
    do
        int32_t* x9_4 = *(x23_1 + x24_1 * 0x19a8 + 0x1418)
        
        if (*(x9_4 + x21_2) == 2)
            UI2Free(x9_4 + x21_2 + 0x20)
            x8_10 = *(x9_2 + 0x1420)
        
        i_1 += 1
        x21_2 += 0x40
    while (i_1 s< sx.q(x8_10))

*(x9_2 + 0x1420) = 0
int32_t x20_9 = *(x23_1 + x24_1 * 0x19a8 + 0x1970)

if (x20_9 != 0)
    uint64_t x25_2 = 0
    bool cond:0_1
    
    do
        int32_t var_44 = *(x23_1 + x24_1 * 0x19a8 + (x25_2 << 0x20 s>> 0x1e) + 0x1870)
        UI2Free(&var_44)
        cond:0_1 = x20_9 != x25_2.d + 1
        x25_2 = zx.q(x25_2.d + 1)
    while (cond:0_1)

void* x8_17 = x23_1 + x24_1 * 0x19a8

if (*(x8_17 + 0x1978) != 0)
    UI2Free(x8_17 + 0x1978)
    *(x8_17 + 0x1978) = 0

void* x8_18 = x23_1 + x24_1 * 0x19a8

if (*(x8_18 + 0x197c) != 0)
    UI2Free(x8_18 + 0x197c)
    *(x8_18 + 0x197c) = 0

void* x8_19 = x23_1 + x24_1 * 0x19a8

if (*(x8_19 + 0x1980) != 0)
    UI2Free(x8_19 + 0x1980)
    *(x8_19 + 0x1980) = 0

void* x8_20 = x23_1 + x24_1 * 0x19a8

if (*(x8_20 + 0x1984) != 0)
    UI2Free(x8_20 + 0x1984)
    *(x8_20 + 0x1984) = 0

void* x8_21 = x23_1 + x24_1 * 0x19a8
void* x20_14 = x23_1 + x24_1 * 0x19a8

if (*(x8_21 + 0x1988) != 0)
    UI2Free(x8_21 + 0x1988)
    *(x8_21 + 0x1988) = 0

void* x8_22 = x23_1 + x24_1 * 0x19a8

if (*(x8_22 + 0x1974) != 0)
    UI2Free(x8_22 + 0x1974)
    *(x8_22 + 0x1974) = 0

UI2::~UI2()
int32_t x9_11 = *(gUI2 + 0x10)
*(gUI2 + 0x10) = zx.d(*(x20_14 + 0x19a0))
*(x20_14 + 0x19a0) = x9_11
*(gUI2 + 0x14) -= 1
*arg1 = 0

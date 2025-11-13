// 函数: _Z9UI2ReloadR3UI2P6XAsset
// 地址: 0x101a810
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg2

if (x8 == 0)
    if (*(arg2 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg2, false, true)
    x8 = *arg2

int64_t* x23 = *x8
void var_460
memset(&var_460, 0, 0x400)
void var_860
memset(&var_860, 0, 0x400)
void var_1058
memset(&var_1058, 0, 0x7f8)
UI2& var_1060 = arg1
void var_145c
memset(&var_145c, 0, 0x3fc)
int64_t i = 0
int32_t var_1460 = 6

do
    XString::XString()
    i += 8
while (i != 0x800)

int32_t x8_2 = *(arg1 + 0x1970)
*(arg1 + 0x167c) = 6

if (x8_2 == 0 && x23[1].d s>= 1)
    int64_t x24_1 = 0
    int64_t x8_4 = 0
    int32_t x9_1 = 6
    
    while (true)
        int64_t x12_1 = (x8_4 & 0xffffffff) << 0x20 s>> 0x1e
        int32_t x10_1 = *(&var_460 + x12_1)
        int32_t x11_1 = *(&var_860 + x12_1)
        *(&var_460 + x12_1) = x10_1 - 1
        int64_t x22_1 = *x23
        int64_t x21 = sx.q(x8_4.d)
        void* x20_2
        
        if (x9_1 != 2)
            x20_2 = UI2GetOrAllocChild((&var_1060)[x21], x11_1 - x10_1)
        else
            UI2* x20_1 = (&var_1060)[x21]
            int32_t x8_5 = *(x20_1 + 0x1974)
            
            if (x8_5 == 0)
                void* x0_10 = UI2Alloc(x20_1)
                x8_5 = *(x0_10 + 0x19a0)
                *(x0_10 + 5) = 1
                *(x20_1 + 0x1974) = x8_5
            
            x20_2 = *gUI2 + mulu.dp.d(x8_5 & 0xffff, 0x19a8)
        
        *(x20_2 + 0x1688) = arg2
        *(x20_2 + 0x1690) = x24_1.d
        AttribMap* x22_2 = x22_1 + x24_1 * 0x18
        int32_t x26_1 = *(x22_2 + 0x10)
        AttribTable* x0_13 = *gUI2AttribTable
        int64_t x8_7 = zx.q(x21.d + 1) << 0x20 s>> 0x1e
        *(&var_460 + x8_7) = x26_1
        *(&var_860 + x8_7) = x26_1
        (&var_1060)[sx.q(x21.d + 1)] = x20_2
        int32_t x0_14 = AttribMapGetInt(x0_13, x22_2, 0x66)
        AttribTable* x0_15 = *gUI2AttribTable
        int64_t x27_2 = sx.q(x21.d + 1)
        (&var_1460)[x27_2] = x0_14
        AttribMapGetString(x0_15, x22_2, 0x64)
        void var_1c60
        XString::operator=(&var_1c60 + (x27_2 << 3))
        *(x20_2 + 0x167c) = x0_14
        XString::operator=(x20_2 + 0x1650)
        
        if (x27_2.d s< 1 || x26_1 != 0)
            x8_4 = x27_2
        else
            int32_t i_1
            
            do
                x8_4 = x27_2 - 1
                
                if (x27_2 s< 2)
                    break
                
                void var_464
                i_1 = *(&var_464 + (x27_2 << 2))
                x27_2 = x8_4
            while (i_1 == 0)
        
        x24_1 += 1
        
        if (x24_1 s>= sx.q(x23[1].d))
            break
        
        x9_1 = *(&var_1460 + ((x8_4 & 0xffffffff) << 0x20 s>> 0x1e))

int64_t result

for (int64_t i_2 = 0x7f8; i_2 != -8; i_2 -= 8)
    result = XString::~XString()

return result

// 函数: _ZN15RegionAllocator7DeallocEj
// 地址: 0x1005040
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 == 0)
    return 

int64_t x10_1 = *(arg1 + 0x20)
uint64_t x12_1 = zx.q(entry_x1) & 0xffff
void* x19_1 = arg1
int32_t x8_1 = *(x10_1 + mulu.dp.d(x12_1.d, 0x58) + 0x28)

if (x8_1 == 0)
    return 

if (x8_1 == 1)
    int32_t x8_2 = *(x10_1 + x12_1 * 0x58 + 0x18)
    int32_t x9 = *(x10_1 + x12_1 * 0x58 + 0x1c)
    int64_t* x11_2 = *(x19_1 + 0x48) + (((zx.q(x9) | zx.q(x8_2 << 8)) & zx.q(*(x19_1 + 0x50))) << 3)
    int32_t* i = *x11_2
    
    if (i != 0)
        arg1 = 0
        
        do
            void* x12_2 = arg1
            arg1 = i.d
            
            if (x8_2 == *i && x9 == *(arg1 + 4) && *(x10_1 + x12_1 * 0x58 + 0x20) == *(arg1 + 8))
                int64_t* x9_2
                
                if (x12_2 == 0)
                    x9_2 = x11_2
                else
                    x9_2 = x12_2 + 0x18
                
                *x9_2 = *(arg1 + 0x18)
                XPooledFree(arg1, 0x20)
                *(x19_1 + 0x54) -= 1
                break
            
            i = *(arg1 + 0x18)
        while (i != 0)
    
    __builtin_memset(x10_1 + x12_1 * 0x58 + 0x18, 0, 0x14)
    return 

if (x8_1 != 2)
    pthread_kill(pthread_self(), 6)
    int64_t var_30 = XNoReturn()
    void* var_28 = x19_1
    data_2423770 = 0x800000008
    *macro_ptr_TTFont = RegisterDefMapBeforeMain(macro_map_TTFont)
    *macro_ptr_TTFontDef = RegisterDefMapBeforeMain(macro_map_TTFontDef)
    data_2423778 = AssetPtrFromPath("sys/white_pixel.texture", 3)
    return 

void* x21_1 = x10_1 + x12_1 * 0x58
*(x21_1 + 0x38)
RegionAllocator::Dealloc(x19_1.d)
*(x21_1 + 0x34)
RegionAllocator::Dealloc(x19_1.d)
*(x21_1 + 0x3c)
RegionAllocator::Dealloc(x19_1.d)
*(x21_1 + 0x40)
RegionAllocator::Dealloc(x19_1.d)
*(x21_1 + 0x44)
RegionAllocator::Dealloc(x19_1.d)
*(x21_1 + 0x48)
RegionAllocator::Dealloc(x19_1.d)
*(x10_1 + mulu.dp.d(x12_1.d, 0x58) + 0x28) = 0

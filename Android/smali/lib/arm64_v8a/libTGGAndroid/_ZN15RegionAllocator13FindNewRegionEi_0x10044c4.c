// 函数: _ZN15RegionAllocator13FindNewRegionEi
// 地址: 0x10044c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RegionAllocator::Region* x19 = arg1
int64_t result = 0
int32_t entry_x1

if ((RegionAllocator::FindNewRegionRec(arg1, *(arg1 + 0x18), zx.q(entry_x1)) & 1) == 0)
    int32_t x8_1 = *0x28
    
    if (x8_1 != 2)
        goto label_1004568
    
    *0x38
    RegionAllocator::Dealloc(x19.d)
    *0x34
    RegionAllocator::Dealloc(x19.d)
    *0x3c
    RegionAllocator::Dealloc(x19.d)
    *0x40
    RegionAllocator::Dealloc(x19.d)
    *0x44
    RegionAllocator::Dealloc(x19.d)
    *0x48
    RegionAllocator::Dealloc(x19.d)
    *0x28 = 0
    result = 0
    
    if (*nullptr != entry_x1)
        x8_1 = *0x28
    label_1004568:
        
        if (x8_1 == 1)
            int32_t x8_3 = *0x18
            int32_t x9_1 = *0x1c
            int64_t* x10_3 =
                *(x19 + 0x48) + (((zx.q(x9_1) | zx.q(x8_3 << 8)) & zx.q(*(x19 + 0x50))) << 3)
            void* i = *x10_3
            
            if (i != 0)
                void* i_1 = nullptr
                
                do
                    void* i_2 = i_1
                    i_1 = i
                    
                    if (x8_3 == *i && x9_1 == *(i_1 + 4) && *0x20 == *(i_1 + 8))
                        int64_t* x9_3
                        
                        if (i_2 == 0)
                            x9_3 = x10_3
                        else
                            x9_3 = i_2 + 0x18
                        
                        *x9_3 = *(i_1 + 0x18)
                        XPooledFree(i_1, 0x20)
                        *(x19 + 0x54) -= 1
                        result = 0
                        break
                    
                    i = *(i_1 + 0x18)
                while (i != 0)
            
            __builtin_memset(0x18, 0, 0x14)
        
        if (x8_1 != 1 || *nullptr != entry_x1)
            return RegionAllocator::PartitionSubdivide(x19, 0)

return result

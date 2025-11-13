// 函数: sub_6407b0
// 地址: 0x6407b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_6406e0(arg1, arg4)
int32_t var_20
char const* const var_1c_1
char* ecx

if (eax.b == 0)
    int32_t var_24_1 = arg1[6]
    uint32_t var_8 = 0
    eax = sub_6412d0(arg1, var_24_1, arg3, &var_8)
    int32_t* esi_1 = var_8
    
    if (eax.b == 0)
        if (esi_1[8] != 2)
        label_640856:
            
            if (esi_1[8] == 1)
                eax = sub_640ba0(arg1, esi_1)
            
            if (esi_1[8] == 1 && *esi_1 == arg3)
                goto label_640887
            
            if (*esi_1 s> arg3)
                eax = sub_640df0(arg1, esi_1, arg3)
                esi_1 = eax
            label_640887:
                
                if (esi_1 == 0)
                    var_1c_1 = "RegionAllocator::AllocRegion"
                    var_20 = 0x6a
                    ecx = "pr != NULL"
                else if (*esi_1 == arg3)
                    if (esi_1[8] == 0)
                        esi_1[8] = 1
                        *(esi_1 + 0x14) = *arg4
                        esi_1[7] = arg4[1].d
                        esi_1[9] = arg1[0x11]
                        arg1[0x11] += 1
                        sub_640b10(arg1, esi_1[0xa], arg1[0x11])
                        int32_t edx = *arg4
                        int64_t* eax_3 = esi_1[0x11]
                        uint32_t ecx_9 = (edx << 8 | *(arg4 + 4)) & arg1[0xf]
                        int32_t eax_4 = arg1[0xe]
                        var_8 = ecx_9
                        
                        for (int32_t* i = *(eax_4 + (ecx_9 << 2)); i != 0; i = i[4])
                            if (edx == *i && *(arg4 + 4) == i[1] && arg4[1].d == i[2])
                                i[3] = eax_3
                                *arg2 = *(esi_1 + 4)
                                return arg2
                        
                        int32_t* edx_1 = sub_64bfd0(0x14)
                        edx_1[3] += 1
                        
                        if (*edx_1 == 0)
                            sub_64be70(edx_1)
                        
                        int32_t* ecx_11 = *edx_1
                        *edx_1 = *ecx_11
                        uint32_t edx_2 = var_8
                        *ecx_11 = *arg4
                        ecx_11[2] = arg4[1].d
                        ecx_11[3] = eax_3
                        ecx_11[4] = *(arg1[0xe] + (edx_2 << 2))
                        *(arg1[0xe] + (edx_2 << 2)) = ecx_11
                        arg1[0x10] += 1
                        *arg2 = *(esi_1 + 4)
                        return arg2
                    
                    var_1c_1 = "RegionAllocator::AllocRegion"
                    var_20 = 0x6e
                    ecx = "r.alloc == ALLOC_NONE"
                else
                    var_1c_1 = "RegionAllocator::AllocRegion"
                    var_20 = 0x6d
                    ecx = "r.mip == mip"
            else
                var_1c_1 = "RegionAllocator::FindNewRegion"
                var_20 = 0x150
                ecx = "best->mip > mip"
        else
            eax = sub_640d20(arg1, esi_1)
            int32_t temp1_1 = *esi_1
            
            if (temp1_1 s>= arg3)
                if (temp1_1 == arg3)
                    goto label_640887
                
                goto label_640856
            
            var_1c_1 = "RegionAllocator::FindNewRegion"
            var_20 = 0x142
            ecx = "best->mip >= mip"
    else if (esi_1[8] == 0)
        if (*esi_1 == arg3)
            goto label_640887
        
        var_1c_1 = "RegionAllocator::FindNewRegion"
        var_20 = 0x13b
        ecx = "best->mip == mip"
    else
        var_1c_1 = "RegionAllocator::FindNewRegion"
        var_20 = 0x13a
        ecx = "best->alloc == ALLOC_NONE"
else
    var_1c_1 = "RegionAllocator::AllocRegion"
    var_20 = 0x67
    ecx = "HasRegion(key) == false"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\TTFont.cpp", var_20, var_1c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

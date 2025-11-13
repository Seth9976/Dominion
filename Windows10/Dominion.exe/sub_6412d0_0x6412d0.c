// 函数: sub_6412d0
// 地址: 0x6412d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_c = arg1
uint32_t eax

if (arg2 == 0)
    eax.b = 0
    return eax

eax = zx.d(arg2.w)
char const* const var_44_6
int32_t var_40_6
char const* const var_3c_4
char* ecx_7

if (eax u>= arg1[8])
label_641438:
    var_3c_4 = "DataArray<struct RegionAllocator::Region>::DataArrayGet"
    var_40_6 = 0x6d
    var_44_6 = "C:\x\ax2017\Engine\DataArray.h"
    ecx_7 = "DataArrayTryToGet(id) != NULL"
else
    uint32_t ecx = eax * 9
    eax = arg1[7]
    uint32_t esi_1 = eax + (ecx << 3)
    
    if (*(eax + (ecx << 3) + 0x44) != arg2)
        goto label_641438
    
    if (*esi_1 == 0)
        void var_2c
        void var_1c
        *esi_1 = sub_641020(arg1, esi_1 + 4, esi_1 + 4, &var_1c, &var_2c)
        *(esi_1 + 0x30) = sub_6411d0(arg1, *(esi_1 + 0x28), &var_1c, 0)
        *(esi_1 + 0x2c) = sub_6411d0(arg1, *(esi_1 + 0x28), &var_2c, 0)
    
    int32_t edx_1 = *esi_1
    
    if (edx_1 s< arg3)
        eax.b = 0
        return eax
    
    uint32_t* edi_1
    
    if (edx_1 != arg3)
        edi_1 = arg4
    else
        if (*(esi_1 + 0x20) == 0)
            *arg4 = esi_1
            uint32_t* eax_4
            eax_4.b = 1
            return eax_4
        
        edi_1 = arg4
        uint32_t ecx_4 = *edi_1
        
        if (ecx_4 == 0)
            *edi_1 = esi_1
        else if (*(ecx_4 + 0x20) != 0 && (*(esi_1 + 0x24) s< *(ecx_4 + 0x24) || edx_1 s< *ecx_4))
            *edi_1 = esi_1
    
    eax = sub_6412d0(*(esi_1 + 0x30), arg3, edi_1)
    
    if (eax.b != 0)
        return eax
    
    eax = sub_6412d0(*(esi_1 + 0x2c), arg3, edi_1)
    
    if (eax.b != 0)
        return eax
    
    eax = *esi_1
    
    if (eax == arg3)
        eax.b = 0
        return eax
    
    if (eax s> arg3)
        if (*(esi_1 + 0x20) == 2)
            int32_t i = 0
            int32_t* ebx_2 = esi_1 + 0x34
            
            do
                eax = sub_6412d0(*ebx_2, arg3, arg4)
                
                if (eax.b != 0)
                    return eax
                
                i += 1
                ebx_2 = &ebx_2[1]
            while (i s< 4)
            
            edi_1 = arg4
        
        int32_t* ecx_9 = *edi_1
        
        if (ecx_9 == 0)
            *edi_1 = esi_1
        else
            int32_t edx_2 = *(esi_1 + 0x20)
            
            if (edx_2 == 0 && ecx_9[8] != edx_2)
                *edi_1 = esi_1
            else if ((ecx_9[8] != 0 || edx_2 == 0)
                    && (*(esi_1 + 0x24) s< ecx_9[9] || *esi_1 s< *ecx_9))
                *edi_1 = esi_1
        
        eax.b = 0
        return eax
    
    var_3c_4 = "RegionAllocator::FindNewRegionRec"
    var_40_6 = 0x187
    var_44_6 = "C:\x\ax2017\Engine\TTFont.cpp"
    ecx_7 = "r.mip > mip"

sub_63b870(eax, &data_801800, ecx_7, var_44_6, var_40_6, var_3c_4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

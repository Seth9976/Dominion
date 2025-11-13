// 函数: sub_640df0
// 地址: 0x640df0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* eax_2 = arg1
int32_t* result = arg2
int32_t ebx = arg3
int32_t* var_70 = eax_2
int32_t* result_1 = result
int32_t var_80 = ebx
char const* const var_98_2
int32_t var_94_2
char const* const var_90_2
char* ecx_12

if (result[8] != 0)
label_640fe5:
    var_90_2 = "RegionAllocator::PartitionSubdivide"
    var_94_2 = 0xde
    ecx_12 = "r.alloc == ALLOC_NONE"
label_640ff4:
    var_98_2 = "C:\x\ax2017\Engine\TTFont.cpp"
else
    while (true)
        int32_t edx_1 = *result
        
        if (edx_1 == ebx)
            CookieCheckFunction(result)
            return result
        
        if (edx_1 s<= ebx)
            var_90_2 = "RegionAllocator::PartitionSubdivide"
            var_94_2 = 0xe0
            ecx_12 = "r.mip > mip"
            goto label_640ff4
        
        if (edx_1 s<= 1)
            var_90_2 = "RegionAllocator::PartitionSubdivide"
            var_94_2 = 0xe1
            ecx_12 = "r.mip > 1"
            goto label_640ff4
        
        if (result[0xd] == 0)
            int32_t edi_1 = result[1]
            int32_t esi_1 = result[2]
            int32_t eax_5
            int32_t edx_3
            edx_3:eax_5 = sx.q(result[3] - edi_1)
            int32_t eax_7 = (eax_5 - edx_3) s>> 1
            int32_t eax_9
            int32_t edx_4
            edx_4:eax_9 = sx.q(result[4] - esi_1)
            int32_t eax_11 = (eax_9 - edx_4) s>> 1
            int32_t edx_6 = eax_7 + edi_1
            int32_t esi_3 = eax_11 + result_1[2]
            int32_t var_58_1 = result_1[2] + eax_11
            int32_t var_5c_1 = edi_1 + eax_7
            int32_t var_60_1 = result_1[2]
            int32_t var_60_2 = esi_1
            int32_t var_5c_2 = eax_7 + edx_6
            int32_t var_58_2 = eax_11 + esi_1
            int128_t var_4c = edi_1.o
            int32_t var_60_3 = esi_3
            int32_t esi_5 = edi_1 + eax_7
            int32_t var_5c_3 = edi_1 + eax_7
            int32_t var_58_3 = esi_3 + eax_11
            int32_t edx_11 = result_1[2] + eax_11
            int128_t var_3c_1 = edx_6.o
            int32_t var_58_4 = edx_11 + eax_11
            int32_t i_1 = 4
            int32_t* result_2 = result_1
            int32_t var_5c_4 = esi_5 + eax_7
            int128_t var_2c_1 = edi_1.o
            int32_t var_60_4 = edx_11
            int128_t* edi_7 = &var_4c
            int32_t ecx_8 = result_2[0x11]
            void* esi_6 = &result_2[0xd]
            int32_t var_74_2 = ecx_8
            int128_t var_1c_1 = esi_5.o
            int32_t i
            
            do
                int32_t eax_21 = sub_6411d0(var_70, ecx_8, edi_7, *result_2 - 1)
                ecx_8 = var_74_2
                esi_6 += 4
                *(esi_6 - 4) = eax_21
                edi_7 = &edi_7[1]
                result_2 = result_1
                i = i_1
                i_1 -= 1
            while (i != 1)
            eax_2 = var_70
            ebx = var_80
        
        int32_t edx_12 = result[0xd]
        
        if (edx_12 == 0)
            var_90_2 = "DataArray<struct RegionAllocator::Region>::DataArrayGet"
            var_94_2 = 0x6c
            var_98_2 = "C:\x\ax2017\Engine\DataArray.h"
            ecx_12 = "id != DATAID_NULL"
            break
        
        uint32_t ecx_10 = zx.d(edx_12.w)
        
        if (ecx_10 u< eax_2[8])
            eax_2 = eax_2[7]
            result = &eax_2[ecx_10 * 0x12]
            result_1 = result
            
            if (result[0x11] == edx_12)
                if (result[8] != 0)
                    goto label_640fe5
                
                eax_2 = var_70
                continue
        
        var_90_2 = "DataArray<struct RegionAllocator::Region>::DataArrayGet"
        var_94_2 = 0x6d
        var_98_2 = "C:\x\ax2017\Engine\DataArray.h"
        ecx_12 = "DataArrayTryToGet(id) != NULL"
        break

sub_63b870(eax_2, &data_801800, ecx_12, var_98_2, var_94_2, var_90_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

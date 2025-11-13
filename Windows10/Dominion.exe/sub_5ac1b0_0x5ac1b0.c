// 函数: sub_5ac1b0
// 地址: 0x5ac1b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1

if (arg1 == 0)
    return 

uint32_t eax_1 = zx.d(arg1.w)
int32_t* edi_2

if (eax_1 u< data_b4a5c4)
    edi_2 = eax_1 * 0x510c + data_b4a5c0

if (eax_1 u>= data_b4a5c4 || edi_2[0x1442] != arg1)
    sub_63b870(eax_1, &data_801800, "DataArrayTryToGet(id) != NULL", 
        "C:\x\ax2017\Engine\DataArray.h", 0x6d, "DataArray<struct CampaignMapTask>::DataArrayGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_2 = *edi_2

if (eax_2 == 0)
    for (int32_t* i = data_b4a5dc; i != 0; i = i[1])
        if (*i == arg1)
            if (i != 0)
                void* edx_1 = i[2]
                int32_t eax_3 = i[1]
                
                if (edx_1 == 0)
                    data_b4a5dc = eax_3
                else
                    *(edx_1 + 4) = eax_3
                
                void* edx_2 = i[1]
                int32_t eax_4 = i[2]
                
                if (edx_2 == 0)
                    data_b4a5e0 = eax_4
                else
                    *(edx_2 + 8) = eax_4
                
                data_b4a5e4 -= 1
                sub_64c080(i, 0xc)
            
            break
else if (eax_2 == 1)
    HANDLE esi_1 = data_b4a61c
    WaitForSingleObject(esi_1, 0xffffffff)
    CloseHandle(esi_1)
    data_b4a61c = 0
    *(data_b4a618 + 4) = 0
else if (eax_2 == 2)
    sub_69ec60(edi_2[0x141f])
    *(data_b4a618 + 4) = 0

int32_t ecx_1 = data_b4a5cc
data_b4a5cc = zx.d(edi_2[0x1442].w)
edi_2[0x1442] = ecx_1
data_b4a5d0 -= 1

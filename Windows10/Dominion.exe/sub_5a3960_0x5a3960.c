// 函数: sub_5a3960
// 地址: 0x5a3960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_b4a5e4 == 0 || TryEnterCriticalSection(&data_b4a600) == 0)
    return 

EnterCriticalSection(&data_b4a5e8)
void* eax_1 = data_b4a618

if (*(eax_1 + 4) == 0)
    *(eax_1 + 4) = 1
    int32_t* ecx_1 = data_b4a5dc
    void* eax_2 = ecx_1[1]
    data_b4a5dc = eax_2
    
    if (eax_2 == 0)
        data_b4a5e0 = 0
    else
        *(eax_2 + 8) = 0
    
    int32_t esi_1 = *ecx_1
    data_b4a5e4 -= 1
    sub_64c080(ecx_1, 0xc)
    int32_t* eax_3 = data_b4a618
    *eax_3 = esi_1
    int32_t var_14_1
    char* ecx_2
    
    if (esi_1 == 0)
        char const* const var_10 = "DataArray<struct CampaignMapTask>::DataArrayGet"
        var_14_1 = 0x6c
        ecx_2 = "id != DATAID_NULL"
    label_5a3a81:
        sub_63b870(eax_3, &data_801800, ecx_2, "C:\x\ax2017\Engine\DataArray.h", var_14_1, 
            "DataArray<struct CampaignMapTask>::DataArrayGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_3 = zx.d(esi_1.w)
    int32_t* edi_2
    
    if (eax_3 u< data_b4a5c4)
        edi_2 = eax_3 * 0x510c + data_b4a5c0
    
    if (eax_3 u>= data_b4a5c4 || edi_2[0x1442] != esi_1)
        char const* const var_10_1 = "DataArray<struct CampaignMapTask>::DataArrayGet"
        var_14_1 = 0x6d
        ecx_2 = "DataArrayTryToGet(id) != NULL"
        goto label_5a3a81
    
    memcpy(data_b4a618 + 8, &edi_2[1], 0x5104)
    *edi_2 = 1
    data_b4a61c =
        CreateThread(nullptr, 0x100000, sub_5a3900, nullptr, THREAD_CREATE_RUN_IMMEDIATELY, nullptr)

LeaveCriticalSection(&data_b4a5e8)
LeaveCriticalSection(&data_b4a600)

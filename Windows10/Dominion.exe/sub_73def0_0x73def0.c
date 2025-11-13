// 函数: sub_73def0
// 地址: 0x73def0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_6e5ab0(data_147df48)
int32_t* ecx_1 = *eax
eax[0xb] = arg1
eax[0xf] = arg2

if (ecx_1[1] == 0x18)
    void* eax_1 = sub_5af880(ecx_1)
    int32_t esi_1 = 0
    
    if (*(eax_1 + 0x28) s<= 0)
    label_73df64:
        esi_1 = 0xffffffff
    else
        int32_t edi_1 = 0
        
        while (strncmp(*(*(eax_1 + 0x20) + edi_1), "world locator", 0xd) != 0)
            esi_1 += 1
            edi_1 += 0x18
            
            if (esi_1 s>= *(eax_1 + 0x28))
                goto label_73df64
    
    int32_t* edi_2 = eax
    eax = edi_2[0x24]
    edi_2[0x1e] = esi_1
    data_147df4c = eax
    int32_t* ecx_2 = *edi_2
    
    if (ecx_2[1] == 0x18)
        void** eax_4 = sub_5af880(ecx_2)
        char* edx
        
        if (eax_4[2] s<= 0)
            edx = nullptr
        else
            eax_4 = *eax_4
            edx = *eax_4
        
        sub_6e68f0(eax_4, edx, edi_2, 1f, 0)
        void* result = sub_73d850(edi_2, 1)
        data_147df50 = 0
        return result

sub_63b870(eax, &data_801800, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
    "C:\x\ax2017\Engine\AssetUtils.cpp", 0x2ed, "FlanimGetDef")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

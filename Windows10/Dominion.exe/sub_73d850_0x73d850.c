// 函数: sub_73d850
// 地址: 0x73d850
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = *arg1

if (ecx[1] != 0x18)
    sub_63b870(arg1, &data_801800, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
        "C:\x\ax2017\Engine\AssetUtils.cpp", 0x2ed, "FlanimGetDef")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* result = sub_5af880(ecx)
void* result_2 = result
int32_t i = 0
void* result_3 = result_2

if (*(result_2 + 0x28) s> 0)
    int32_t esi_1 = 0
    result = nullptr
    void* result_1 = nullptr
    
    do
        void* ebx_2 = *(result_2 + 0x20) + result
        int32_t eax_1 = strstr(*ebx_2, "eyelid")
        int32_t eax_2
        
        if (eax_1 == 0)
            eax_2 = strstr(*ebx_2, "eye_lid")
        
        if (eax_1 != 0 || eax_2 != 0)
            *(arg1[0x1a] + esi_1 + 0x5c) = arg2
        
        result_2 = result_3
        i += 1
        esi_1 += 0x68
        result = result_1 + 0x18
        result_1 = result
    while (i s< *(result_2 + 0x28))

return result

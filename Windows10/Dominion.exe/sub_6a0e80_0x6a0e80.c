// 函数: sub_6a0e80
// 地址: 0x6a0e80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* eax_7 = data_147ac30

if (*eax_7 == 0)
    return 0

EnterCriticalSection(&eax_7[4])
void* ebx = data_147ac30
int32_t result = 0

for (int32_t i = 0; i s< 0x50; i += 8)
    int32_t eax_2 = *(i + ebx + 0x24)
    
    if (eax_2 == 2)
        int32_t* ecx_1 = *(i + ebx + 0x28)
        
        if (ecx_1[1] != 3)
            sub_63b870(eax_2, &data_801800, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                "C:\x\ax2017\Engine\Texture.h", 0x89, "TextureGetDef")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        **(sub_5af880(ecx_1) + 0x18) = 1
        sub_6a0f60(*(i + ebx + 0x28))
        sub_6a0de0(*(i + ebx + 0x28))
        *(i + ebx + 0x24) = 0
        *(i + ebx + 0x28) = 0
        ebx = data_147ac30
    else if (eax_2 == 3)
        *(i + ebx + 0x24) = 0
        *(i + ebx + 0x28) = 0
    else if (eax_2 == 1)
        result += 1

LeaveCriticalSection(ebx + 4)
return result

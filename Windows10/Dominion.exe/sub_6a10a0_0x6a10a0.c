// 函数: sub_6a10a0
// 地址: 0x6a10a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
int32_t edx = *(arg1 + 8)

if (edx != 0)
    (*(*data_147b070 + 0x14))(edx)
    *(arg1 + 8) = 0

int32_t result = *(arg1 + 0x10)

if (result != 0)
    result = _aligned_free(result)
    *(arg1 + 0x10) = 0

if (*(arg1 + 0x18) == 0)
    return result

int32_t* eax_4 = EnterCriticalSection(data_147ac30 + 4)
void* ebx
ebx:1.b = 1

while (true)
    ebx.b = 0
    int32_t edi_1 = 0
    
    while (true)
        int32_t esi_1 = data_147ac30
        
        if (*(edi_1 + esi_1 + 0x24) == 0)
            goto label_6a1159
        
        int32_t* ecx_1 = *(edi_1 + esi_1 + 0x28)
        char const* const var_20
        int32_t var_1c
        char const* const var_18_7
        char* ecx_3
        
        if (ecx_1[1] != 3)
            var_18_7 = "TextureGetDef"
            var_1c = 0x89
            var_20 = "C:\x\ax2017\Engine\Texture.h"
            ecx_3 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
        label_6a11da:
            sub_63b870(eax_4, &data_801800, ecx_3, var_20, var_1c, var_18_7)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        eax_4 = sub_5af880(ecx_1)
        
        if (eax_4 != arg1)
            goto label_6a1159
        
        ebx.b = 1
        
        if (*(edi_1 + esi_1 + 0x24) == 1)
            LeaveCriticalSection(data_147ac30 + 4)
            Sleep(0x64)
            eax_4 = EnterCriticalSection(data_147ac30 + 4)
        else
            ebx:1.b = 0
            eax_4 = sub_6a0de0(*(edi_1 + esi_1 + 0x28))
            *(edi_1 + esi_1 + 0x24) = 0
            *(edi_1 + esi_1 + 0x28) = 0
        label_6a1159:
            edi_1 += 8
            
            if (edi_1 s< 0x50)
                continue
            else if (ebx.b == 0)
                var_18_7 = "TextureUnbindGraphicsBuffers"
                var_1c = 0x36e
                var_20 = "C:\x\ax2017\Engine\Texture.cpp"
                ecx_3 = "foundIt"
                goto label_6a11da
        
        if (ebx:1.b != 0)
            break
        
        return LeaveCriticalSection(data_147ac30 + 4)

// 函数: sub_6d98a0
// 地址: 0x6d98a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax_1 = *arg2

if (eax_1 == 0)
    int32_t var_8_1 = arg1
    return sub_63b5f0("Missing import data on '%s'")

int32_t edx_1 = *eax_1
int32_t ecx_1 = 0

if (edx_1 s<= 0)
    return eax_1

int32_t* eax_3 = *(eax_1 + 8) + 0x3c
char eax_4

while (true)
    int32_t var_c
    char* ecx_2
    
    if (eax_3[-1] != 0)
        char const* const var_8_3 = "StructureLoad"
        var_c = 0x1b6
        ecx_2 = "pSubMesh->subMeshData.vertexBufferHandle == 0"
    else if (*eax_3 != 0)
        char const* const var_8_2 = "StructureLoad"
        var_c = 0x1b7
        ecx_2 = "pSubMesh->subMeshData.indexBufferHandle == 0"
    else
        ecx_1 += 1
        eax_3 = &eax_3[0x54]
        
        if (ecx_1 s>= edx_1)
            return eax_3
        
        continue
    
    sub_63b870(eax_3, &data_801800, ecx_2, "C:\x\ax2017\Engine\Structure.cpp", var_c, 
        "StructureLoad")
    eax_4 = sub_63bc30()
    break

if (eax_4 == 0)
    noreturn sub_63bb00() __tailcall

breakpoint

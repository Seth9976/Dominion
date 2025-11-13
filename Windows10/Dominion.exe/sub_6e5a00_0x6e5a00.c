// 函数: sub_6e5a00
// 地址: 0x6e5a00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t* ecx = arg1[0x1a]
void* edi = &arg1[0x1a]
void* var_8_1
void* eax

if (ecx == 0)
    var_8_1 = edi
else
    sub_64c080(ecx, arg1[0x1b] * 0x68)
    eax = &arg1[0x1a]
    *edi = 0
    var_8_1 = eax

int32_t* ecx_1 = *arg1

if (ecx_1[1] != 0x18)
    sub_63b870(eax, &data_801800, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
        "C:\x\ax2017\Engine\AssetUtils.cpp", 0x2ed, "FlanimGetDef")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_1 = sub_5af880(ecx_1)
int32_t* result = *(eax_1 + 0x28)
arg1[0x1b] = result

if (*(eax_1 + 0x28) s> 0)
    result = sub_64c020(result * 0x68)
    *edi = result
    edi = var_8_1

int32_t i = 0

if (*(eax_1 + 0x28) s> 0)
    int32_t edx_2 = 0
    
    do
        edx_2 += 0x68
        result = 0xffffffff
        i += 1
        *(*edi + edx_2 - 8) = 0xffffffff
    while (i s< *(eax_1 + 0x28))

return result

// 函数: sub_739120
// 地址: 0x739120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1

if (arg1[1] != 0x12)
    return 

void* i = sub_5af880(arg1)
void* i_2 = i
void* i_1 = nullptr

if (*(i_2 + 0x1c) s<= 0)
    return 

int32_t edi_1 = 0

do
    int32_t* esi_1 = *(i_2 + 0x20)
    int32_t* ecx = *(esi_1 + edi_1)
    
    if (ecx[1] != 3)
        sub_63b870(i, &data_801800, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
            "C:\x\ax2017\Engine\Texture.h", 0x89, "TextureGetDef")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    *(*sub_5af880(ecx) + 0x30) = 1
    sub_735fb0(*(esi_1 + edi_1))
    edi_1 += 0x30
    i = i_1 + 1
    i_1 = i
while (i s< *(i_2 + 0x1c))

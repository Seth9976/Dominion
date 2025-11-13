// 函数: sub_681b40
// 地址: 0x681b40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_11 = data_147abe4

if (*(eax_11 + 0x1c) == 0)
    sub_63b870(eax_11, &data_801800, "gpSpriteAppData->materialBound", 
        "C:\x\ax2017\Engine\Sprite.cpp", 0x5c, "SpritePutMaterialInCache")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* eax = sub_64bfd0(0xf08)
eax[3] += 1
void* var_18
int32_t* edi

if (eax[4] != 0xffffffff)
    if (*eax == 0)
        sub_64be70(eax)
    
    edi = *eax
    int32_t var_10_1 = 0xf04
    int32_t var_14_1 = 0
    *eax = *edi
    var_18 = &edi[1]
else
    edi = sub_687730(0xf08)
    int32_t var_10 = 0xf04
    int32_t var_14 = 0
    var_18 = &edi[1]

memset(var_18, 0, 0xf04)
*edi = arg1
sub_6d8660(&edi[1], arg1)
void* esi_1 = data_147abe4
int32_t* eax_4 = sub_64bfd0(0xc)
eax_4[3] += 1

if (*eax_4 == 0)
    sub_64be70(eax_4)

int32_t* ecx_4 = *eax_4
*eax_4 = *ecx_4
ecx_4[2] = 0
*ecx_4 = edi
ecx_4[1] = 0
ecx_4[2] = *(esi_1 + 0x44)
void* eax_7 = *(esi_1 + 0x44)

if (eax_7 == 0)
    *(esi_1 + 0x48) += 1
    *(esi_1 + 0x40) = ecx_4
    *(esi_1 + 0x44) = ecx_4
    return &edi[1]

*(eax_7 + 4) = ecx_4
*(esi_1 + 0x48) += 1
*(esi_1 + 0x44) = ecx_4
return &edi[1]

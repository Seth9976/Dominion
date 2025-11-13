// 函数: sub_6de590
// 地址: 0x6de590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1[3] == 0)
    return 

void** i_1 = arg1[1]
void* esi_1 = nullptr
void** i = i_1
int32_t xmm0_1 = (zx.o(0)).d
int32_t var_24_1
void* eax
char const* const ecx

if (i == 0)
label_6de6b1:
    char const* const var_20_4 = "AnimationAccumBonePosition"
    var_24_1 = 0x262
    ecx = "totalWeight > EPSILON"
label_6de6ca:
    sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\Animation.cpp", var_24_1, 
        "AnimationAccumBonePosition")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

do
    eax = *i
    i = i[1]
    int32_t edx = *(eax + 0x20)
    
    if (edx != 2 && edx != 4)
        xmm0_1 = xmm0_1 f+ *(eax + 0x14)
        
        if (esi_1 != 0)
            eax = esi_1
        
        esi_1 = eax
while (i != 0)

if (xmm0_1 f<= 9.99999975e-06f)
    goto label_6de6b1

if (esi_1 == 0)
    char const* const var_20_1 = "AnimationAccumBonePosition"
    var_24_1 = 0x263
    ecx = "pAnimSetBase != NULL"
    goto label_6de6ca

do
    void* esi_2 = *i_1
    i_1 = i_1[1]
    eax = sub_6dda80(arg1, esi_2)
    int32_t ecx_2 = *(esi_2 + 0x20)
    int32_t var_20_2
    
    if (ecx_2 == 4)
        var_20_2 = ecx_2
        sub_6de2c0(eax, esi_2 + 0x2c, eax, *(esi_2 + 4), 1f, *(esi_2 + 0xac), *(esi_2 + 0xb0), arg2)
    else if (ecx_2 != 2)
        var_20_2 = ecx_2
        sub_6de2c0(eax, esi_2 + 0x2c, eax, *(esi_2 + 4), *(esi_2 + 0x14) f/ xmm0_1, 
            *(esi_2 + 0xac), *(esi_2 + 0xb0), arg2)
while (i_1 != 0)

int32_t* i_2 = arg1[1]

while (i_2 != 0)
    void* esi_3 = *i_2
    i_2 = i_2[1]
    int32_t ecx_5
    eax, ecx_5 = sub_6dda80(arg1, esi_3)
    
    if (*(esi_3 + 0x20) == 2)
        int32_t var_20_3 = ecx_5
        sub_6de150(eax, eax, arg1[*(esi_3 + 0x28) * 3 + 7], *(esi_3 + 4), *(esi_3 + 0x24), arg2)

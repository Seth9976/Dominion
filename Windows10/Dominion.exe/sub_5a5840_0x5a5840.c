// 函数: sub_5a5840
// 地址: 0x5a5840
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int32_t* edx
ecx, edx = __chkstk(0x10028)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
int32_t i = 0
int32_t* ecx_1 = ecx + 0xeffc0
int32_t var_10010
void* esi = &var_10010 - edx
int32_t i_2 = 0
int32_t* edi = edx
int32_t* var_10018 = ecx_1
void* var_10024 = esi

do
    *(esi + edi) = i
    int32_t j_1 = 0xffffffff
    *edi = 0x38800000
    int32_t xmm1_1 = 0x47c34f80
    int32_t esi_2 = *ecx_1 + 0x3fff0
    int32_t j = *(ecx + (esi_2 << 2))
    int32_t* esi_3 = ecx + (esi_2 << 2)
    
    for (; j != 0xffffffff; j = *esi_3)
        int32_t xmm2_1 = xmm1_1
        int32_t xmm0_1 = *(ecx + j * 0xc + 8)
        
        if (not(xmm1_1 f< xmm0_1))
            xmm1_1 = xmm0_1
        
        if (xmm2_1 f< xmm0_1)
            j = j_1
        
        esi_3 = &esi_3[1]
        j_1 = j
    
    esi = var_10024
    ecx_1 = &var_10018[1]
    var_10018 = ecx_1
    *(arg2 - edx + edi) = j_1
    edi = &edi[1]
    i = i_2 + 1
    i_2 = i
while (i s< 0x4000)

int32_t __saved_edi
sub_5acc00(i, &__saved_edi, &var_10010, 0x4000, ecx)
int32_t var_1000c
int32_t eax_7 = var_1000c * 3

if (*(ecx + var_10010 * 0xc + 8) f< *(ecx + (eax_7 << 2) + 8))
    sub_63b870(eax_7, &data_801800, "mesh.points[idxs[0]].z >= mesh.points[idxs[1]].z", 
        "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp", 0x49e, "CalcFlux")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t i_1

for (i_1 = 0; i_1 s< 0x4000; i_1 += 1)
    int32_t edx_4 = (&var_10010)[i_1]
    int32_t ecx_5 = *(arg2 + (edx_4 << 2))
    
    if (ecx_5 s>= 0)
        edx[ecx_5] = edx[edx_4] f+ edx[ecx_5]

CookieCheckFunction(i_1)
return i_1

// 函数: sub_4f4c40
// 地址: 0x4f4c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t xmm1 = 0xc479c000
uint32_t ebx
ebx.b = 0
void* i_3 = 0xffffffff
int32_t esi = 0xffffffff
int32_t i_5 = *(arg3 + 0xd4)
int32_t var_28
char const* const ecx_4

if (i_5 s<= 0)
label_4f4d32:
    char const* const var_24_1 = "NodeMaxChild"
    var_28 = 0x182e
    ecx_4 = "maxVisits > 0"
else
    int32_t i_4 = i_5
    arg1 = *(arg3 + 0xd0) + 0x4c
    int32_t i
    
    do
        bool cond:0_1 = *arg1 s> 0
        arg1 += 0x54
        ebx = zx.d(ebx.b)
        
        if (cond:0_1)
            ebx = 1
        
        i = i_4
        i_4 -= 1
    while (i != 1)
    int32_t* ecx_1 = *(arg3 + 0xd0) + 0x38
    int32_t i_1
    
    do
        if ((ebx.b == 0 || ecx_1[5] != 0) && *ecx_1 s> esi)
            esi = *ecx_1
        
        ecx_1 = &ecx_1[0x15]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    
    if (esi s<= 0)
        goto label_4f4d32
    
    void* i_2 = nullptr
    arg1 = arg3
    
    if (*(arg1 + 0xd4) s> 0)
        void* eax_2 = *(arg1 + 0xd0)
        int32_t* ecx_2 = eax_2 + 0x38
        void* edi_2 = eax_2 + ((arg2 + 7) << 2)
        
        do
            if ((ebx.b == 0 || ecx_2[5] != 0) && *ecx_2 s>= esi)
                int32_t xmm0_1 = *edi_2
                
                if (not(xmm0_1 f<= xmm1))
                    xmm1 = xmm0_1
                    i_3 = i_2
            
            i_2 += 1
            ecx_2 = &ecx_2[0x15]
            edi_2 += 0x54
        while (i_2 s< *(arg3 + 0xd4))
        
        arg1 = i_3
        
        if (arg1 s>= 0)
            *arg4 = esi
            return arg1
    
    char const* const var_24 = "NodeMaxChild"
    var_28 = 0x1842
    ecx_4 = "best_i >= 0"

sub_63b870(arg1, &data_801800, ecx_4, "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", var_28, 
    "NodeMaxChild")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

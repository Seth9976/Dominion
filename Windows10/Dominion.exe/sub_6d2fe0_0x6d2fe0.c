// 函数: sub_6d2fe0
// 地址: 0x6d2fe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *(arg3 + 0x7c)
int64_t var_28 = *(arg3 + 0x74)
uint32_t var_8 = 0xffffffff
char* edi = var_28.d
int32_t ecx

if (esi s< 0)
    var_28:4.d = esi
    ecx = esi
label_6d30e6:
    int32_t eax_7 = arg2 + ecx
    
    if (eax_7 s> esi || eax_7 s< 0 || eax_7 s>= esi)
        eax_7.b = 0
    else
        eax_7.b = edi[eax_7]
    
    var_8 = zx.d(eax_7.b)
else
    ecx = 0
    var_28:4.d = 0
    
    if (esi s<= 0)
        goto label_6d30e6
    
    int32_t ebx
    ebx.b = *edi
    int32_t edx = 1
    ecx = 1
    
    if (ebx.b == 0)
        goto label_6d30e6
    
    if (ebx.b == 3)
        uint32_t eax
        
        if (1 s< esi)
            eax.b = edi[1]
            edx = 2
        else
            eax.b = 0
        
        uint32_t ecx_1 = zx.d(eax.b)
        
        if (edx s< esi)
            eax.b = edi[edx]
            edx += 1
        else
            eax.b = 0
        
        uint32_t ecx_3 = ecx_1 << 8 | zx.d(eax.b)
        uint32_t eax_1
        
        if (edx s< esi)
            eax_1.b = edi[edx]
            edx += 1
        else
            eax_1.b = 0
        
        uint32_t ecx_4 = zx.d(eax_1.b)
        
        if (edx s< esi)
            eax_1.b = edi[edx]
            edx += 1
        else
            eax_1.b = 0
        
        int32_t ebx_1 = 0
        uint32_t var_c_1 = ecx_4 << 8 | zx.d(eax_1.b)
        
        if (ecx_3 u> 0)
            uint32_t var_18_1
            
            while (true)
                uint32_t eax_2
                
                if (edx s< esi)
                    eax_2.b = edi[edx]
                    edx += 1
                else
                    eax_2.b = 0
                
                var_18_1 = zx.d(eax_2.b)
                uint32_t eax_3
                
                if (edx s< esi)
                    eax_3.b = edi[edx]
                    edx += 1
                else
                    eax_3.b = 0
                
                uint32_t ecx_6
                
                if (edx s< esi)
                    ecx_6.b = edi[edx]
                    edx += 1
                else
                    ecx_6.b = 0
                
                eax_2 = zx.d(eax_3.b) << 8 | zx.d(ecx_6.b)
                
                if (arg2 s>= var_c_1 && arg2 s< eax_2)
                    break
                
                ebx_1 += 1
                var_c_1 = eax_2
                
                if (ebx_1 s>= ecx_3)
                    goto label_6d3111
            
            var_8 = var_18_1
label_6d3111:
uint32_t eax_8 = *(arg3 + 0x70)
int64_t var_4c = *(arg3 + 0x68)
int64_t* eax_10 = sub_6d17c0(&var_28, &var_4c, var_8, &var_28, var_4c, eax_8)
int32_t eax_11 = eax_10[1].d
var_4c = *eax_10
int32_t var_44_1 = eax_11
int32_t var_50_1 = *(arg3 + 0x40)
void var_34
int32_t* eax_13 = sub_6d1980(&var_34, (*(arg3 + 0x38)).d)
int32_t ecx_9 = eax_13[2]
*arg4 = *eax_13
arg4[1].d = ecx_9
return arg4

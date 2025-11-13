// 函数: sub_594620
// 地址: 0x594620
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg2
int32_t* edi = arg3
int32_t* var_8 = ebx
int32_t* var_18 = edi
void* eax_2 = (ebx - edi) & 0xfffffffc
int32_t eax_14
int32_t* var_1c

if (eax_2 s<= 0x80)
label_5946b0:
    eax_14 = arg5
    int32_t var_c = eax_14
    
    if (edi != ebx)
        int32_t* ebx_1 = &edi[1]
        var_1c = ebx_1
        
        while (ebx_1 != var_8)
            int32_t esi_3 = *ebx_1
            int32_t* var_14_1 = ebx_1
            
            if (sub_586690(&var_c, esi_3, *edi) == 0)
                void* esi_5 = &ebx_1[-1]
                
                if (sub_586690(&var_c, esi_3, ebx_1[-1]) != 0)
                    int32_t* ebx_4 = var_14_1
                    char i
                    
                    do
                        *ebx_4 = *esi_5
                        ebx_4 = esi_5
                        int32_t var_30_8 = *(esi_5 - 4)
                        esi_5 -= 4
                        i = sub_586690(&var_c, esi_3, var_30_8)
                    while (i != 0)
                    edi = var_18
                    var_14_1 = ebx_4
                    ebx_1 = var_1c
                
                eax_14 = esi_3
                *var_14_1 = eax_14
            else
                uint32_t count = ebx_1 - edi
                eax_14 = memmove(ebx_1 - count + 4, edi, count)
                *edi = esi_3
            
            ebx_1 = &ebx_1[1]
            var_1c = ebx_1
else
    int32_t esi_1 = arg4
    
    while (true)
        if (esi_1 s<= 0)
            int32_t ebx_2 = ebx - edi
            eax_14 = ebx_2 s>> 2
            int32_t i_1 = eax_14 s>> 1
            
            while (i_1 s> 0)
                int32_t* eax_16 = edi[i_1 - 1]
                i_1 -= 1
                int32_t var_30_5 = arg5
                var_1c = eax_16
                sub_596940(&var_1c, i_1, edi, eax_14, &var_1c)
            
            if (eax_14 s< 2)
                break
            
            int32_t i_2
            
            do
                var_1c = *(edi + ebx_2 - 4)
                *(edi + ebx_2 - 4) = *edi
                int32_t var_30_6 = arg5
                int32_t eax_21 = (ebx_2 - 4) s>> 2
                sub_596940(eax_21, 0, edi, eax_21, &var_1c)
                ebx_2 -= 4
                i_2 = ebx_2 & 0xfffffffc
            while (i_2 s>= 8)
            
            return i_2
        
        int32_t* var_20
        sub_595620(eax_2, edi, &var_20, ebx, arg5)
        esi_1 = (esi_1 s>> 1) + (esi_1 s>> 2)
        
        if (((var_20 - edi) & 0xfffffffc) s>= ((ebx - var_1c) & 0xfffffffc))
            sub_594620(esi_1, arg5)
            ebx = var_20
            var_8 = ebx
        else
            sub_594620(esi_1, arg5)
            edi = var_1c
            var_18 = edi
        
        eax_2 = (ebx - edi) & 0xfffffffc
        
        if (eax_2 s<= 0x80)
            goto label_5946b0
return eax_14

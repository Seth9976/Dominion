// 函数: sub_5c94e0
// 地址: 0x5c94e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = arg2
int32_t* ebx = arg3
int32_t* var_c = edi
void* i = (edi - ebx) & 0xfffffffc
int32_t* var_14

if (i s> 0x80)
    int32_t esi_1 = arg4
    
    do
        if (esi_1 s<= 0)
            int32_t edi_2 = edi - ebx
            i = edi_2 s>> 2
            int32_t j = i s>> 1
            
            while (j s> 0)
                int32_t* eax_16 = ebx[j - 1]
                j -= 1
                var_14 = eax_16
                sub_5c9a70(&var_14, j, ebx, i, &var_14, arg5)
            
            if (i s>= 2)
                do
                    var_14 = *(ebx + edi_2 - 4)
                    *(ebx + edi_2 - 4) = *ebx
                    int32_t eax_21 = (edi_2 - 4) s>> 2
                    sub_5c9a70(eax_21, 0, ebx, eax_21, &var_14, arg5)
                    edi_2 -= 4
                    i = edi_2 & 0xfffffffc
                while (i s>= 8)
            
            goto label_5c965a
        
        int32_t* var_1c
        sub_5c96f0(i, ebx, &var_1c, edi, arg5)
        esi_1 = (esi_1 s>> 1) + (esi_1 s>> 2)
        int32_t* var_18
        
        if (((var_1c - ebx) & 0xfffffffc) s>= ((edi - var_18) & 0xfffffffc))
            sub_5c94e0(esi_1, arg5)
            edi = var_1c
            var_c = edi
        else
            sub_5c94e0(esi_1, arg5)
            ebx = var_18
        
        i = (edi - ebx) & 0xfffffffc
    while (i s> 0x80)

if (ebx != edi)
    int32_t* edi_1 = &ebx[1]
    var_14 = edi_1
    
    if (edi_1 != var_c)
        while (true)
            int32_t edx_3 = data_ccea08
            int32_t eax_9 = *edi_1
            int32_t ecx_6 = *ebx
            int32_t* var_10_1 = edi_1
            int32_t var_8_1 = eax_9
            
            if (edx_3 == 0)
            label_5c96cb:
                sub_63b870(eax_9, &data_801800, "gPile.fnItemCompare", 
                    "C:\x\ax2017\Jams\Dominion\code\PileLayout.cpp", 0x16, "ItemCompare")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            int32_t eax_10 = edx_3(eax_9, ecx_6, arg5)
            
            if (eax_10 s< 0)
                break
            
            if (eax_10 s<= 0)
                eax_9 = var_8_1
            
            int32_t eax_14
            
            if (eax_10 s<= 0 && eax_9 s>= ecx_6)
                while (true)
                    int32_t edx_5 = data_ccea08
                    edi_1 -= 4
                    int32_t ecx_10 = *edi_1
                    
                    if (edx_5 == 0)
                        goto label_5c96cb
                    
                    int32_t eax_23 = edx_5(eax_9, ecx_10, arg5)
                    
                    if (eax_23 s< 0)
                        eax_14 = var_8_1
                    else
                        if (eax_23 s<= 0)
                            eax_14 = var_8_1
                        
                        if (eax_23 s> 0 || eax_14 s< ecx_10)
                            int32_t* ecx_11 = var_10_1
                            var_10_1 = edi_1
                            *ecx_11 = *edi_1
                        label_5c965b:
                            eax_9 = var_8_1
                            continue
                    
                    edi_1 = var_14
                    *var_10_1 = eax_14
                    break
            else
                uint32_t count = edi_1 - ebx
                memmove(edi_1 - count + 4, ebx, count)
                eax_14 = var_8_1
                *ebx = eax_14
            
            edi_1 = &edi_1[1]
            var_14 = edi_1
            
            if (edi_1 == var_c)
                return eax_14
        
        goto label_5c965b

label_5c965a:
return i

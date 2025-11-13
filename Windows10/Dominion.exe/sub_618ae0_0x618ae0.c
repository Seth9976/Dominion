// 函数: sub_618ae0
// 地址: 0x618ae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_1 = &sub_4b9480()[8]
void* var_10 = eax_1

if ((*eax_1 & 1) == 0)
    int64_t var_20
    void* var_c
    eax_1 = sub_4daf40(&var_c, &var_20:4)
    int32_t esi_1 = 0
    
    if (eax_1 s> 0)
        while (true)
            char eax_3 = sub_4db7a0(*(var_c + (esi_1 << 2)), arg2)
            
            if (eax_3 != 0)
                break
            
            esi_1 += 1
            
            if (esi_1 s>= eax_1)
                return eax_3
        
        int32_t edx_3 = *var_10
        uint32_t eax_6 = zx.d((edx_3 u>> 3).b) & 1
        eax_1 = sub_4c38b0(eax_6, (edx_3 u>> 0x1c) - 1, arg4, eax_6.b)
        void* edi_2 = eax_1
        int32_t ecx_3
        
        if (arg3 != 0xffffffff)
            eax_1 = sub_618a60(arg3)
            
            if (eax_1 != 0)
                int32_t eax_8
                char edx_6
                edx_6:eax_8 = sx.q(arg2)
                eax_1 = *(*(eax_1 + 0x429c) + (((
                    (arg2 - ((eax_8 + zx.d(edx_6)) s>> 8) * 0x9c + 0xf4628) s>> 4
                    | (arg2 - ((eax_8 + zx.d(edx_6)) s>> 8) * 0x9c + 0xf4628)) & *(eax_1 + 0x42a0))
                    << 2))
                
                if (eax_1 == 0)
                label_618bc5:
                    var_20 = 0
                    ecx_3 = var_20.d
                else
                    while (arg2 - ((eax_8 + zx.d(edx_6)) s>> 8) * 0x9c + 0xf4628 != *eax_1)
                        eax_1 = *(eax_1 + 0x18)
                        
                        if (eax_1 == 0)
                            goto label_618bc5
                    
                    void* temp0_1 = eax_1
                    eax_1 += 8
                    
                    if (temp0_1 == 0xfffffff8)
                        goto label_618bc5
                    
                    ecx_3 = *(eax_1 + 8)
            else
                ecx_3 = 0
        else
            ecx_3 = 0
        
        if (arg4 == 0)
            if (edi_2 s>= ecx_3)
            label_618bf1:
                void* eax_14 = sub_618a60(arg3)
                
                if (eax_14 != 0)
                    int32_t eax_16
                    int32_t edx_11
                    edx_11:eax_16 = sx.q(edi_2)
                    int32_t var_34_2 = edx_11
                    int32_t eax_18
                    char edx_12
                    edx_12:eax_18 = sx.q(arg2)
                    int32_t eax_21 = ((eax_18 + zx.d(edx_12)) s>> 8) * 0x9c
                    sub_4bac10(eax_21, arg2 - eax_21 + 0xf4628, eax_14, eax_16)
                    data_cc8dc8
                    sub_4d8ad0(arg3)
                
                eax_1 = data_cc8d5c
                
                if (eax_1 == 0)
                    sub_63b870(eax_1, &data_801800, "gClient", 
                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                if (arg5 == 0 && arg4 != 0 && arg3 == *(eax_1 + 0x7590))
                    int32_t ecx_12 = data_be22f8
                    
                    if (ecx_12 == 8)
                        return sub_63b5f0("too many achievement popups")
                    
                    eax_1 = ecx_12 * 5
                    data_be22f8 = ecx_12 + 1
                    *((eax_1 << 2) + &data_be2258) = arg3
                    (&data_be225c)[eax_1] = arg2
                    *((eax_1 << 2) + &data_be2260) = edi_2
                    (&data_be2264)[eax_1 << 2] = 0
                    (&data_be2268)[eax_1] = 0x404ccccd
        else if (edi_2 s> ecx_3)
            goto label_618bf1

return eax_1

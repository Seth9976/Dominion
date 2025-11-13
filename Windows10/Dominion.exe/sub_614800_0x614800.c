// 函数: sub_614800
// 地址: 0x614800
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
uint32_t eax = sub_5cba00(data_b7d434)
int32_t var_78_1
char const* const ecx_1

if (*(eax + 0x2c) == 1)
    int32_t* esi_1 = &data_b809e0
    void* ecx_2 = data_b809e0
    int32_t* var_18_1 = &data_b809e0
    void* result = data_b809e4 * 0x1c30 + ecx_2
    
    if (ecx_2 u>= result)
    label_614876:
        ecx_2 = 0xffffffff
    else
        while ((*(ecx_2 + 0x1c28) & 0xffff0000) == 0)
            ecx_2 += 0x1c30
            
            if (ecx_2 u>= result)
                goto label_614876
    
    void* var_14 = ecx_2
    
    if (ecx_2 == 0xffffffff)
    label_6149db:
        data_b7d424 = 0
        data_b7d434 = 0
        data_b7d42c = 0
        data_b7d430 = 0
        data_b7f4c0 = 0
        return result
    
    while (true)
        int32_t eax_2 = *(ecx_2 + 0x2c)
        
        if (eax_2 == 1)
            int32_t eax_3 = *(ecx_2 + 0x174)
            
            if (eax_3 != 2 && eax_3 != 3)
                if (*(ecx_2 + 0x1c28) != data_b7d434)
                    sub_5cb5a0(ecx_2)
                else
                    int32_t edx_1 = *(ecx_2 + 0x178)
                    
                    if (edx_1 == 0)
                        sub_5cb5a0(ecx_2)
                    else
                        uint32_t eax_5 = zx.d(edx_1.w)
                        
                        if (eax_5 u>= data_b809e4)
                            sub_5cb5a0(ecx_2)
                        else
                            eax = eax_5 * 0x1c30 + data_b809e0
                            
                            if (*(eax + 0x1c28) != edx_1 || eax == 0 || *(eax + 0x1a18) != 0)
                                sub_5cb5a0(ecx_2)
                            else if (*(eax + 0x370) == 1)
                            label_614975:
                                int64_t var_38_1 = 0
                                int32_t var_3c_1 = 3
                                int32_t var_74_2 = eax + 0x378
                                int128_t var_60 = ecx_2.o
                                int32_t var_2c_1 = 0
                                int64_t var_50_1 = 0.q
                                sub_5cb7c0(eax + 0x378, &var_60, ecx_2 + 0x258, ecx_2)
        else if (eax_2 == 2)
            int32_t edx_2 = *(ecx_2 + 0x24c)
            
            if (edx_2 == 0)
                sub_5cb5a0(ecx_2)
            else
                uint32_t eax_7 = zx.d(edx_2.w)
                
                if (eax_7 u>= data_b809e4)
                    sub_5cb5a0(ecx_2)
                else
                    eax = eax_7 * 0x1c30 + data_b809e0
                    
                    if (*(eax + 0x1c28) == edx_2 && eax != 0 && *(eax + 0x1a18) == 0)
                        if (*(eax + 0x370) == 1)
                            goto label_614975
                        
                        char const* const var_74_4 = "DomZoomDismissAll"
                        var_78_1 = 0xc251
                        ecx_1 = "source->move.locCurrent.type == LOC_USER"
                        break
                    
                    sub_5cb5a0(ecx_2)
        
        result = sub_6376d0(esi_1, &var_14)
        ecx_2 = var_14
        
        if (ecx_2 == 0xffffffff)
            goto label_6149db
        
        esi_1 = var_18_1
else
    char const* const var_74_1 = "DomZoomDismissAll"
    var_78_1 = 0xc21b
    ecx_1 = "gfx.type == DOMGFX_CARD_PLACEHOLDER"

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_78_1, 
    "DomZoomDismissAll")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

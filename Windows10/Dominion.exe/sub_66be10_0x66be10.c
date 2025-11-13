// 函数: sub_66be10
// 地址: 0x66be10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char** eax = arg4
*eax = &data_801800
int32_t esi = 1
int32_t var_28
char const* const var_24
char* ecx
char const* const edx

if (arg3 != 0)
    if (arg3[1] == 0x22)
        void** eax_1 = sub_5af880(arg3)
        int32_t edi_1 = 0
        void** var_10_1 = eax_1
        
        if (eax_1[2] s<= 0)
        label_66bec0:
            int32_t* edx_3 = &arg4[esi]
            int32_t eax_5 = esi << 2 s>> 2
            *edx_3 = 0
            sub_4d4e30(eax_5, edx_3, arg4, eax_5, sub_66bdd0)
            void* result
            result.b = 1
            return result
        
        int32_t ebx_1 = 0
        
        while (true)
            int32_t* eax_3 = *eax_1 + ebx_1
            eax = sub_6dcf50(eax_3, eax_3, &data_8cae70, 0x66)
            
            if (eax != arg2)
                goto label_66beac
            
            eax = sub_6dd140(eax, eax_3, &data_8cae70, 0x64)
            
            if (eax != 0)
                arg4[esi] = eax
                esi += 1
            label_66beac:
                
                if (esi == 0x7f)
                    var_24 = "MakeStyles"
                    var_28 = 0x40a0
                    ecx = "Halt"
                    break
            
            eax_1 = var_10_1
            edi_1 += 1
            ebx_1 += 0x18
            
            if (edi_1 s>= eax_1[2])
                goto label_66bec0
    else
        var_24 = "UI2DefGet"
        var_28 = 0xc17
        ecx = "ptr->assetType == ASSET_TYPE_UI2"
    
    edx = &data_801800
else
    var_24 = "UI2DefGet"
    var_28 = 0xc16
    edx = "UI2DefGet on null pointer"
    ecx = &data_874470

sub_63b870(eax, edx, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_28, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

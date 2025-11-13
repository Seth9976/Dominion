// 函数: sub_64f3f0
// 地址: 0x64f3f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t var_1c_1
char* ecx
char const* const edx

if (arg1 != 0)
    if (arg1[1] == 0x22)
        int32_t* eax_1 = sub_5af880(arg1)
        int32_t* ebx = eax_1
        int32_t i = 0
        
        if (ebx[2] s> 0)
            int32_t edi_1 = 0
            
            do
                eax_1 = _stricmp(sub_6dd140(eax_1, *ebx + edi_1, &data_8cae70, 0x64), arg2)
                
                if (eax_1 == 0)
                    return *ebx + i * 0x18
                
                i += 1
                edi_1 += 0x18
            while (i s< ebx[2])
        
        return 0
    
    char const* const var_18_3 = "UI2DefGet"
    var_1c_1 = 0xc17
    edx = &data_801800
    ecx = "ptr->assetType == ASSET_TYPE_UI2"
else
    char const* const var_18_1 = "UI2DefGet"
    var_1c_1 = 0xc16
    edx = "UI2DefGet on null pointer"
    ecx = &data_874470

int32_t eax
sub_63b870(eax, edx, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_1c_1, "UI2DefGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

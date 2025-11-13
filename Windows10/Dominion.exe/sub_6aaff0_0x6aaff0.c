// 函数: sub_6aaff0
// 地址: 0x6aaff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax
int32_t ecx_1
eax, ecx_1 = sub_7200a0(arg3, arg4)
int32_t var_30 = ecx_1
float* var_8
int32_t* var_34 = &var_8
void var_14
int32_t* var_38 = &var_14
int32_t var_18
int32_t* eax_1 = &var_18
int32_t* var_3c = &var_18
float* var_1c
int32_t eax_6

if (eax == 0)
    char* eax_8 = sub_71fd70(eax_1, arg4, arg3, var_3c, var_38, var_34)
    var_1c = eax_8
    int32_t var_34_2
    char* ecx_7
    
    if (eax_8 == 0)
        char const* const var_30_3 = "TextureLoadWithSTB"
        var_34_2 = 0x3ba
        ecx_7 = "sourceSpec.pImage"
    label_6ab14e:
        sub_63b870(eax_8, &data_801800, ecx_7, "C:\x\ax2017\Engine\TextureImport.cpp", var_34_2, 
            "TextureLoadWithSTB")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_8 = var_8
    
    if (eax_8 != 4)
        if (eax_8 != 3)
            char const* const var_30_4 = "TextureLoadWithSTB"
            var_34_2 = 0x3d8
            ecx_7 = "Halt"
            goto label_6ab14e
        
        int32_t var_c_3 = 0x14
        eax_6 = sub_6a9570(var_18, 0x14)
    else
        int32_t var_c_2 = 2
        eax_6 = sub_6a9570(var_18, 2)
else
    float* eax_2 = sub_71ffc0(eax_1, arg4, arg3, var_3c, var_38, var_34)
    var_1c = eax_2
    char const* const var_38_1
    int32_t var_34_1
    char const* const var_30_1
    char* ecx_3
    
    if (eax_2 == 0)
        var_30_1 = "TextureLoadWithSTB"
        var_34_1 = 0x399
        ecx_3 = "sourceSpec.pImage"
    label_6ab174:
        var_38_1 = "C:\x\ax2017\Engine\TextureImport.cpp"
    label_6ab17e:
        sub_63b870(eax_2, &data_801800, ecx_3, var_38_1, var_34_1, var_30_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_2 = var_8
    void* esi_1
    
    if (eax_2 == 4)
        esi_1 = &eax_2[0x1c]
    else if (eax_2 != 3)
        if (eax_2 != 1)
            var_30_1 = "TextureLoadWithSTB"
            var_34_1 = 0x3a9
            ecx_3 = "Halt"
            goto label_6ab174
        
        esi_1 = 0x72
    else
        esi_1 = 0x3e8
    
    int32_t edi_1 = var_18
    void* var_c_1 = esi_1
    
    if (esi_1 - 0xd u> 8)
    label_6ab0a9:
        
        if (sub_6a9450(esi_1) * edi_1 s>= 4)
            eax_6 = sub_6a9450(esi_1) * edi_1
        else
            eax_6 = 4
    else
        eax_2 = zx.d(*(esi_1 + 0x6ab193))
        
        switch (eax_2)
            case nullptr
                var_30_1 = "TextureFormatPitch"
                var_34_1 = 0x85
                var_38_1 = "C:\x\ax2017\Engine\ImageUtils.cpp"
                ecx_3 = "!TextureFormatIsCompressed(format)"
                goto label_6ab17e
            case 1
                goto label_6ab0a9

int32_t var_10 = eax_6
sub_6a9de0(&var_1c, arg2)
free(var_1c)
int32_t result
result.b = 1
return result

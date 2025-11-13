// 函数: sub_6aea80
// 地址: 0x6aea80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_34 = arg2
int32_t var_30 = arg3
int32_t var_2c = arg5
int32_t var_28 = arg4
int32_t eax_5 = sub_6aea20(arg6)
int32_t var_24 = eax_5
int32_t var_20 = 1
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_10 = 0
char var_c = 0
int32_t var_48
char const* const ecx_1

if (arg7 == 0)
    if (arg4 == 1)
        int32_t var_14_1 = 8
        
        if (*(data_cf65b8 + 0x21) != 0 && arg5 == 1)
            int32_t var_14_2 = 0x28
            int32_t var_2c_1 = 0
            var_c = 1
        
        goto label_6aebd3
    
    char const* const var_44 = "Dx11GraphicsInterface::CreateTextureBuffer"
    var_48 = 0x22a
    ecx_1 = "depth == 1"
else if (arg7 == 1)
    eax_5 = arg3
    
    if (arg2 == eax_5)
        if (arg4 == 6)
            int32_t var_14_3 = 8
            var_c = 4
            goto label_6aebd3
        
        char const* const var_44_2 = "Dx11GraphicsInterface::CreateTextureBuffer"
        var_48 = 0x238
        ecx_1 = "depth == 6"
    else
        char const* const var_44_1 = "Dx11GraphicsInterface::CreateTextureBuffer"
        var_48 = 0x237
        ecx_1 = "width == height"
else if (arg7 == 2)
    char const* const var_44_3 = "Dx11GraphicsInterface::CreateTextureBuffer"
    var_48 = 0x23f
    ecx_1 = "Halt"
else if (arg7 != 3)
    if (arg7 == 4)
        goto label_6aebc9
    
    if (arg7 == 5)
        int32_t var_20_1 = *(arg1 + 0x60)
        int32_t var_14_5 = 0x20
        goto label_6aebd3
    
    if (arg7 == 6)
        int32_t var_20_2 = *(arg1 + 0x60)
    label_6aebc9:
        int32_t var_14_6 = 0x40
        goto label_6aebd3
    
    char const* const var_44_16 = "Dx11GraphicsInterface::CreateTextureBuffer"
    var_48 = 0x255
    ecx_1 = "Halt"
else
    int32_t var_14_4 = 0x28
label_6aebd3:
    int32_t* eax_9 = sub_6b2e00(arg1 + 0x38)
    *eax_9 = 2
    int32_t* edx_1 = *(arg1 + 4)
    eax_5 = (*(*edx_1 + 0x14))(edx_1, &var_34, 0, &eax_9[7])
    
    if (eax_5 s< 0)
        char const* const var_44_5 = "Dx11GraphicsInterface::CreateTextureBuffer"
        var_48 = 0x25c
        ecx_1 = "SUCCEEDED(hr)"
    else if (arg7 == 4 || arg7 == 6)
        int32_t* ecx_8 = *(arg1 + 4)
        eax_5 = (*(*ecx_8 + 0x28))(ecx_8, eax_9[7], 0, &eax_9[9])
        
        if (eax_5 s>= 0)
        label_6aecc9:
            uint32_t result = eax_9[0x92]
            CookieCheckFunction(result)
            return result
        
        char const* const var_44_15 = "Dx11GraphicsInterface::CreateTextureBuffer"
        var_48 = 0x261
        ecx_1 = "SUCCEEDED(hr)"
    else
        int32_t* ecx_4 = *(arg1 + 4)
        int32_t edx_2 = *ecx_4
        
        if (arg7 == 3)
            eax_5 = (*(edx_2 + 0x24))(ecx_4, eax_9[7], 0, &eax_9[0xc])
            
            if (eax_5 s>= 0)
                int32_t* ecx_5 = *(arg1 + 4)
                eax_5 = (*(*ecx_5 + 0x1c))(ecx_5, eax_9[7], 0, &eax_9[8])
                
                if (eax_5 s>= 0)
                    goto label_6aecc9
                
                char const* const var_44_9 = "Dx11GraphicsInterface::CreateTextureBuffer"
                var_48 = 0x269
                ecx_1 = "SUCCEEDED(hr)"
            else
                char const* const var_44_7 = "Dx11GraphicsInterface::CreateTextureBuffer"
                var_48 = 0x266
                ecx_1 = "SUCCEEDED(hr)"
        else if (arg7 != 5)
            eax_5 = (*(edx_2 + 0x1c))(ecx_4, eax_9[7], 0, &eax_9[8])
            
            if (eax_5 s>= 0)
                if ((var_c & 1) != 0)
                    *(eax_9 + 6) = 1
                
                goto label_6aecc9
            
            char const* const var_44_13 = "Dx11GraphicsInterface::CreateTextureBuffer"
            var_48 = 0x273
            ecx_1 = "SUCCEEDED(hr)"
        else
            eax_5 = (*(edx_2 + 0x24))(ecx_4, eax_9[7], 0, &eax_9[0xc])
            
            if (eax_5 s>= 0)
                goto label_6aecc9
            
            char const* const var_44_11 = "Dx11GraphicsInterface::CreateTextureBuffer"
            var_48 = 0x26e
            ecx_1 = "SUCCEEDED(hr)"

sub_63b870(eax_5, &data_801800, ecx_1, "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", var_48, 
    "Dx11GraphicsInterface::CreateTextureBuffer")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

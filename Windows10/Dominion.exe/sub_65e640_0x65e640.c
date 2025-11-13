// 函数: sub_65e640
// 地址: 0x65e640
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg2 + 8) == 0 && *(arg2 + 0x50) == 0)
    float xmm0_1 = *(arg2 + 0x20)
    xmm0_1 f- 0
    int32_t eax
    eax:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        *(arg1 + 0x20) = xmm0_1 f* *(arg1 + 0x74)
    
    if (*(arg2 + 0x17) != 0 && *(arg1 + 0x70) == 0)
        *(arg1 + 0x14) = *(arg2 + 0x14)
    
    if (*(arg2 + 0x1b) != 0 && *(arg1 + 0x70) == 0)
        *(arg1 + 0x18) = *(arg2 + 0x18)

int32_t eax_3 = *(arg2 + 0x58)

if (eax_3 != 0)
    *(arg1 + 0x58) = eax_3

int32_t eax_4 = *(arg2 + 0x10)

if (eax_4 != 0)
    *(arg1 + 0x10) = eax_4

int32_t result = *(arg2 + 4)

if (result != 0)
    *(arg1 + 4) = result
label_65e6b4:
    int32_t eax_5 = *(arg2 + 0x60)
    
    if (eax_5 == 0)
        *(arg1 + 0x60) = 0
    else
        *(arg1 + 0x60) = eax_5
        *(arg1 + 0x64) = *(arg2 + 0x64)
        *(arg1 + 0x68) = *(arg2 + 0x68)
        float xmm0_3 = *(arg2 + 0x64)
        xmm0_3 f- 0
        int32_t eax_7
        eax_7:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
            | (xmm0_3 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (not(p_4))
            sub_63b870(eax_7, &data_801800, "escape.ttfontPixelHeight != 0", 
                "C:\x\ax2017\Engine\UI2.cpp", 0x2931, "MergeFancyFont")
            
            if (sub_63bc30() == 0)
                noreturn sub_63bb00() __tailcall
            
            breakpoint
        
        *(arg1 + 4) = 0
    
    *(arg1 + 0xc) = *(arg2 + 0xc)
    *(arg1 + 0x24) = *(arg2 + 0x24)
    *(arg1 + 0x2c) = *(arg2 + 0x2c)
    result = *(arg2 + 0x30)
    *(arg1 + 0x30) = result
else if (*(arg2 + 0x60) != result)
    goto label_65e6b4

return result

// 函数: sub_6b3320
// 地址: 0x6b3320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1

if (arg4 s>= 0x80)
    int32_t* result = *(*(arg3 + 0x38) + (((arg4 u>> 4 | arg4) & *(arg3 + 0x3c)) << 2))
    
    if (result == 0)
        return 0
    
    while (arg4 != *result)
        result = result[2]
        
        if (result == 0)
            return result
    
    if (result == 0xfffffffc)
        return 0
    
    eax_1 = result[1]
else
    eax_1 = *(arg3 + (arg4 << 2) + 0x44)
    
    if (eax_1 == 0xffffffff)
        return 0

if (eax_1 s>= 0 && eax_1 s< *(arg2 + 0x18))
    return *(arg2 + 0x20) + eax_1 * 0x24

sub_63b870(eax_1, &data_801800, "glyphIndex >= 0 && glyphIndex < pLayer->glyphCount", 
    "C:\x\ax2017\Engine\Font.cpp", 0xce, "FontUnicodeToGlyph")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

// 函数: sub_6a9450
// 地址: 0x6a9450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1 s> 0x3e8)
    if (arg1 == 0x3ea)
        return 8
    
    if (arg1 == 0x3eb)
        return 0x10
    
    goto label_6a94a2

if (arg1 == 0x3e8)
    return 0xc

int32_t var_8
uint32_t eax

if (arg1 - 1 u> 0x71)
label_6a94a2:
    char const* const var_4_1 = "TextureFormatBytesPerPixel"
    var_8 = 0x6d
else
    eax = zx.d(*(arg1 + &jump_table_6a94dc[5]:3))
    
    switch (eax)
        case 0
            return 4
        case 1
            return 3
        case 2
            return 2
        case 3
            return 1
        case 4
            char const* const var_4 = "TextureFormatBytesPerPixel"
            var_8 = 0x6a
        case 5
            goto label_6a94a2

sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\ImageUtils.cpp", var_8, 
    "TextureFormatBytesPerPixel")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint

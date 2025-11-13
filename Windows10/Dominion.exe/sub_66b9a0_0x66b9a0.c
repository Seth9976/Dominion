// 函数: sub_66b9a0
// 地址: 0x66b9a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = data_c27c18
int32_t result = 0
int32_t var_c
char const* const ecx

if (esi s<= 0)
label_66b9e1:
    char const* const var_8_1 = "GetDisplayItemIndex"
    var_c = 0x3ff9
    ecx = "Halt"
else
    void* edx_1 = &data_c23c18
    
    while (true)
        if (*edx_1 == arg1)
            result = *((result << 4) + &data_c23c20)
            
            if (result != 0xffffffff)
                return result
            
            char const* const var_8 = "GetDisplayItemIndex"
            var_c = 0x3ff4
            ecx = "gUI2Editor.displayEls[i].displayIndex != -1"
            break
        
        result += 1
        edx_1 += 0x10
        
        if (result s>= esi)
            goto label_66b9e1

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_c, "GetDisplayItemIndex")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

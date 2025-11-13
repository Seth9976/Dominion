// 函数: sub_667360
// 地址: 0x667360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = data_c27c18
void* result = nullptr
int32_t var_c
char const* const ecx

if (esi s<= 0)
label_6673bf:
    char const* const var_8_2 = "UI2GetByDisplayIndex"
    var_c = 0x395b
    ecx = "Halt"
else
    void* edx_1 = &data_c23c20
    
    while (true)
        if (*edx_1 == arg1)
            result = *((result << 4) + &data_c23c18)
            
            if (*(result + 0x171c) == 0)
                if (*(result + 0x16b0) == 0)
                    return result
                
                char const* const var_8_1 = "UI2GetByDisplayIndex"
                var_c = 0x3956
                ecx = "gUI2Editor.displayEls[i].el->worldInfo.index == 0"
            else
                char const* const var_8 = "UI2GetByDisplayIndex"
                var_c = 0x3955
                ecx = "gUI2Editor.displayEls[i].el->clone == false"
            
            break
        
        result += 1
        edx_1 += 0x10
        
        if (result s>= esi)
            goto label_6673bf

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_c, "UI2GetByDisplayIndex")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

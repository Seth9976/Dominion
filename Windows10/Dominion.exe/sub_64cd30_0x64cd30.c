// 函数: sub_64cd30
// 地址: 0x64cd30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t eax = *arg1

if (eax == 1)
    int32_t eax_4 = sub_67d600(arg1)
    _mm_cvtepi32_ps(zx.o(eax_4))
    return eax_4

if (eax != 2)
    return eax

int32_t edx_3 = arg1[1]
int32_t var_10
char const* const var_c

if (edx_3 == 0)
    if (eax == 1)
        _mm_cvtepi32_ps(zx.o(arg1[4]))
        return eax - 1
    
    int32_t eax_2 = eax - 2
    
    if (eax == 2)
        arg1[4]
        return eax_2
    
    eax = eax_2 - 1
    
    if (eax_2 == 1)
        char* _String_1 = arg1[3]
        char* const _String = &data_801800
        
        if (_String_1 != 0)
            _String = _String_1
        
        float var_8_1 = fconvert.s(arg2)
        return atof(_String)
    
    var_c = "EvalValGet"
    var_10 = 0x8e0
else
    var_c = "EvalValEval"
    
    var_10 = edx_3 == 1 ? 0xca5 : 0xca9

sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", var_10, var_c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

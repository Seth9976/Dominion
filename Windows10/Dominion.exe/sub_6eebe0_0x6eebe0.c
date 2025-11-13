// 函数: sub_6eebe0
// 地址: 0x6eebe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx
ebx.b = arg2
void* eax = sub_6ee800()
int32_t var_34
char const* const ecx

if (eax != 0)
    if (arg1 s>= 0 && arg1 s< *(eax + 8))
        data_147d480 - data_147d484
        float* edi_2 = (arg1 << 4) + *eax
        int32_t var_1c
        GetWindowRect(GetDlgItem(data_147d470, 0x80), &var_1c)
        ScreenToClient(data_147d470, &var_1c)
        POINT point
        ScreenToClient(data_147d470, &point)
        int32_t var_18
        int32_t edx_2 = point.y - (var_18 + 0xa) - 0x14
        int32_t result =
            int.d(_mm_cvtepi32_ps(zx.o(point.x - (var_1c + 0x16) - 8)) * edi_2[2]) + var_1c + 0x16
        
        if (ebx.b == 0)
            *edi_2
        else
            edi_2[1]
        
        _mm_cvtepi32_ps(zx.o(edx_2))
        return result
    
    char const* const var_30_4 = "EditorGetNodePoint"
    var_34 = 0x2e8
    ecx = "nodeIndex >= 0 && nodeIndex < pTrack->paramCount"
else
    char const* const var_30 = "EditorGetNodePoint"
    var_34 = 0x2e6
    ecx = "pTrack"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", var_34, 
    "EditorGetNodePoint")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

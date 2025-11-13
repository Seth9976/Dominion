// 函数: sub_66ba80
// 地址: 0x66ba80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
int32_t result_1
int32_t edx
result_1, edx =
    sub_66b600(sub_64e7a0(sub_66b2b0(eax, "layersTable", data_c27c44, 0xffffffff)), 0xffffffff)
uint32_t i_1 = sub_64e7a0(arg1)

if (*(sub_66b940(i_1) + 0xc) == 2)
    uint32_t i = i_1
    
    if (i_1 != 0)
        do
            if (*(i + 0x13) != 0)
                *(i + 0x13) = 0
                void* eax_4 = sub_667ae0(i, 0x8b)
                sub_6dcc50(eax_4, eax_4, &data_8cae70, 0x8b, nullptr, 0)
                sub_65bf00(i)
                sub_66ba20(i)
            
            i = *(i + 0x1718)
        while (i != 0)
    
    sub_666850()

int32_t result = sub_66b940(i_1)
int32_t esi_1 = *(result + 8)
int32_t var_28_1
char const* const ecx_8

if (esi_1 != 0xffffffff)
    result = result_1
    
    if (esi_1 s>= result && esi_1 s<= edx)
        return result
    
    int32_t ebx_1 = edx - result
    int32_t ecx_9 = data_c27c1c
    
    if (edx - result s>= 0)
        int32_t eax_6
        int32_t edx_2
        edx_2:eax_6 = sx.q(ebx_1)
        result = (eax_6 - edx_2) s>> 1
        int32_t edi_2 = esi_1 - result
        int32_t ebx_3 = ebx_1 - result + esi_1
        int32_t esi_2 = edi_2
        int32_t edx_3 = ebx_3
        
        if (edi_2 s< 0)
            esi_2 = 0
            result = neg.d(edi_2)
            edx_3 += result
            
            if (edx_3 s> ecx_9)
                edx_3 = ecx_9
        else if (ebx_3 s> ecx_9)
            int32_t ecx_10 = ecx_9 - ebx_3
            result = 0
            edx_3 += ecx_10
            esi_2 = edi_2 + ecx_10
            
            if (esi_2 s< 0)
                esi_2 = 0
        
        int32_t var_10 = esi_2
        int32_t var_c_1 = edx_3
        
        if (ebx_3 s>= edi_2)
            uint32_t edi_3 = data_c27c44
            uint32_t eax_9 = sub_64e7a0(edi_3)
            char* const _Str1 = &data_801800
            char* _Str1_1 = *(eax_9 + 0x15e0)
            
            if (_Str1_1 != 0)
                _Str1 = _Str1_1
            
            uint32_t eax_10 = _stricmp(_Str1, "layersTable")
            
            if (eax_10 != 0)
                eax_10 = eax_9
                int32_t esi_3 = 0
                int32_t ebx_4 = *(eax_10 + 0x189c)
                
                if (ebx_4 != 0)
                    do
                        eax_10 = sub_66b2b0(eax_10, "layersTable", 
                            *(eax_10 + (esi_3 << 2) + 0x179c), 0xffffffff)
                        edi_3 = eax_10
                        
                        if (edi_3 != 0)
                            goto label_66bc27
                        
                        eax_10 = eax_9
                        esi_3 += 1
                    while (esi_3 != ebx_4)
                
                edi_3 = 0
            
        label_66bc27:
            int32_t var_24_3 = 0
            return sub_66b420(eax_10, &var_10, edi_3.b)
        
        char const* const var_24_4 = "UI2EditorSyncSelection"
        var_28_1 = 0x4055
        ecx_8 = "idealRange.y >= idealRange.x"
    else
        char const* const var_24_2 = "UI2EditorSyncSelection"
        var_28_1 = 0x4051
        ecx_8 = "displayWidth >= 0"
else
    char const* const var_24_1 = "UI2EditorSyncSelection"
    var_28_1 = 0x404b
    ecx_8 = "display.displayIndex != -1"

sub_63b870(result, &data_801800, ecx_8, "C:\x\ax2017\Engine\UI2.cpp", var_28_1, 
    "UI2EditorSyncSelection")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

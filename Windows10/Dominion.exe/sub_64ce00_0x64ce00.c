// 函数: sub_64ce00
// 地址: 0x64ce00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = *arg2
char** var_c = arg1

if (ecx - 1 u> 9)
    sub_63d720(arg1, &data_801800)
    return arg1

int32_t var_1c_1
char const* const var_18_1
int32_t eax_3

switch (ecx + &jump_table_64cf4c[3]:3)
    case &lookup_table_64cf5c
        int32_t var_18_3 = sub_67d600(arg2)
        sub_63df30(arg1, "%d")
        return arg1
    case &lookup_table_64cf5c[1]
        int32_t eax_7 = arg2[1]
        eax_3 = eax_7
        
        if (eax_7 != 0)
            goto label_64ce3a
        
        float xmm0[0x2]
        
        if (ecx == 1)
            xmm0 = _mm_cvtepi32_ps(zx.o(arg2[4]))
        label_64ced0:
            int32_t var_1c
            var_1c.q = _mm_cvtps_pd(xmm0)
            sub_63df30(arg1, "%g")
            return arg1
        
        if (ecx == 2)
            xmm0 = arg2[4]
            goto label_64ced0
        
        if (ecx == 3)
            char* _String_1 = arg2[3]
            char* const _String = &data_801800
            
            if (_String_1 != 0)
                _String = _String_1
            
            atof(_String)
            xmm0 = fconvert.s(arg3)
            goto label_64ced0
        
        var_18_1 = "EvalValGet"
        var_1c_1 = 0x8e0
    case &lookup_table_64cf5c[2], &lookup_table_64cf5c[9]
        int32_t eax_2 = arg2[1]
        eax_3 = eax_2
        
        if (eax_2 == 0)
            char* eax_4 = arg2[3]
            *arg1 = eax_4
            
            if (eax_4 == 0 || *eax_4 == 0)
                return arg1
            
            char* eax_5 = sub_63d4e0(arg1)
            *(eax_5 + 4) += 1
            return arg1
        
    label_64ce3a:
        var_18_1 = "EvalValEval"
        int32_t temp2_1 = eax_3
        eax_3 -= 1
        
        var_1c_1 = temp2_1 == 1 ? 0xca5 : 0xca9
    case &lookup_table_64cf5c[3], &lookup_table_64cf5c[4], &lookup_table_64cf5c[5], 
            &lookup_table_64cf5c[6], &lookup_table_64cf5c[7], &lookup_table_64cf5c[8]
        sub_63d720(arg1, &data_801800)
        return arg1

sub_63b870(eax_3, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", var_1c_1, var_18_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
